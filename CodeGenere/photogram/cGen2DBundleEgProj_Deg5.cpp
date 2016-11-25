// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cGen2DBundleEgProj_Deg5.h"


cGen2DBundleEgProj_Deg5::cGen2DBundleEgProj_Deg5():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("CX",3,24));
   AddIntRef (cIncIntervale("CY",24,45));
   AddIntRef (cIncIntervale("Tmp_PTer",0,3));
   Close(false);
}



void cGen2DBundleEgProj_Deg5::ComputeVal()
{
   double tmp0_ = mCompCoord[0];
   double tmp1_ = tmp0_-mLocPTerInit_x;
   double tmp2_ = mCompCoord[1];
   double tmp3_ = tmp2_-mLocPTerInit_y;
   double tmp4_ = mCompCoord[2];
   double tmp5_ = tmp4_-mLocPTerInit_z;
   double tmp6_ = mLocGradX_x*(tmp1_);
   double tmp7_ = mLocProjInit_x+tmp6_;
   double tmp8_ = mLocGradY_x*(tmp3_);
   double tmp9_ = tmp7_+tmp8_;
   double tmp10_ = mLocGradZ_x*(tmp5_);
   double tmp11_ = tmp9_+tmp10_;
   double tmp12_ = mLocGradX_y*(tmp1_);
   double tmp13_ = mLocProjInit_y+tmp12_;
   double tmp14_ = mLocGradY_y*(tmp3_);
   double tmp15_ = tmp13_+tmp14_;
   double tmp16_ = mLocGradZ_y*(tmp5_);
   double tmp17_ = tmp15_+tmp16_;
   double tmp18_ = (tmp17_)-mLocCentrApp_y;
   double tmp19_ = (tmp18_)/mLocAmplApp;
   double tmp20_ = (tmp11_)-mLocCentrApp_x;
   double tmp21_ = (tmp20_)/mLocAmplApp;
   double tmp22_ = ElSquare(tmp19_);
   double tmp23_ = ElSquare(tmp21_);
   double tmp24_ = VCube(tmp19_);
   double tmp25_ = VCube(tmp21_);
   double tmp26_ = VPow4(tmp19_);
   double tmp27_ = VPow4(tmp21_);
   double tmp28_ = VPow5(tmp19_);
   double tmp29_ = VPow5(tmp21_);

  mVal[0] = (tmp11_+mCompCoord[3]+mCompCoord[4]*(tmp19_)+mCompCoord[5]*(tmp21_)+mCompCoord[6]*tmp22_+mCompCoord[7]*(tmp21_)*(tmp19_)+mCompCoord[8]*tmp23_+mCompCoord[9]*tmp24_+mCompCoord[10]*(tmp21_)*tmp22_+mCompCoord[11]*tmp23_*(tmp19_)+mCompCoord[12]*tmp25_+mCompCoord[13]*tmp26_+mCompCoord[14]*(tmp21_)*tmp24_+mCompCoord[15]*tmp23_*tmp22_+mCompCoord[16]*tmp25_*(tmp19_)+mCompCoord[17]*tmp27_+mCompCoord[18]*tmp28_+mCompCoord[19]*(tmp21_)*tmp26_+mCompCoord[20]*tmp23_*tmp24_+mCompCoord[21]*tmp25_*tmp22_+mCompCoord[22]*tmp27_*(tmp19_)+mCompCoord[23]*tmp29_)-mLocPIm_x;

  mVal[1] = (tmp17_+mCompCoord[24]+mCompCoord[25]*(tmp19_)+mCompCoord[26]*(tmp21_)+mCompCoord[27]*tmp22_+mCompCoord[28]*(tmp21_)*(tmp19_)+mCompCoord[29]*tmp23_+mCompCoord[30]*tmp24_+mCompCoord[31]*(tmp21_)*tmp22_+mCompCoord[32]*tmp23_*(tmp19_)+mCompCoord[33]*tmp25_+mCompCoord[34]*tmp26_+mCompCoord[35]*(tmp21_)*tmp24_+mCompCoord[36]*tmp23_*tmp22_+mCompCoord[37]*tmp25_*(tmp19_)+mCompCoord[38]*tmp27_+mCompCoord[39]*tmp28_+mCompCoord[40]*(tmp21_)*tmp26_+mCompCoord[41]*tmp23_*tmp24_+mCompCoord[42]*tmp25_*tmp22_+mCompCoord[43]*tmp27_*(tmp19_)+mCompCoord[44]*tmp29_)-mLocPIm_y;

}


