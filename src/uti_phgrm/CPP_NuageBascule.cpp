/*Header-MicMac-eLiSe-25/06/2007

    MicMac : Multi Image Correspondances par Methodes Automatiques de Correlation
    eLiSe  : ELements of an Image Software Environnement

    www.micmac.ign.fr

   
    Copyright : Institut Geographique National
    Author : Marc Pierrot Deseilligny
    Contributors : Gregoire Maillet, Didier Boldo.

[1] M. Pierrot-Deseilligny, N. Paparoditis.
    "A multiresolution and optimization-based image matching approach:
    An application to surface reconstruction from SPOT5-HRS stereo imagery."
    In IAPRS vol XXXVI-1/W41 in ISPRS Workshop On Topographic Mapping From Space
    (With Special Emphasis on Small Satellites), Ankara, Turquie, 02-2006.

[2] M. Pierrot-Deseilligny, "MicMac, un lociel de mise en correspondance
    d'images, adapte au contexte geograhique" to appears in 
    Bulletin d'information de l'Institut Geographique National, 2007.

Francais :

   MicMac est un logiciel de mise en correspondance d'image adapte 
   au contexte de recherche en information geographique. Il s'appuie sur
   la bibliotheque de manipulation d'image eLiSe. Il est distibue sous la
   licences Cecill-B.  Voir en bas de fichier et  http://www.cecill.info.


English :

    MicMac is an open source software specialized in image matching
    for research in geographic information. MicMac is built on the
    eLiSe image library. MicMac is governed by the  "Cecill-B licence".
    See below and http://www.cecill.info.

Header-MicMac-eLiSe-25/06/2007*/
#include "StdAfx.h"

/*

*/

cXML_ParamNuage3DMaille NuageFromFile(const std::string & aFileNuage)
{
    return StdGetObjFromFile<cXML_ParamNuage3DMaille>
           (
                aFileNuage,
                StdGetFileXMLSpec("SuperposImage.xml"),
                "XML_ParamNuage3DMaille",
                "XML_ParamNuage3DMaille"
           );
}

Box2di BoxEnglobMasq(Tiff_Im aTF,bool * Ok=0)
{
    int aXMin,aXMax,aYMin,aYMax;
    ELISE_COPY
    (
        select(aTF.all_pts(),aTF.in_bool()),
        Virgule(FX,FY),
        Virgule
        (
            VMin(aXMin)|VMax(aXMax),
            VMin(aYMin)|VMax(aYMax)
        )
    );


    if (aXMin > aXMax)
    {
         if (Ok) 
            *Ok = false;
         else
         {
            std::cout << "For FILE : " << aTF.name() << "\n";
            ELISE_ASSERT(false,"Masq is empty");
         }
    }
    else
    {
        if (Ok) *Ok = true;
    }

    return Box2di(Pt2di(aXMin,aYMin),Pt2di(aXMax,aYMax));
}

Box2di BoxEnglobMasq(const std::string & aName,bool * Ok=0)
{
   return BoxEnglobMasq(Tiff_Im(aName.c_str()),Ok);
}

class cBlockBasc
{
    public :
        cBlockBasc(int aK,const std::string & aName) :
            mK      (aK),
            mName   (aName),
            mOK     (true),
            mBoxLoc    (0),
            mBoxGlob   (0)
        {
        }
        void Compute(const cXML_ParamNuage3DMaille &);
     
        int         mK;
        std::string mName;
        bool        mOK;
        Box2di      mBoxLoc;
        Box2di      mBoxGlob;
        Pt2di       mDecGlob;
        cXML_ParamNuage3DMaille mNuage;
};

void cBlockBasc::Compute(const cXML_ParamNuage3DMaille & aNGlob)
{
    cXML_ParamNuage3DMaille aParam = StdGetFromSI(mName+".xml",XML_ParamNuage3DMaille);
    if (aParam.NbPixel() == Pt2di(0,0))
    {
         mOK = false;
         return ;
    }
    
    mNuage = NuageFromFile(mName + ".xml");
    std::string aNameMasq  = mName + "_Masq.tif";
    mBoxLoc = BoxEnglobMasq(aNameMasq,&mOK);

    if (!mOK) return ;

    ElAffin2D AffM2Gl  = Xml2EL(aNGlob.Orientation().OrIntImaM2C());
    ElAffin2D AffM2Loc  = Xml2EL(mNuage.Orientation().OrIntImaM2C());

    ElAffin2D Loc2Glob = AffM2Gl  * AffM2Loc.inv() ;
    mDecGlob = round_ni(Loc2Glob(Pt2dr(0,0)));
    mBoxGlob = Box2di(mBoxLoc._p0 + mDecGlob,mBoxLoc._p1 + mDecGlob);
    // std::cout << "Name " << mName <<   "P00 " << mBoxGlob._p0 << " " << mBoxGlob._p1  << "\n";
}

