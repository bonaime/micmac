// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_Y_M2CPolyn2.h"


cEqAppui_Y_M2CPolyn2::cEqAppui_Y_M2CPolyn2():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,9));
   AddIntRef (cIncIntervale("Orient",9,15));
   Close(false);
}



void cEqAppui_Y_M2CPolyn2::ComputeVal()
{
   double tmp0_ = mCompCoord[9];
   double tmp1_ = mCompCoord[11];
   double tmp2_ = cos(tmp0_);
   double tmp3_ = cos(tmp1_);
   double tmp4_ = sin(tmp0_);
   double tmp5_ = mCompCoord[10];
   double tmp6_ = sin(tmp5_);
   double tmp7_ = -(tmp6_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = -(tmp4_);
   double tmp10_ = tmp2_*tmp7_;
   double tmp11_ = mCompCoord[12];
   double tmp12_ = mLocXTer-tmp11_;
   double tmp13_ = -(tmp8_);
   double tmp14_ = tmp4_*tmp7_;
   double tmp15_ = mCompCoord[13];
   double tmp16_ = mLocYTer-tmp15_;
   double tmp17_ = cos(tmp5_);
   double tmp18_ = mCompCoord[14];
   double tmp19_ = mLocZTer-tmp18_;
   double tmp20_ = mCompCoord[0];
   double tmp21_ = tmp9_*tmp13_;
   double tmp22_ = tmp10_*tmp3_;
   double tmp23_ = tmp21_+tmp22_;
   double tmp24_ = (tmp23_)*(tmp12_);
   double tmp25_ = tmp2_*tmp13_;
   double tmp26_ = tmp14_*tmp3_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = (tmp27_)*(tmp16_);
   double tmp29_ = tmp24_+tmp28_;
   double tmp30_ = tmp17_*tmp3_;
   double tmp31_ = tmp30_*(tmp19_);
   double tmp32_ = tmp29_+tmp31_;
   double tmp33_ = mCompCoord[1];
   double tmp34_ = tmp2_*tmp17_;
   double tmp35_ = tmp34_*(tmp12_);
   double tmp36_ = tmp4_*tmp17_;
   double tmp37_ = tmp36_*(tmp16_);
   double tmp38_ = tmp35_+tmp37_;
   double tmp39_ = tmp6_*(tmp19_);
   double tmp40_ = tmp38_+tmp39_;
   double tmp41_ = (tmp40_)/(tmp32_);
   double tmp42_ = tmp20_*(tmp41_);
   double tmp43_ = tmp33_+tmp42_;
   double tmp44_ = (tmp43_)-mLocPolyn2_State_1_0;
   double tmp45_ = (tmp44_)/mLocPolyn2_State_0_0;
   double tmp46_ = mCompCoord[2];
   double tmp47_ = tmp9_*tmp3_;
   double tmp48_ = tmp10_*tmp8_;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp12_);
   double tmp51_ = tmp2_*tmp3_;
   double tmp52_ = tmp14_*tmp8_;
   double tmp53_ = tmp51_+tmp52_;
   double tmp54_ = (tmp53_)*(tmp16_);
   double tmp55_ = tmp50_+tmp54_;
   double tmp56_ = tmp17_*tmp8_;
   double tmp57_ = tmp56_*(tmp19_);
   double tmp58_ = tmp55_+tmp57_;
   double tmp59_ = (tmp58_)/(tmp32_);
   double tmp60_ = tmp20_*(tmp59_);
   double tmp61_ = tmp46_+tmp60_;
   double tmp62_ = (tmp61_)-mLocPolyn2_State_2_0;
   double tmp63_ = (tmp62_)/mLocPolyn2_State_0_0;

  mVal[0] = (mLocPolyn2_State_2_0+(((1-mCompCoord[3])*(tmp63_)+mCompCoord[4]*(tmp45_)+mCompCoord[5]*(tmp45_)*(tmp63_))-mCompCoord[6]*2*(tmp63_)*(tmp63_)+mCompCoord[8]*(tmp45_)*(tmp45_))*mLocPolyn2_State_0_0)-mLocYIm;

}