void cGen2DBundleEgProj_Deg5::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[0];
   double tmp1_ = tmp0_-mLocPTerInit_x;
   double tmp2_ = mCompCoord[1];
   double tmp3_ = tmp2_-mLocPTerInit_y;
   double tmp4_ = mCompCoord[2];
   double tmp5_ = tmp4_-mLocPTerInit_z;
   double tmp6_ = mLocGradX_x*(tmp1_);
   double tmp7_ = mLocProjInit_x+tmp6_;
   double tmp8_ = mLocGradY_x*(tmp3_);
   double tmp9_ = tmp7_+tmp8_;
   double tmp10_ = mLocGradZ_x*(tmp5_);
   double tmp11_ = tmp9_+tmp10_;
   double tmp12_ = mLocGradX_y*(tmp1_);
   double tmp13_ = mLocProjInit_y+tmp12_;
   double tmp14_ = mLocGradY_y*(tmp3_);
   double tmp15_ = tmp13_+tmp14_;
   double tmp16_ = mLocGradZ_y*(tmp5_);
   double tmp17_ = tmp15_+tmp16_;
   double tmp18_ = (tmp17_)-mLocCentrApp_y;
   double tmp19_ = (tmp18_)/mLocAmplApp;
   double tmp20_ = (tmp11_)-mLocCentrApp_x;
   double tmp21_ = (tmp20_)/mLocAmplApp;
   double tmp22_ = ElSquare(tmp19_);
   double tmp23_ = ElSquare(tmp21_);
   double tmp24_ = VCube(tmp19_);
   double tmp25_ = VCube(tmp21_);
   double tmp26_ = VPow4(tmp19_);
   double tmp27_ = VPow4(tmp21_);
   double tmp28_ = mCompCoord[4];
   double tmp29_ = ElSquare(mLocAmplApp);
   double tmp30_ = mCompCoord[5];
   double tmp31_ = mLocGradX_y*mLocAmplApp;
   double tmp32_ = (tmp31_)/tmp29_;
   double tmp33_ = mCompCoord[6];
   double tmp34_ = mLocGradX_x*mLocAmplApp;
   double tmp35_ = (tmp34_)/tmp29_;
   double tmp36_ = mCompCoord[7];
   double tmp37_ = tmp36_*(tmp21_);
   double tmp38_ = mCompCoord[8];
   double tmp39_ = mCompCoord[9];
   double tmp40_ = mCompCoord[10];
   double tmp41_ = 2*(tmp32_);
   double tmp42_ = tmp41_*(tmp19_);
   double tmp43_ = tmp40_*(tmp21_);
   double tmp44_ = 2*(tmp35_);
   double tmp45_ = tmp44_*(tmp21_);
   double tmp46_ = mCompCoord[11];
   double tmp47_ = tmp46_*tmp23_;
   double tmp48_ = mCompCoord[12];
   double tmp49_ = mCompCoord[13];
   double tmp50_ = mCompCoord[14];
   double tmp51_ = 3*(tmp32_);
   double tmp52_ = tmp51_*tmp22_;
   double tmp53_ = tmp50_*(tmp21_);
   double tmp54_ = mCompCoord[15];
   double tmp55_ = tmp54_*tmp23_;
   double tmp56_ = 3*(tmp35_);
   double tmp57_ = tmp56_*tmp23_;
   double tmp58_ = mCompCoord[16];
   double tmp59_ = tmp58_*tmp25_;
   double tmp60_ = mCompCoord[17];
   double tmp61_ = mCompCoord[18];
   double tmp62_ = mCompCoord[19];
   double tmp63_ = 4*(tmp32_);
   double tmp64_ = tmp63_*tmp24_;
   double tmp65_ = tmp62_*(tmp21_);
   double tmp66_ = mCompCoord[20];
   double tmp67_ = tmp66_*tmp23_;
   double tmp68_ = mCompCoord[21];
   double tmp69_ = tmp68_*tmp25_;
   double tmp70_ = 4*(tmp35_);
   double tmp71_ = tmp70_*tmp25_;
   double tmp72_ = mCompCoord[22];
   double tmp73_ = tmp72_*tmp27_;
   double tmp74_ = mCompCoord[23];
   double tmp75_ = mLocGradY_y*mLocAmplApp;
   double tmp76_ = (tmp75_)/tmp29_;
   double tmp77_ = mLocGradY_x*mLocAmplApp;
   double tmp78_ = (tmp77_)/tmp29_;
   double tmp79_ = 2*(tmp76_);
   double tmp80_ = tmp79_*(tmp19_);
   double tmp81_ = 2*(tmp78_);
   double tmp82_ = tmp81_*(tmp21_);
   double tmp83_ = 3*(tmp76_);
   double tmp84_ = tmp83_*tmp22_;
   double tmp85_ = 3*(tmp78_);
   double tmp86_ = tmp85_*tmp23_;
   double tmp87_ = 4*(tmp76_);
   double tmp88_ = tmp87_*tmp24_;
   double tmp89_ = 4*(tmp78_);
   double tmp90_ = tmp89_*tmp25_;
   double tmp91_ = mLocGradZ_y*mLocAmplApp;
   double tmp92_ = (tmp91_)/tmp29_;
   double tmp93_ = mLocGradZ_x*mLocAmplApp;
   double tmp94_ = (tmp93_)/tmp29_;
   double tmp95_ = 2*(tmp92_);
   double tmp96_ = tmp95_*(tmp19_);
   double tmp97_ = 2*(tmp94_);
   double tmp98_ = tmp97_*(tmp21_);
   double tmp99_ = 3*(tmp92_);
   double tmp100_ = tmp99_*tmp22_;
   double tmp101_ = 3*(tmp94_);
   double tmp102_ = tmp101_*tmp23_;
   double tmp103_ = 4*(tmp92_);
   double tmp104_ = tmp103_*tmp24_;
   double tmp105_ = 4*(tmp94_);
   double tmp106_ = tmp105_*tmp25_;
   double tmp107_ = VPow5(tmp19_);
   double tmp108_ = VPow5(tmp21_);
   double tmp109_ = mCompCoord[25];
   double tmp110_ = mCompCoord[26];
   double tmp111_ = mCompCoord[27];
   double tmp112_ = mCompCoord[28];
   double tmp113_ = tmp112_*(tmp21_);
   double tmp114_ = mCompCoord[29];
   double tmp115_ = mCompCoord[30];
   double tmp116_ = mCompCoord[31];
   double tmp117_ = tmp116_*(tmp21_);
   double tmp118_ = mCompCoord[32];
   double tmp119_ = tmp118_*tmp23_;
   double tmp120_ = mCompCoord[33];
   double tmp121_ = mCompCoord[34];
   double tmp122_ = mCompCoord[35];
   double tmp123_ = tmp122_*(tmp21_);
   double tmp124_ = mCompCoord[36];
   double tmp125_ = tmp124_*tmp23_;
   double tmp126_ = mCompCoord[37];
   double tmp127_ = tmp126_*tmp25_;
   double tmp128_ = mCompCoord[38];
   double tmp129_ = 5*(tmp32_);
   double tmp130_ = tmp129_*tmp26_;
   double tmp131_ = mCompCoord[39];
   double tmp132_ = mCompCoord[40];
   double tmp133_ = tmp132_*(tmp21_);
   double tmp134_ = mCompCoord[41];
   double tmp135_ = tmp134_*tmp23_;
   double tmp136_ = mCompCoord[42];
   double tmp137_ = tmp136_*tmp25_;
   double tmp138_ = mCompCoord[43];
   double tmp139_ = tmp138_*tmp27_;
   double tmp140_ = 5*(tmp35_);
   double tmp141_ = tmp140_*tmp27_;
   double tmp142_ = mCompCoord[44];
   double tmp143_ = 5*(tmp76_);
   double tmp144_ = tmp143_*tmp26_;
   double tmp145_ = 5*(tmp78_);
   double tmp146_ = tmp145_*tmp27_;
   double tmp147_ = 5*(tmp92_);
   double tmp148_ = tmp147_*tmp26_;
   double tmp149_ = 5*(tmp94_);
   double tmp150_ = tmp149_*tmp27_;
   double tmp151_ = (tmp21_)*(tmp19_);
   double tmp152_ = (tmp21_)*tmp22_;
   double tmp153_ = tmp23_*(tmp19_);
   double tmp154_ = (tmp21_)*tmp24_;
   double tmp155_ = tmp23_*tmp22_;
   double tmp156_ = tmp25_*(tmp19_);
   double tmp157_ = (tmp21_)*tmp26_;
   double tmp158_ = tmp23_*tmp24_;
   double tmp159_ = tmp25_*tmp22_;
   double tmp160_ = tmp27_*(tmp19_);

  mVal[0] = (tmp11_+mCompCoord[3]+tmp28_*(tmp19_)+tmp30_*(tmp21_)+tmp33_*tmp22_+tmp37_*(tmp19_)+tmp38_*tmp23_+tmp39_*tmp24_+tmp43_*tmp22_+tmp47_*(tmp19_)+tmp48_*tmp25_+tmp49_*tmp26_+tmp53_*tmp24_+tmp55_*tmp22_+tmp59_*(tmp19_)+tmp60_*tmp27_+tmp61_*tmp107_+tmp65_*tmp26_+tmp67_*tmp24_+tmp69_*tmp22_+tmp73_*(tmp19_)+tmp74_*tmp108_)-mLocPIm_x;

  mCompDer[0][0] = mLocGradX_x+(tmp32_)*tmp28_+(tmp35_)*tmp30_+tmp42_*tmp33_+(tmp35_)*tmp36_*(tmp19_)+(tmp32_)*tmp37_+tmp45_*tmp38_+tmp52_*tmp39_+(tmp35_)*tmp40_*tmp22_+tmp42_*tmp43_+tmp45_*tmp46_*(tmp19_)+(tmp32_)*tmp47_+tmp57_*tmp48_+tmp64_*tmp49_+(tmp35_)*tmp50_*tmp24_+tmp52_*tmp53_+tmp45_*tmp54_*tmp22_+tmp42_*tmp55_+tmp57_*tmp58_*(tmp19_)+(tmp32_)*tmp59_+tmp71_*tmp60_+tmp130_*tmp61_+(tmp35_)*tmp62_*tmp26_+tmp64_*tmp65_+tmp45_*tmp66_*tmp24_+tmp52_*tmp67_+tmp57_*tmp68_*tmp22_+tmp42_*tmp69_+tmp71_*tmp72_*(tmp19_)+(tmp32_)*tmp73_+tmp141_*tmp74_;
  mCompDer[0][1] = mLocGradY_x+(tmp76_)*tmp28_+(tmp78_)*tmp30_+tmp80_*tmp33_+(tmp78_)*tmp36_*(tmp19_)+(tmp76_)*tmp37_+tmp82_*tmp38_+tmp84_*tmp39_+(tmp78_)*tmp40_*tmp22_+tmp80_*tmp43_+tmp82_*tmp46_*(tmp19_)+(tmp76_)*tmp47_+tmp86_*tmp48_+tmp88_*tmp49_+(tmp78_)*tmp50_*tmp24_+tmp84_*tmp53_+tmp82_*tmp54_*tmp22_+tmp80_*tmp55_+tmp86_*tmp58_*(tmp19_)+(tmp76_)*tmp59_+tmp90_*tmp60_+tmp144_*tmp61_+(tmp78_)*tmp62_*tmp26_+tmp88_*tmp65_+tmp82_*tmp66_*tmp24_+tmp84_*tmp67_+tmp86_*tmp68_*tmp22_+tmp80_*tmp69_+tmp90_*tmp72_*(tmp19_)+(tmp76_)*tmp73_+tmp146_*tmp74_;
  mCompDer[0][2] = mLocGradZ_x+(tmp92_)*tmp28_+(tmp94_)*tmp30_+tmp96_*tmp33_+(tmp94_)*tmp36_*(tmp19_)+(tmp92_)*tmp37_+tmp98_*tmp38_+tmp100_*tmp39_+(tmp94_)*tmp40_*tmp22_+tmp96_*tmp43_+tmp98_*tmp46_*(tmp19_)+(tmp92_)*tmp47_+tmp102_*tmp48_+tmp104_*tmp49_+(tmp94_)*tmp50_*tmp24_+tmp100_*tmp53_+tmp98_*tmp54_*tmp22_+tmp96_*tmp55_+tmp102_*tmp58_*(tmp19_)+(tmp92_)*tmp59_+tmp106_*tmp60_+tmp148_*tmp61_+(tmp94_)*tmp62_*tmp26_+tmp104_*tmp65_+tmp98_*tmp66_*tmp24_+tmp100_*tmp67_+tmp102_*tmp68_*tmp22_+tmp96_*tmp69_+tmp106_*tmp72_*(tmp19_)+(tmp92_)*tmp73_+tmp150_*tmp74_;
  mCompDer[0][3] = 1;
  mCompDer[0][4] = tmp19_;
  mCompDer[0][5] = tmp21_;
  mCompDer[0][6] = tmp22_;
  mCompDer[0][7] = tmp151_;
  mCompDer[0][8] = tmp23_;
  mCompDer[0][9] = tmp24_;
  mCompDer[0][10] = tmp152_;
  mCompDer[0][11] = tmp153_;
  mCompDer[0][12] = tmp25_;
  mCompDer[0][13] = tmp26_;
  mCompDer[0][14] = tmp154_;
  mCompDer[0][15] = tmp155_;
  mCompDer[0][16] = tmp156_;
  mCompDer[0][17] = tmp27_;
  mCompDer[0][18] = tmp107_;
  mCompDer[0][19] = tmp157_;
  mCompDer[0][20] = tmp158_;
  mCompDer[0][21] = tmp159_;
  mCompDer[0][22] = tmp160_;
  mCompDer[0][23] = tmp108_;
  mCompDer[0][24] = 0;
  mCompDer[0][25] = 0;
  mCompDer[0][26] = 0;
  mCompDer[0][27] = 0;
  mCompDer[0][28] = 0;
  mCompDer[0][29] = 0;
  mCompDer[0][30] = 0;
  mCompDer[0][31] = 0;
  mCompDer[0][32] = 0;
  mCompDer[0][33] = 0;
  mCompDer[0][34] = 0;
  mCompDer[0][35] = 0;
  mCompDer[0][36] = 0;
  mCompDer[0][37] = 0;
  mCompDer[0][38] = 0;
  mCompDer[0][39] = 0;
  mCompDer[0][40] = 0;
  mCompDer[0][41] = 0;
  mCompDer[0][42] = 0;
  mCompDer[0][43] = 0;
  mCompDer[0][44] = 0;
  mVal[1] = (tmp17_+mCompCoord[24]+tmp109_*(tmp19_)+tmp110_*(tmp21_)+tmp111_*tmp22_+tmp113_*(tmp19_)+tmp114_*tmp23_+tmp115_*tmp24_+tmp117_*tmp22_+tmp119_*(tmp19_)+tmp120_*tmp25_+tmp121_*tmp26_+tmp123_*tmp24_+tmp125_*tmp22_+tmp127_*(tmp19_)+tmp128_*tmp27_+tmp131_*tmp107_+tmp133_*tmp26_+tmp135_*tmp24_+tmp137_*tmp22_+tmp139_*(tmp19_)+tmp142_*tmp108_)-mLocPIm_y;

  mCompDer[1][0] = mLocGradX_y+(tmp32_)*tmp109_+(tmp35_)*tmp110_+tmp42_*tmp111_+(tmp35_)*tmp112_*(tmp19_)+(tmp32_)*tmp113_+tmp45_*tmp114_+tmp52_*tmp115_+(tmp35_)*tmp116_*tmp22_+tmp42_*tmp117_+tmp45_*tmp118_*(tmp19_)+(tmp32_)*tmp119_+tmp57_*tmp120_+tmp64_*tmp121_+(tmp35_)*tmp122_*tmp24_+tmp52_*tmp123_+tmp45_*tmp124_*tmp22_+tmp42_*tmp125_+tmp57_*tmp126_*(tmp19_)+(tmp32_)*tmp127_+tmp71_*tmp128_+tmp130_*tmp131_+(tmp35_)*tmp132_*tmp26_+tmp64_*tmp133_+tmp45_*tmp134_*tmp24_+tmp52_*tmp135_+tmp57_*tmp136_*tmp22_+tmp42_*tmp137_+tmp71_*tmp138_*(tmp19_)+(tmp32_)*tmp139_+tmp141_*tmp142_;
  mCompDer[1][1] = mLocGradY_y+(tmp76_)*tmp109_+(tmp78_)*tmp110_+tmp80_*tmp111_+(tmp78_)*tmp112_*(tmp19_)+(tmp76_)*tmp113_+tmp82_*tmp114_+tmp84_*tmp115_+(tmp78_)*tmp116_*tmp22_+tmp80_*tmp117_+tmp82_*tmp118_*(tmp19_)+(tmp76_)*tmp119_+tmp86_*tmp120_+tmp88_*tmp121_+(tmp78_)*tmp122_*tmp24_+tmp84_*tmp123_+tmp82_*tmp124_*tmp22_+tmp80_*tmp125_+tmp86_*tmp126_*(tmp19_)+(tmp76_)*tmp127_+tmp90_*tmp128_+tmp144_*tmp131_+(tmp78_)*tmp132_*tmp26_+tmp88_*tmp133_+tmp82_*tmp134_*tmp24_+tmp84_*tmp135_+tmp86_*tmp136_*tmp22_+tmp80_*tmp137_+tmp90_*tmp138_*(tmp19_)+(tmp76_)*tmp139_+tmp146_*tmp142_;
  mCompDer[1][2] = mLocGradZ_y+(tmp92_)*tmp109_+(tmp94_)*tmp110_+tmp96_*tmp111_+(tmp94_)*tmp112_*(tmp19_)+(tmp92_)*tmp113_+tmp98_*tmp114_+tmp100_*tmp115_+(tmp94_)*tmp116_*tmp22_+tmp96_*tmp117_+tmp98_*tmp118_*(tmp19_)+(tmp92_)*tmp119_+tmp102_*tmp120_+tmp104_*tmp121_+(tmp94_)*tmp122_*tmp24_+tmp100_*tmp123_+tmp98_*tmp124_*tmp22_+tmp96_*tmp125_+tmp102_*tmp126_*(tmp19_)+(tmp92_)*tmp127_+tmp106_*tmp128_+tmp148_*tmp131_+(tmp94_)*tmp132_*tmp26_+tmp104_*tmp133_+tmp98_*tmp134_*tmp24_+tmp100_*tmp135_+tmp102_*tmp136_*tmp22_+tmp96_*tmp137_+tmp106_*tmp138_*(tmp19_)+(tmp92_)*tmp139_+tmp150_*tmp142_;
  mCompDer[1][3] = 0;
  mCompDer[1][4] = 0;
  mCompDer[1][5] = 0;
  mCompDer[1][6] = 0;
  mCompDer[1][7] = 0;
  mCompDer[1][8] = 0;
  mCompDer[1][9] = 0;
  mCompDer[1][10] = 0;
  mCompDer[1][11] = 0;
  mCompDer[1][12] = 0;
  mCompDer[1][13] = 0;
  mCompDer[1][14] = 0;
  mCompDer[1][15] = 0;
  mCompDer[1][16] = 0;
  mCompDer[1][17] = 0;
  mCompDer[1][18] = 0;
  mCompDer[1][19] = 0;
  mCompDer[1][20] = 0;
  mCompDer[1][21] = 0;
  mCompDer[1][22] = 0;
  mCompDer[1][23] = 0;
  mCompDer[1][24] = 1;
  mCompDer[1][25] = tmp19_;
  mCompDer[1][26] = tmp21_;
  mCompDer[1][27] = tmp22_;
  mCompDer[1][28] = tmp151_;
  mCompDer[1][29] = tmp23_;
  mCompDer[1][30] = tmp24_;
  mCompDer[1][31] = tmp152_;
  mCompDer[1][32] = tmp153_;
  mCompDer[1][33] = tmp25_;
  mCompDer[1][34] = tmp26_;
  mCompDer[1][35] = tmp154_;
  mCompDer[1][36] = tmp155_;
  mCompDer[1][37] = tmp156_;
  mCompDer[1][38] = tmp27_;
  mCompDer[1][39] = tmp107_;
  mCompDer[1][40] = tmp157_;
  mCompDer[1][41] = tmp158_;
  mCompDer[1][42] = tmp159_;
  mCompDer[1][43] = tmp160_;
  mCompDer[1][44] = tmp108_;
}