//  BOX GLOB [2154,849][4867,3228]

 
int  NuageBascule_main(int argc,char ** argv)
{

    // ELISE_ASSERT(argc>=2,"Not Enough args to Nuage Bascule");
    MMD_InitArgcArgv(argc,argv);

    std::string  aNameIn,aNameOut,aNameRes;//,aToto;
    bool  AutoResize=true;
    bool  AutoClipIn=true;
    bool  ICalledByP =false;
    bool  ByP       =true;
    bool  mParal       =true;
    Pt2di aSzDecoup(2500,2500);
    std::string  aSuplOut="";
    Box2di aBoxIn;
    bool   mShowCom = false;
    int    mTileFile = 1e6;
    double mSeuilEtir=5;

    ElInitArgMain
    (
	argc,argv,
	LArgMain()  << EAMC(aNameIn,"Name of input depth map")
                    << EAMC(aNameOut,"Name of outptut depth map")
                    << EAMC(aNameRes,"Name result"),
	LArgMain()  
                    << EAM(ByP,"ByP",true,"By process in parall, Def = true (faster and avoid memory overflow)")
                    << EAM(AutoResize,"AutoResize",true,"Clip result to minimal size, Def = true")
                    << EAM(AutoClipIn,"AutoClipIn",true,"Clip result to minimal size")
                    << EAM(aBoxIn,"BoxIn",true,"Box input")
                    << EAM(aSzDecoup,"SzDecoup",true,"Size of split for paral")
                    << EAM(ICalledByP,"InternallCalledByP",true,"Internal purpose : dont use")
                    << EAM(aSuplOut,"InternallSuplOut",true,"Internal purpose : dont use")
                    << EAM(mShowCom,"ShowCom",true,"Show commande, def = false")
                    << EAM(mTileFile,"TileFile",true,"Tile for Big File, def= no tiling for file < 4 Giga Byte")
                    << EAM(mParal,"Paral",true,"Do in paral , tuning purpose, def=true")
                    << EAM(mSeuilEtir,"SeuilE",true,"Thrashold for etiring (def = 5.0)")
    );
    Tiff_Im::SetDefTileFile(mTileFile);


    cXML_ParamNuage3DMaille  aNuageIn =  NuageFromFile(aNameIn);
    cXML_ParamNuage3DMaille  aNuageOut =  NuageFromFile(aNameOut);
    bool HasCor = aNuageIn.Image_Profondeur().Val().Correl().IsInit();

    if (ByP && (!ICalledByP))
    {
         int aBrd=5;
         Pt2di aPBrd(aBrd,aBrd);
         std::string aComBase =  MMBinFile(MM3DStr) +  MakeStrFromArgcARgv(argc,argv);
         Box2di      aBoxInGlob  = BoxEnglobMasq(DirOfFile(aNameIn) + aNuageIn.Image_Profondeur().Val().Masq());
         cDecoupageInterv2D aDecoup (aBoxInGlob,aSzDecoup,Box2di(-aPBrd,aPBrd));


// std::cout << "AAA " << aSzDecoup << aBoxInGlob._p0 << aBoxInGlob._p1 << aDecoup.NbInterv() << "\n"; getchar();

         std::list<std::string> aLCom;
         std::vector<cBlockBasc *> mVBl;
         for (int aKB=0 ; aKB<aDecoup.NbInterv() ; aKB++)
         {
             std::string aSupl = "BoxBasc" +ToString(aKB) +  std::string("_");
             Box2di aBoxK = aDecoup.KthIntervIn(aKB);
             std::string aCom =  aComBase 
                               + std::string(" InternallCalledByP=true ")
                               + std::string(" InternallSuplOut=") + aSupl 
                               + std::string(" BoxIn=") + ToString(aBoxK)
/*
                               + std::string(" BoxIn=[") + ToString(aBoxK._p0.x) + std::string(",") 
                                                        + ToString(aBoxK._p0.y) + std::string(",") 
                                                        + ToString(aBoxK._p1.x) + std::string(",") 
                                                        + ToString(aBoxK._p1.y) 
                               + std::string("] ") 
*/
                           ;


             if (mShowCom)
                std::cout << "COM= " << aCom << "\n";
             aLCom.push_back(aCom);

             mVBl.push_back(new cBlockBasc(aKB,AddPrePost(aNameRes,aSupl,"")));
             // System(aCom);
         }
         ElTimer aChrono;
         std::cout << "-Basc1- bascule by block \n";
         if (mParal)
         {
            cEl_GPAO::DoComInParal(aLCom,"MakeBascule");
         }
         else
         {
            cEl_GPAO::DoComInSerie(aLCom);
         }

         std::cout << "-Basc2- create glob T=" << aChrono.uval() << " \n";

         std::cout << "\n";
         Pt2di aP0(1e9,1e9);
         Pt2di aP1(-1e9,-1e9);
         bool oneBlocOk =false;
         for (int aKB=0 ; aKB<int(mVBl.size()) ; aKB++)
         {
             cBlockBasc & aBl = *(mVBl[aKB]);
             aBl.Compute(aNuageOut);
             if (aBl.mOK)
             {
                aP0.SetInf(aBl.mBoxGlob._p0);
                aP1.SetSup(aBl.mBoxGlob._p1);
                oneBlocOk = true;
             }
         }
         if (! oneBlocOk)
         {
              ELISE_ASSERT(false,"No bloc OK : probable bascule with empty mask !!!");
         }
         Pt2di aSzNew = Pt2di(aP1-aP0);

         Pt2dr aRP0 = Pt2dr(aP0);
         Pt2dr aRSzN = Pt2dr(aSzNew);
         cXML_ParamNuage3DMaille  aNewNuageOut =  CropAndSousEch(aNuageOut,aRP0,1.0,aRSzN);

         std::string aPrefRes = StdPrefix(aNameRes);

         std::string aNameMasq = aPrefRes + "_Masq.tif";
         std::string aNameProf = aPrefRes + "_Prof.tif";

         aNewNuageOut.Image_Profondeur().Val().Image() = NameWithoutDir(aNameProf);
         aNewNuageOut.Image_Profondeur().Val().Masq() = NameWithoutDir(aNameMasq);
         aNewNuageOut.Image_Profondeur().Val().Correl().SetNoInit();
         

         Tiff_Im aFileProf
                 (
                      aNameProf.c_str(),
                      aSzNew,
                      GenIm::real4,
                      Tiff_Im::No_Compr,
                      Tiff_Im::BlackIsZero
                 );
         Tiff_Im aFileMasq
                 (
                      aNameMasq.c_str(),
                      aSzNew,
                      GenIm::bits1_msbf,
                      Tiff_Im::No_Compr,
                      Tiff_Im::BlackIsZero
                 );
         ELISE_COPY(aFileMasq.all_pts(),0,aFileMasq.out());
         ELISE_COPY(aFileProf.all_pts(),-1e9,aFileProf.out());

         Tiff_Im * aFileCorrel = 0;
         std::string aNameCorrel =  aPrefRes + "_Correl.tif";

         if (HasCor)
         {
                 aFileCorrel = new Tiff_Im (
                                              aNameCorrel.c_str(),
                                              aSzNew,
                                              GenIm::u_int1,
                                              Tiff_Im::No_Compr,
                                              Tiff_Im::BlackIsZero
                                         );
                 ELISE_COPY(aFileCorrel->all_pts(),0,aFileCorrel->out());
                 aNewNuageOut.Image_Profondeur().Val().Correl().SetVal(NameWithoutDir(aNameCorrel));
         }
 
         MakeFileXML(aNewNuageOut,aPrefRes+".xml");
        
        // TFW
        {
            std::string aNameTFW = StdPrefix(aNameProf) + ".tfw";
            std::ofstream aFtfw(aNameTFW.c_str());
            aFtfw.precision(10);
            
            ElAffin2D aAfM2C = Xml2EL(aNewNuageOut.Orientation().OrIntImaM2C());

            
            double resolutionX = 1./aAfM2C.I10().x;
            double resolutionY = 1./aAfM2C.I01().y;
            double origineX = -aAfM2C.I00().x * resolutionX;
            double origineY = -aAfM2C.I00().y * resolutionY;
            aFtfw << resolutionX << "\n" << 0 << "\n";
            aFtfw << 0 << "\n" << resolutionY << "\n";
            aFtfw << origineX << "\n" << origineY << "\n";

            //aFtfw << aFOM.ResolutionPlani().x << "\n" << 0 << "\n";
            //aFtfw << 0 << "\n" << aFOM.ResolutionPlani().y << "\n";
            //aFtfw << aFOM.OriginePlani().x << "\n" << aFOM.OriginePlani().y << "\n";
            aFtfw.close();
        }
        
         std::cout << "-Basc3- merge blocks T=" << aChrono.uval() << "\n";
         for (int aKB=0 ; aKB<aDecoup.NbInterv() ; aKB++)
         {
             cBlockBasc & aBl =  *(mVBl[aKB]);
             if (aBl.mOK)
             {
                  Pt2di aSz = aBl.mBoxLoc.sz();
                  Im2D_Bits<1> aIMasqLoc(aSz.x,aSz.y,0);
                  Im2D_REAL4   aProfLoc(aSz.x,aSz.y);

                  // On charge les solutions partielles
                  std::string aNameMasqL = aBl.mName+"_Masq.tif"; 
                  ELISE_COPY
                  (
                        aIMasqLoc.all_pts(),
                        trans(Tiff_Im::StdConv(aNameMasqL).in(),aBl.mBoxLoc._p0) ,
                        aIMasqLoc.out()
                  );

                  std::string aNameProfL = aBl.mName+"_Prof.tif"; 
                  ELISE_COPY
                  (
                         aProfLoc.all_pts(),
                         trans(Tiff_Im::StdConv(aNameProfL).in(),aBl.mBoxLoc._p0) ,
                         aProfLoc.out()
                  );
              

                  // On charge les solutions globales
                  Pt2di aDec =  aBl.mBoxGlob._p0 - aP0;

                  Im2D_Bits<1> aIMasqGlob(aSz.x,aSz.y);
                  Im2D_REAL4   aProfGlob(aSz.x,aSz.y);

                  ELISE_COPY
                  (
                        aIMasqGlob.all_pts(),
                        trans(aFileMasq.in(),aDec),
                        aIMasqGlob.out()
                  );
                  ELISE_COPY
                  (
                         aProfGlob.all_pts() ,
                         trans(aFileProf.in(),aDec),
                         aProfGlob.out()
                  );

             // ===== Modif 2/10/2013 MPD : tenir compte du fait que le ZBuffer est incomplet car par dalles,
             // donc on n'ecrase que si on est au dessus !!!
                  ELISE_COPY
                  (
                         aIMasqLoc.all_pts(),
                         aIMasqLoc.in() && (aProfLoc.in()>aProfGlob.in()),
                         aIMasqLoc.out()
                  );


             // =============================================
                  ELISE_COPY(select(aIMasqLoc.all_pts(),aIMasqLoc.in()),aProfLoc.in(),aProfGlob.out());
                  ELISE_COPY(select(aIMasqLoc.all_pts(),aIMasqLoc.in()),aIMasqLoc.in(),aIMasqGlob.out());

                  ELISE_COPY(rectangle(aDec,aDec+aSz),trans(aIMasqGlob.in(),-aDec),aFileMasq.out());
                  ELISE_COPY(rectangle(aDec,aDec+aSz),trans(aProfGlob.in(),-aDec),aFileProf.out());

                  ELISE_fp::RmFile(aBl.mName+"_Masq.tif");
                  ELISE_fp::RmFile(aBl.mName+"_Prof.tif");
                  if (aFileCorrel)
                  {

                        std::string aNameCorrL = DirOfFile(aNameIn)+  NameWithoutDir(aBl.mName)+"_Correl.tif"; 
                        // std::cout << aBl.mBoxLoc._p0 << " " << aNameCorrL << "\n";
                        Im2D_U_INT1   aCorLoc(aSz.x,aSz.y);
                        ELISE_COPY(aCorLoc.all_pts(),trans(Tiff_Im::StdConv(aNameCorrL).in(0),aBl.mBoxLoc._p0) ,aCorLoc.out());


                        Im2D_U_INT1   aCorGlob(aSz.x,aSz.y);
                        ELISE_COPY(aCorGlob.all_pts(),trans(aFileCorrel->in(),aDec),aCorGlob.out());

                        ELISE_COPY(select(aIMasqLoc.all_pts(),aIMasqLoc.in()),aCorLoc.in(),aCorGlob.out());
                        ELISE_COPY(rectangle(aDec,aDec+aSz),trans(aCorGlob.in(),-aDec),aFileCorrel->out());
                        ELISE_fp::RmFile(aNameCorrL);
                  }
             }
             ELISE_fp::RmFile(aBl.mName+".xml");
         }
         std::cout << "Basc4- Done T=" << aChrono.uval() << "\n";
    }
    else
    {
        if (EAMIsInit(&aSuplOut))
        {
           aNameRes = AddPrePost(aNameRes,aSuplOut,"");
        }
           

         if (! EAMIsInit(&AutoClipIn)) 
            AutoClipIn = aNuageIn.Image_Profondeur().IsInit();

         Box2di * aBoxClipIn = 0;
         if  (EAMIsInit(&aBoxIn))
         {
               aBoxClipIn = new Box2di(aBoxIn);
         }
         else if (AutoClipIn)
         {
               aBoxClipIn = new Box2di(BoxEnglobMasq(DirOfFile(aNameIn) + aNuageIn.Image_Profondeur().Val().Masq()));
               std::cout << "BoxClipIn " << aBoxClipIn->_p0 << aBoxClipIn->_p1;
         }

        cArgBacule anArg(mSeuilEtir);

         cElNuage3DMaille *  aN = BasculeNuageAutoReSize(aNuageOut,aNuageIn,DirOfFile(aNameIn),NameWithoutDir(aNameRes),AutoResize,aBoxClipIn,anArg);
         if (aN) 
         {
            // std::cout << "AAAAA " << aNameRes << "\n";
            aN->Save(aNameRes);
         }
         else
         {
            // std::cout << "BBBBB " << aNameRes << "\n";
            cXML_ParamNuage3DMaille aParam = aNuageIn;
            aParam.NbPixel() = Pt2di(0,0);
            aParam.Image_Profondeur().Val().Image() = "XXX";
            aParam.Image_Profondeur().Val().Masq() = "XXX";
            aParam.Image_Profondeur().Val().Correl().SetVal("XXX");
            MakeFileXML(aParam,aNameRes+".xml");
         }   

         // std::cout << "N=" << aN  << " => " << NameWithoutDir(aNameRes) << "\n";

   
         delete aBoxClipIn;
    }
    return 0;
}