void cEqAppui_Y_M2CPolyn2::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[9];
   double tmp1_ = mCompCoord[11];
   double tmp2_ = cos(tmp0_);
   double tmp3_ = cos(tmp1_);
   double tmp4_ = sin(tmp0_);
   double tmp5_ = mCompCoord[10];
   double tmp6_ = sin(tmp5_);
   double tmp7_ = -(tmp6_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = -(tmp4_);
   double tmp10_ = tmp2_*tmp7_;
   double tmp11_ = mCompCoord[12];
   double tmp12_ = mLocXTer-tmp11_;
   double tmp13_ = -(tmp8_);
   double tmp14_ = tmp4_*tmp7_;
   double tmp15_ = mCompCoord[13];
   double tmp16_ = mLocYTer-tmp15_;
   double tmp17_ = cos(tmp5_);
   double tmp18_ = mCompCoord[14];
   double tmp19_ = mLocZTer-tmp18_;
   double tmp20_ = mCompCoord[0];
   double tmp21_ = tmp9_*tmp13_;
   double tmp22_ = tmp10_*tmp3_;
   double tmp23_ = tmp21_+tmp22_;
   double tmp24_ = (tmp23_)*(tmp12_);
   double tmp25_ = tmp2_*tmp13_;
   double tmp26_ = tmp14_*tmp3_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = (tmp27_)*(tmp16_);
   double tmp29_ = tmp24_+tmp28_;
   double tmp30_ = tmp17_*tmp3_;
   double tmp31_ = tmp30_*(tmp19_);
   double tmp32_ = tmp29_+tmp31_;
   double tmp33_ = mCompCoord[1];
   double tmp34_ = tmp2_*tmp17_;
   double tmp35_ = tmp34_*(tmp12_);
   double tmp36_ = tmp4_*tmp17_;
   double tmp37_ = tmp36_*(tmp16_);
   double tmp38_ = tmp35_+tmp37_;
   double tmp39_ = tmp6_*(tmp19_);
   double tmp40_ = tmp38_+tmp39_;
   double tmp41_ = (tmp40_)/(tmp32_);
   double tmp42_ = tmp20_*(tmp41_);
   double tmp43_ = tmp33_+tmp42_;
   double tmp44_ = (tmp43_)-mLocPolyn2_State_1_0;
   double tmp45_ = (tmp44_)/mLocPolyn2_State_0_0;
   double tmp46_ = mCompCoord[2];
   double tmp47_ = tmp9_*tmp3_;
   double tmp48_ = tmp10_*tmp8_;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp12_);
   double tmp51_ = tmp2_*tmp3_;
   double tmp52_ = tmp14_*tmp8_;
   double tmp53_ = tmp51_+tmp52_;
   double tmp54_ = (tmp53_)*(tmp16_);
   double tmp55_ = tmp50_+tmp54_;
   double tmp56_ = tmp17_*tmp8_;
   double tmp57_ = tmp56_*(tmp19_);
   double tmp58_ = tmp55_+tmp57_;
   double tmp59_ = (tmp58_)/(tmp32_);
   double tmp60_ = tmp20_*(tmp59_);
   double tmp61_ = tmp46_+tmp60_;
   double tmp62_ = (tmp61_)-mLocPolyn2_State_2_0;
   double tmp63_ = (tmp62_)/mLocPolyn2_State_0_0;
   double tmp64_ = mCompCoord[3];
   double tmp65_ = 1-tmp64_;
   double tmp66_ = ElSquare(mLocPolyn2_State_0_0);
   double tmp67_ = mCompCoord[4];
   double tmp68_ = (tmp41_)*mLocPolyn2_State_0_0;
   double tmp69_ = (tmp68_)/tmp66_;
   double tmp70_ = (tmp59_)*mLocPolyn2_State_0_0;
   double tmp71_ = (tmp70_)/tmp66_;
   double tmp72_ = mCompCoord[5];
   double tmp73_ = (tmp71_)*(tmp63_);
   double tmp74_ = mCompCoord[6];
   double tmp75_ = tmp74_*2;
   double tmp76_ = (tmp69_)*(tmp45_);
   double tmp77_ = mCompCoord[8];
   double tmp78_ = mLocPolyn2_State_0_0/tmp66_;
   double tmp79_ = (tmp78_)*(tmp45_);
   double tmp80_ = (tmp78_)*(tmp63_);
   double tmp81_ = (tmp45_)*(tmp63_);
   double tmp82_ = (tmp63_)*(tmp63_);
   double tmp83_ = (tmp45_)*(tmp45_);
   double tmp84_ = -(1);
   double tmp85_ = tmp84_*tmp4_;
   double tmp86_ = -(tmp2_);
   double tmp87_ = tmp85_*tmp7_;
   double tmp88_ = tmp86_*tmp13_;
   double tmp89_ = tmp87_*tmp3_;
   double tmp90_ = tmp88_+tmp89_;
   double tmp91_ = (tmp90_)*(tmp12_);
   double tmp92_ = tmp85_*tmp13_;
   double tmp93_ = tmp92_+tmp22_;
   double tmp94_ = (tmp93_)*(tmp16_);
   double tmp95_ = tmp91_+tmp94_;
   double tmp96_ = ElSquare(tmp32_);
   double tmp97_ = tmp85_*tmp17_;
   double tmp98_ = tmp97_*(tmp12_);
   double tmp99_ = tmp34_*(tmp16_);
   double tmp100_ = tmp98_+tmp99_;
   double tmp101_ = (tmp100_)*(tmp32_);
   double tmp102_ = (tmp40_)*(tmp95_);
   double tmp103_ = tmp101_-tmp102_;
   double tmp104_ = (tmp103_)/tmp96_;
   double tmp105_ = (tmp104_)*tmp20_;
   double tmp106_ = tmp105_*mLocPolyn2_State_0_0;
   double tmp107_ = (tmp106_)/tmp66_;
   double tmp108_ = tmp86_*tmp3_;
   double tmp109_ = tmp87_*tmp8_;
   double tmp110_ = tmp108_+tmp109_;
   double tmp111_ = (tmp110_)*(tmp12_);
   double tmp112_ = tmp85_*tmp3_;
   double tmp113_ = tmp112_+tmp48_;
   double tmp114_ = (tmp113_)*(tmp16_);
   double tmp115_ = tmp111_+tmp114_;
   double tmp116_ = (tmp115_)*(tmp32_);
   double tmp117_ = (tmp58_)*(tmp95_);
   double tmp118_ = tmp116_-tmp117_;
   double tmp119_ = (tmp118_)/tmp96_;
   double tmp120_ = (tmp119_)*tmp20_;
   double tmp121_ = tmp120_*mLocPolyn2_State_0_0;
   double tmp122_ = (tmp121_)/tmp66_;
   double tmp123_ = (tmp122_)*(tmp63_);
   double tmp124_ = (tmp107_)*(tmp45_);
   double tmp125_ = -(tmp17_);
   double tmp126_ = tmp125_*tmp2_;
   double tmp127_ = tmp125_*tmp4_;
   double tmp128_ = tmp84_*tmp6_;
   double tmp129_ = tmp126_*tmp3_;
   double tmp130_ = tmp129_*(tmp12_);
   double tmp131_ = tmp127_*tmp3_;
   double tmp132_ = tmp131_*(tmp16_);
   double tmp133_ = tmp130_+tmp132_;
   double tmp134_ = tmp128_*tmp3_;
   double tmp135_ = tmp134_*(tmp19_);
   double tmp136_ = tmp133_+tmp135_;
   double tmp137_ = tmp128_*tmp2_;
   double tmp138_ = tmp137_*(tmp12_);
   double tmp139_ = tmp128_*tmp4_;
   double tmp140_ = tmp139_*(tmp16_);
   double tmp141_ = tmp138_+tmp140_;
   double tmp142_ = tmp17_*(tmp19_);
   double tmp143_ = tmp141_+tmp142_;
   double tmp144_ = (tmp143_)*(tmp32_);
   double tmp145_ = (tmp40_)*(tmp136_);
   double tmp146_ = tmp144_-tmp145_;
   double tmp147_ = (tmp146_)/tmp96_;
   double tmp148_ = (tmp147_)*tmp20_;
   double tmp149_ = tmp148_*mLocPolyn2_State_0_0;
   double tmp150_ = (tmp149_)/tmp66_;
   double tmp151_ = tmp126_*tmp8_;
   double tmp152_ = tmp151_*(tmp12_);
   double tmp153_ = tmp127_*tmp8_;
   double tmp154_ = tmp153_*(tmp16_);
   double tmp155_ = tmp152_+tmp154_;
   double tmp156_ = tmp128_*tmp8_;
   double tmp157_ = tmp156_*(tmp19_);
   double tmp158_ = tmp155_+tmp157_;
   double tmp159_ = (tmp158_)*(tmp32_);
   double tmp160_ = (tmp58_)*(tmp136_);
   double tmp161_ = tmp159_-tmp160_;
   double tmp162_ = (tmp161_)/tmp96_;
   double tmp163_ = (tmp162_)*tmp20_;
   double tmp164_ = tmp163_*mLocPolyn2_State_0_0;
   double tmp165_ = (tmp164_)/tmp66_;
   double tmp166_ = (tmp165_)*(tmp63_);
   double tmp167_ = (tmp150_)*(tmp45_);
   double tmp168_ = tmp84_*tmp8_;
   double tmp169_ = -(tmp3_);
   double tmp170_ = tmp169_*tmp9_;
   double tmp171_ = tmp168_*tmp10_;
   double tmp172_ = tmp170_+tmp171_;
   double tmp173_ = (tmp172_)*(tmp12_);
   double tmp174_ = tmp169_*tmp2_;
   double tmp175_ = tmp168_*tmp14_;
   double tmp176_ = tmp174_+tmp175_;
   double tmp177_ = (tmp176_)*(tmp16_);
   double tmp178_ = tmp173_+tmp177_;
   double tmp179_ = tmp168_*tmp17_;
   double tmp180_ = tmp179_*(tmp19_);
   double tmp181_ = tmp178_+tmp180_;
   double tmp182_ = (tmp40_)*(tmp181_);
   double tmp183_ = -(tmp182_);
   double tmp184_ = tmp183_/tmp96_;
   double tmp185_ = (tmp184_)*tmp20_;
   double tmp186_ = tmp185_*mLocPolyn2_State_0_0;
   double tmp187_ = (tmp186_)/tmp66_;
   double tmp188_ = tmp168_*tmp9_;
   double tmp189_ = tmp3_*tmp10_;
   double tmp190_ = tmp188_+tmp189_;
   double tmp191_ = (tmp190_)*(tmp12_);
   double tmp192_ = tmp168_*tmp2_;
   double tmp193_ = tmp3_*tmp14_;
   double tmp194_ = tmp192_+tmp193_;
   double tmp195_ = (tmp194_)*(tmp16_);
   double tmp196_ = tmp191_+tmp195_;
   double tmp197_ = tmp3_*tmp17_;
   double tmp198_ = tmp197_*(tmp19_);
   double tmp199_ = tmp196_+tmp198_;
   double tmp200_ = (tmp199_)*(tmp32_);
   double tmp201_ = (tmp58_)*(tmp181_);
   double tmp202_ = tmp200_-tmp201_;
   double tmp203_ = (tmp202_)/tmp96_;
   double tmp204_ = (tmp203_)*tmp20_;
   double tmp205_ = tmp204_*mLocPolyn2_State_0_0;
   double tmp206_ = (tmp205_)/tmp66_;
   double tmp207_ = (tmp206_)*(tmp63_);
   double tmp208_ = (tmp187_)*(tmp45_);
   double tmp209_ = tmp84_*(tmp23_);
   double tmp210_ = tmp84_*tmp34_;
   double tmp211_ = tmp210_*(tmp32_);
   double tmp212_ = (tmp40_)*tmp209_;
   double tmp213_ = tmp211_-tmp212_;
   double tmp214_ = (tmp213_)/tmp96_;
   double tmp215_ = (tmp214_)*tmp20_;
   double tmp216_ = tmp215_*mLocPolyn2_State_0_0;
   double tmp217_ = (tmp216_)/tmp66_;
   double tmp218_ = tmp84_*(tmp49_);
   double tmp219_ = tmp218_*(tmp32_);
   double tmp220_ = (tmp58_)*tmp209_;
   double tmp221_ = tmp219_-tmp220_;
   double tmp222_ = (tmp221_)/tmp96_;
   double tmp223_ = (tmp222_)*tmp20_;
   double tmp224_ = tmp223_*mLocPolyn2_State_0_0;
   double tmp225_ = (tmp224_)/tmp66_;
   double tmp226_ = (tmp225_)*(tmp63_);
   double tmp227_ = (tmp217_)*(tmp45_);
   double tmp228_ = tmp84_*(tmp27_);
   double tmp229_ = tmp84_*tmp36_;
   double tmp230_ = tmp229_*(tmp32_);
   double tmp231_ = (tmp40_)*tmp228_;
   double tmp232_ = tmp230_-tmp231_;
   double tmp233_ = (tmp232_)/tmp96_;
   double tmp234_ = (tmp233_)*tmp20_;
   double tmp235_ = tmp234_*mLocPolyn2_State_0_0;
   double tmp236_ = (tmp235_)/tmp66_;
   double tmp237_ = tmp84_*(tmp53_);
   double tmp238_ = tmp237_*(tmp32_);
   double tmp239_ = (tmp58_)*tmp228_;
   double tmp240_ = tmp238_-tmp239_;
   double tmp241_ = (tmp240_)/tmp96_;
   double tmp242_ = (tmp241_)*tmp20_;
   double tmp243_ = tmp242_*mLocPolyn2_State_0_0;
   double tmp244_ = (tmp243_)/tmp66_;
   double tmp245_ = (tmp244_)*(tmp63_);
   double tmp246_ = (tmp236_)*(tmp45_);
   double tmp247_ = tmp84_*tmp30_;
   double tmp248_ = tmp128_*(tmp32_);
   double tmp249_ = (tmp40_)*tmp247_;
   double tmp250_ = tmp248_-tmp249_;
   double tmp251_ = (tmp250_)/tmp96_;
   double tmp252_ = (tmp251_)*tmp20_;
   double tmp253_ = tmp252_*mLocPolyn2_State_0_0;
   double tmp254_ = (tmp253_)/tmp66_;
   double tmp255_ = tmp84_*tmp56_;
   double tmp256_ = tmp255_*(tmp32_);
   double tmp257_ = (tmp58_)*tmp247_;
   double tmp258_ = tmp256_-tmp257_;
   double tmp259_ = (tmp258_)/tmp96_;
   double tmp260_ = (tmp259_)*tmp20_;
   double tmp261_ = tmp260_*mLocPolyn2_State_0_0;
   double tmp262_ = (tmp261_)/tmp66_;
   double tmp263_ = (tmp262_)*(tmp63_);
   double tmp264_ = (tmp254_)*(tmp45_);

  mVal[0] = (mLocPolyn2_State_2_0+(((tmp65_)*(tmp63_)+tmp67_*(tmp45_)+tmp72_*tmp81_)-tmp75_*tmp82_+tmp77_*tmp83_)*mLocPolyn2_State_0_0)-mLocYIm;

  mCompDer[0][0] = (((tmp71_)*(tmp65_)+(tmp69_)*tmp67_+((tmp69_)*(tmp63_)+(tmp71_)*(tmp45_))*tmp72_)-(tmp73_+tmp73_)*tmp75_+(tmp76_+tmp76_)*tmp77_)*mLocPolyn2_State_0_0;
  mCompDer[0][1] = ((tmp78_)*tmp67_+tmp80_*tmp72_+(tmp79_+tmp79_)*tmp77_)*mLocPolyn2_State_0_0;
  mCompDer[0][2] = (((tmp78_)*(tmp65_)+tmp79_*tmp72_)-(tmp80_+tmp80_)*tmp75_)*mLocPolyn2_State_0_0;
  mCompDer[0][3] = tmp84_*(tmp63_)*mLocPolyn2_State_0_0;
  mCompDer[0][4] = (tmp45_)*mLocPolyn2_State_0_0;
  mCompDer[0][5] = tmp81_*mLocPolyn2_State_0_0;
  mCompDer[0][6] = -(2*tmp82_)*mLocPolyn2_State_0_0;
  mCompDer[0][7] = 0;
  mCompDer[0][8] = tmp83_*mLocPolyn2_State_0_0;
  mCompDer[0][9] = (((tmp122_)*(tmp65_)+(tmp107_)*tmp67_+((tmp107_)*(tmp63_)+(tmp122_)*(tmp45_))*tmp72_)-(tmp123_+tmp123_)*tmp75_+(tmp124_+tmp124_)*tmp77_)*mLocPolyn2_State_0_0;
  mCompDer[0][10] = (((tmp165_)*(tmp65_)+(tmp150_)*tmp67_+((tmp150_)*(tmp63_)+(tmp165_)*(tmp45_))*tmp72_)-(tmp166_+tmp166_)*tmp75_+(tmp167_+tmp167_)*tmp77_)*mLocPolyn2_State_0_0;
  mCompDer[0][11] = (((tmp206_)*(tmp65_)+(tmp187_)*tmp67_+((tmp187_)*(tmp63_)+(tmp206_)*(tmp45_))*tmp72_)-(tmp207_+tmp207_)*tmp75_+(tmp208_+tmp208_)*tmp77_)*mLocPolyn2_State_0_0;
  mCompDer[0][12] = (((tmp225_)*(tmp65_)+(tmp217_)*tmp67_+((tmp217_)*(tmp63_)+(tmp225_)*(tmp45_))*tmp72_)-(tmp226_+tmp226_)*tmp75_+(tmp227_+tmp227_)*tmp77_)*mLocPolyn2_State_0_0;
  mCompDer[0][13] = (((tmp244_)*(tmp65_)+(tmp236_)*tmp67_+((tmp236_)*(tmp63_)+(tmp244_)*(tmp45_))*tmp72_)-(tmp245_+tmp245_)*tmp75_+(tmp246_+tmp246_)*tmp77_)*mLocPolyn2_State_0_0;
  mCompDer[0][14] = (((tmp262_)*(tmp65_)+(tmp254_)*tmp67_+((tmp254_)*(tmp63_)+(tmp262_)*(tmp45_))*tmp72_)-(tmp263_+tmp263_)*tmp75_+(tmp264_+tmp264_)*tmp77_)*mLocPolyn2_State_0_0;
}