void cGen2DBundleEgProj_Deg5::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cGen2DBundleEgProj_Deg5 Has no Der Sec");
}

void cGen2DBundleEgProj_Deg5::SetAmplApp(double aVal){ mLocAmplApp = aVal;}
void cGen2DBundleEgProj_Deg5::SetCentrApp_x(double aVal){ mLocCentrApp_x = aVal;}
void cGen2DBundleEgProj_Deg5::SetCentrApp_y(double aVal){ mLocCentrApp_y = aVal;}
void cGen2DBundleEgProj_Deg5::SetGradX_x(double aVal){ mLocGradX_x = aVal;}
void cGen2DBundleEgProj_Deg5::SetGradX_y(double aVal){ mLocGradX_y = aVal;}
void cGen2DBundleEgProj_Deg5::SetGradY_x(double aVal){ mLocGradY_x = aVal;}
void cGen2DBundleEgProj_Deg5::SetGradY_y(double aVal){ mLocGradY_y = aVal;}
void cGen2DBundleEgProj_Deg5::SetGradZ_x(double aVal){ mLocGradZ_x = aVal;}
void cGen2DBundleEgProj_Deg5::SetGradZ_y(double aVal){ mLocGradZ_y = aVal;}
void cGen2DBundleEgProj_Deg5::SetPIm_x(double aVal){ mLocPIm_x = aVal;}
void cGen2DBundleEgProj_Deg5::SetPIm_y(double aVal){ mLocPIm_y = aVal;}
void cGen2DBundleEgProj_Deg5::SetPTerInit_x(double aVal){ mLocPTerInit_x = aVal;}
void cGen2DBundleEgProj_Deg5::SetPTerInit_y(double aVal){ mLocPTerInit_y = aVal;}
void cGen2DBundleEgProj_Deg5::SetPTerInit_z(double aVal){ mLocPTerInit_z = aVal;}
void cGen2DBundleEgProj_Deg5::SetProjInit_x(double aVal){ mLocProjInit_x = aVal;}
void cGen2DBundleEgProj_Deg5::SetProjInit_y(double aVal){ mLocProjInit_y = aVal;}