/*Footer-MicMac-eLiSe-25/06/2007

Ce logiciel est un programme informatique servant à la mise en
correspondances d'images pour la reconstruction du relief.

Ce logiciel est régi par la licence CeCILL-B soumise au droit français et
respectant les principes de diffusion des logiciels libres. Vous pouvez
utiliser, modifier et/ou redistribuer ce programme sous les conditions
de la licence CeCILL-B telle que diffusée par le CEA, le CNRS et l'INRIA 
sur le site "http://www.cecill.info".

En contrepartie de l'accessibilité au code source et des droits de copie,
de modification et de redistribution accordés par cette licence, il n'est
offert aux utilisateurs qu'une garantie limitée.  Pour les mêmes raisons,
seule une responsabilité restreinte pèse sur l'auteur du programme,  le
titulaire des droits patrimoniaux et les concédants successifs.

A cet égard  l'attention de l'utilisateur est attirée sur les risques
associés au chargement,  à l'utilisation,  à la modification et/ou au
développement et à la reproduction du logiciel par l'utilisateur étant 
donné sa spécificité de logiciel libre, qui peut le rendre complexe à 
manipuler et qui le réserve donc à des développeurs et des professionnels
avertis possédant  des  connaissances  informatiques approfondies.  Les
utilisateurs sont donc invités à charger  et  tester  l'adéquation  du
logiciel à leurs besoins dans des conditions permettant d'assurer la
sécurité de leurs systèmes et ou de leurs données et, plus généralement, 
à l'utiliser et l'exploiter dans les mêmes conditions de sécurité. 

Le fait que vous puissiez accéder à cet en-tête signifie que vous avez 
pris connaissance de la licence CeCILL-B, et que vous en avez accepté les
termes.
Footer-MicMac-eLiSe-25/06/2007*/