void cEqAppui_Y_M2CPolyn2::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_Y_M2CPolyn2 Has no Der Sec");
}

void cEqAppui_Y_M2CPolyn2::SetPolyn2_State_0_0(double aVal){ mLocPolyn2_State_0_0 = aVal;}
void cEqAppui_Y_M2CPolyn2::SetPolyn2_State_1_0(double aVal){ mLocPolyn2_State_1_0 = aVal;}
void cEqAppui_Y_M2CPolyn2::SetPolyn2_State_2_0(double aVal){ mLocPolyn2_State_2_0 = aVal;}
void cEqAppui_Y_M2CPolyn2::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppui_Y_M2CPolyn2::SetYIm(double aVal){ mLocYIm = aVal;}
void cEqAppui_Y_M2CPolyn2::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppui_Y_M2CPolyn2::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppui_Y_M2CPolyn2::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Polyn2_State_0_0") return & mLocPolyn2_State_0_0;
   if (aName == "Polyn2_State_1_0") return & mLocPolyn2_State_1_0;
   if (aName == "Polyn2_State_2_0") return & mLocPolyn2_State_2_0;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YIm") return & mLocYIm;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_Y_M2CPolyn2::mTheAuto("cEqAppui_Y_M2CPolyn2",cEqAppui_Y_M2CPolyn2::Alloc);


cElCompiledFonc *  cEqAppui_Y_M2CPolyn2::Alloc()
{  return new cEqAppui_Y_M2CPolyn2();
}