double * cGen2DBundleEgProj_Deg5::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "AmplApp") return & mLocAmplApp;
   if (aName == "CentrApp_x") return & mLocCentrApp_x;
   if (aName == "CentrApp_y") return & mLocCentrApp_y;
   if (aName == "GradX_x") return & mLocGradX_x;
   if (aName == "GradX_y") return & mLocGradX_y;
   if (aName == "GradY_x") return & mLocGradY_x;
   if (aName == "GradY_y") return & mLocGradY_y;
   if (aName == "GradZ_x") return & mLocGradZ_x;
   if (aName == "GradZ_y") return & mLocGradZ_y;
   if (aName == "PIm_x") return & mLocPIm_x;
   if (aName == "PIm_y") return & mLocPIm_y;
   if (aName == "PTerInit_x") return & mLocPTerInit_x;
   if (aName == "PTerInit_y") return & mLocPTerInit_y;
   if (aName == "PTerInit_z") return & mLocPTerInit_z;
   if (aName == "ProjInit_x") return & mLocProjInit_x;
   if (aName == "ProjInit_y") return & mLocProjInit_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cGen2DBundleEgProj_Deg5::mTheAuto("cGen2DBundleEgProj_Deg5",cGen2DBundleEgProj_Deg5::Alloc);


cElCompiledFonc *  cGen2DBundleEgProj_Deg5::Alloc()
{  return new cGen2DBundleEgProj_Deg5();
}

