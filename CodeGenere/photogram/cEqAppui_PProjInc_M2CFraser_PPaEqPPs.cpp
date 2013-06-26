// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_PProjInc_M2CFraser_PPaEqPPs.h"


cEqAppui_PProjInc_M2CFraser_PPaEqPPs::cEqAppui_PProjInc_M2CFraser_PPaEqPPs():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,12));
   AddIntRef (cIncIntervale("Orient",12,18));
   AddIntRef (cIncIntervale("Tmp_PTer",18,21));
   Close(false);
}



void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::ComputeVal()
{
   double tmp0_ = mCompCoord[12];
   double tmp1_ = mCompCoord[13];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = mCompCoord[18];
   double tmp4_ = mCompCoord[19];
   double tmp5_ = mCompCoord[20];
   double tmp6_ = sin(tmp0_);
   double tmp7_ = cos(tmp0_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = mCompCoord[14];
   double tmp10_ = mLocProjI_x*tmp3_;
   double tmp11_ = mLocProjP0_x+tmp10_;
   double tmp12_ = mLocProjJ_x*tmp4_;
   double tmp13_ = tmp11_+tmp12_;
   double tmp14_ = mLocProjK_x*tmp5_;
   double tmp15_ = tmp13_+tmp14_;
   double tmp16_ = mCompCoord[15];
   double tmp17_ = (tmp15_)-tmp16_;
   double tmp18_ = sin(tmp9_);
   double tmp19_ = -(tmp18_);
   double tmp20_ = -(tmp8_);
   double tmp21_ = cos(tmp9_);
   double tmp22_ = mLocProjI_y*tmp3_;
   double tmp23_ = mLocProjP0_y+tmp22_;
   double tmp24_ = mLocProjJ_y*tmp4_;
   double tmp25_ = tmp23_+tmp24_;
   double tmp26_ = mLocProjK_y*tmp5_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = mCompCoord[16];
   double tmp29_ = (tmp27_)-tmp28_;
   double tmp30_ = mLocProjI_z*tmp3_;
   double tmp31_ = mLocProjP0_z+tmp30_;
   double tmp32_ = mLocProjJ_z*tmp4_;
   double tmp33_ = tmp31_+tmp32_;
   double tmp34_ = mLocProjK_z*tmp5_;
   double tmp35_ = tmp33_+tmp34_;
   double tmp36_ = mCompCoord[17];
   double tmp37_ = (tmp35_)-tmp36_;
   double tmp38_ = tmp7_*tmp2_;
   double tmp39_ = tmp38_*(tmp17_);
   double tmp40_ = tmp6_*tmp2_;
   double tmp41_ = tmp40_*(tmp29_);
   double tmp42_ = tmp39_+tmp41_;
   double tmp43_ = tmp8_*(tmp37_);
   double tmp44_ = tmp42_+tmp43_;
   double tmp45_ = mCompCoord[0];
   double tmp46_ = -(tmp6_);
   double tmp47_ = tmp46_*tmp19_;
   double tmp48_ = tmp7_*tmp20_;
   double tmp49_ = tmp48_*tmp21_;
   double tmp50_ = tmp47_+tmp49_;
   double tmp51_ = (tmp50_)*(tmp17_);
   double tmp52_ = tmp7_*tmp19_;
   double tmp53_ = tmp6_*tmp20_;
   double tmp54_ = tmp53_*tmp21_;
   double tmp55_ = tmp52_+tmp54_;
   double tmp56_ = (tmp55_)*(tmp29_);
   double tmp57_ = tmp51_+tmp56_;
   double tmp58_ = tmp2_*tmp21_;
   double tmp59_ = tmp58_*(tmp37_);
   double tmp60_ = tmp57_+tmp59_;
   double tmp61_ = tmp45_/(tmp60_);
   double tmp62_ = (tmp44_)*(tmp61_);
   double tmp63_ = mCompCoord[1];
   double tmp64_ = tmp62_+tmp63_;
   double tmp65_ = (tmp64_)-tmp63_;
   double tmp66_ = mCompCoord[2];
   double tmp67_ = tmp46_*tmp21_;
   double tmp68_ = tmp48_*tmp18_;
   double tmp69_ = tmp67_+tmp68_;
   double tmp70_ = (tmp69_)*(tmp17_);
   double tmp71_ = tmp7_*tmp21_;
   double tmp72_ = tmp53_*tmp18_;
   double tmp73_ = tmp71_+tmp72_;
   double tmp74_ = (tmp73_)*(tmp29_);
   double tmp75_ = tmp70_+tmp74_;
   double tmp76_ = tmp2_*tmp18_;
   double tmp77_ = tmp76_*(tmp37_);
   double tmp78_ = tmp75_+tmp77_;
   double tmp79_ = (tmp78_)*(tmp61_);
   double tmp80_ = tmp79_+tmp66_;
   double tmp81_ = (tmp80_)-tmp66_;
   double tmp82_ = (tmp65_)*(tmp65_);
   double tmp83_ = (tmp81_)*(tmp81_);
   double tmp84_ = tmp82_+tmp83_;
   double tmp85_ = (tmp84_)*(tmp84_);
   double tmp86_ = tmp85_*(tmp84_);
   double tmp87_ = tmp86_*(tmp84_);
   double tmp88_ = mCompCoord[3];
   double tmp89_ = tmp88_*(tmp84_);
   double tmp90_ = mCompCoord[4];
   double tmp91_ = tmp90_*tmp85_;
   double tmp92_ = tmp89_+tmp91_;
   double tmp93_ = mCompCoord[5];
   double tmp94_ = tmp93_*tmp86_;
   double tmp95_ = tmp92_+tmp94_;
   double tmp96_ = mCompCoord[6];
   double tmp97_ = tmp96_*tmp87_;
   double tmp98_ = tmp95_+tmp97_;
   double tmp99_ = mCompCoord[7];
   double tmp100_ = tmp87_*(tmp84_);
   double tmp101_ = tmp99_*tmp100_;
   double tmp102_ = tmp98_+tmp101_;
   double tmp103_ = mCompCoord[9];
   double tmp104_ = (tmp65_)*(tmp81_);
   double tmp105_ = 2*tmp104_;
   double tmp106_ = mCompCoord[8];

  mVal[0] = ((tmp64_+(tmp65_)*(tmp102_)+(2*tmp82_+tmp84_)*tmp106_+tmp105_*tmp103_+mCompCoord[10]*(tmp65_)+mCompCoord[11]*(tmp81_))-mLocXIm)*mLocScNorm;

  mVal[1] = ((tmp80_+(tmp81_)*(tmp102_)+(2*tmp83_+tmp84_)*tmp103_+tmp105_*tmp106_)-mLocYIm)*mLocScNorm;

}


void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[12];
   double tmp1_ = mCompCoord[13];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = mCompCoord[18];
   double tmp4_ = mCompCoord[19];
   double tmp5_ = mCompCoord[20];
   double tmp6_ = sin(tmp0_);
   double tmp7_ = cos(tmp0_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = mCompCoord[14];
   double tmp10_ = mLocProjI_x*tmp3_;
   double tmp11_ = mLocProjP0_x+tmp10_;
   double tmp12_ = mLocProjJ_x*tmp4_;
   double tmp13_ = tmp11_+tmp12_;
   double tmp14_ = mLocProjK_x*tmp5_;
   double tmp15_ = tmp13_+tmp14_;
   double tmp16_ = mCompCoord[15];
   double tmp17_ = (tmp15_)-tmp16_;
   double tmp18_ = sin(tmp9_);
   double tmp19_ = -(tmp18_);
   double tmp20_ = -(tmp8_);
   double tmp21_ = cos(tmp9_);
   double tmp22_ = mLocProjI_y*tmp3_;
   double tmp23_ = mLocProjP0_y+tmp22_;
   double tmp24_ = mLocProjJ_y*tmp4_;
   double tmp25_ = tmp23_+tmp24_;
   double tmp26_ = mLocProjK_y*tmp5_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = mCompCoord[16];
   double tmp29_ = (tmp27_)-tmp28_;
   double tmp30_ = mLocProjI_z*tmp3_;
   double tmp31_ = mLocProjP0_z+tmp30_;
   double tmp32_ = mLocProjJ_z*tmp4_;
   double tmp33_ = tmp31_+tmp32_;
   double tmp34_ = mLocProjK_z*tmp5_;
   double tmp35_ = tmp33_+tmp34_;
   double tmp36_ = mCompCoord[17];
   double tmp37_ = (tmp35_)-tmp36_;
   double tmp38_ = tmp7_*tmp2_;
   double tmp39_ = tmp38_*(tmp17_);
   double tmp40_ = tmp6_*tmp2_;
   double tmp41_ = tmp40_*(tmp29_);
   double tmp42_ = tmp39_+tmp41_;
   double tmp43_ = tmp8_*(tmp37_);
   double tmp44_ = tmp42_+tmp43_;
   double tmp45_ = mCompCoord[0];
   double tmp46_ = -(tmp6_);
   double tmp47_ = tmp46_*tmp19_;
   double tmp48_ = tmp7_*tmp20_;
   double tmp49_ = tmp48_*tmp21_;
   double tmp50_ = tmp47_+tmp49_;
   double tmp51_ = (tmp50_)*(tmp17_);
   double tmp52_ = tmp7_*tmp19_;
   double tmp53_ = tmp6_*tmp20_;
   double tmp54_ = tmp53_*tmp21_;
   double tmp55_ = tmp52_+tmp54_;
   double tmp56_ = (tmp55_)*(tmp29_);
   double tmp57_ = tmp51_+tmp56_;
   double tmp58_ = tmp2_*tmp21_;
   double tmp59_ = tmp58_*(tmp37_);
   double tmp60_ = tmp57_+tmp59_;
   double tmp61_ = tmp45_/(tmp60_);
   double tmp62_ = (tmp44_)*(tmp61_);
   double tmp63_ = mCompCoord[1];
   double tmp64_ = tmp62_+tmp63_;
   double tmp65_ = (tmp64_)-tmp63_;
   double tmp66_ = mCompCoord[2];
   double tmp67_ = tmp46_*tmp21_;
   double tmp68_ = tmp48_*tmp18_;
   double tmp69_ = tmp67_+tmp68_;
   double tmp70_ = (tmp69_)*(tmp17_);
   double tmp71_ = tmp7_*tmp21_;
   double tmp72_ = tmp53_*tmp18_;
   double tmp73_ = tmp71_+tmp72_;
   double tmp74_ = (tmp73_)*(tmp29_);
   double tmp75_ = tmp70_+tmp74_;
   double tmp76_ = tmp2_*tmp18_;
   double tmp77_ = tmp76_*(tmp37_);
   double tmp78_ = tmp75_+tmp77_;
   double tmp79_ = (tmp78_)*(tmp61_);
   double tmp80_ = tmp79_+tmp66_;
   double tmp81_ = (tmp80_)-tmp66_;
   double tmp82_ = (tmp65_)*(tmp65_);
   double tmp83_ = (tmp81_)*(tmp81_);
   double tmp84_ = tmp82_+tmp83_;
   double tmp85_ = (tmp84_)*(tmp84_);
   double tmp86_ = tmp85_*(tmp84_);
   double tmp87_ = tmp86_*(tmp84_);
   double tmp88_ = ElSquare(tmp60_);
   double tmp89_ = (tmp60_)/tmp88_;
   double tmp90_ = (tmp89_)*(tmp44_);
   double tmp91_ = mCompCoord[3];
   double tmp92_ = tmp91_*(tmp84_);
   double tmp93_ = mCompCoord[4];
   double tmp94_ = tmp93_*tmp85_;
   double tmp95_ = tmp92_+tmp94_;
   double tmp96_ = mCompCoord[5];
   double tmp97_ = tmp96_*tmp86_;
   double tmp98_ = tmp95_+tmp97_;
   double tmp99_ = mCompCoord[6];
   double tmp100_ = tmp99_*tmp87_;
   double tmp101_ = tmp98_+tmp100_;
   double tmp102_ = mCompCoord[7];
   double tmp103_ = tmp87_*(tmp84_);
   double tmp104_ = tmp102_*tmp103_;
   double tmp105_ = tmp101_+tmp104_;
   double tmp106_ = tmp90_*(tmp65_);
   double tmp107_ = (tmp89_)*(tmp78_);
   double tmp108_ = tmp107_*(tmp81_);
   double tmp109_ = tmp106_+tmp106_;
   double tmp110_ = tmp108_+tmp108_;
   double tmp111_ = tmp109_+tmp110_;
   double tmp112_ = (tmp111_)*(tmp84_);
   double tmp113_ = tmp112_+tmp112_;
   double tmp114_ = (tmp113_)*(tmp84_);
   double tmp115_ = (tmp111_)*tmp85_;
   double tmp116_ = tmp114_+tmp115_;
   double tmp117_ = (tmp116_)*(tmp84_);
   double tmp118_ = (tmp111_)*tmp86_;
   double tmp119_ = tmp117_+tmp118_;
   double tmp120_ = mCompCoord[8];
   double tmp121_ = mCompCoord[9];
   double tmp122_ = mCompCoord[10];
   double tmp123_ = mCompCoord[11];
   double tmp124_ = 2*tmp82_;
   double tmp125_ = tmp124_+tmp84_;
   double tmp126_ = (tmp65_)*(tmp81_);
   double tmp127_ = 2*tmp126_;
   double tmp128_ = -(1);
   double tmp129_ = tmp128_*tmp6_;
   double tmp130_ = tmp129_*tmp2_;
   double tmp131_ = tmp130_*(tmp17_);
   double tmp132_ = tmp38_*(tmp29_);
   double tmp133_ = tmp131_+tmp132_;
   double tmp134_ = (tmp133_)*(tmp61_);
   double tmp135_ = -(tmp7_);
   double tmp136_ = tmp135_*tmp19_;
   double tmp137_ = tmp129_*tmp20_;
   double tmp138_ = tmp137_*tmp21_;
   double tmp139_ = tmp136_+tmp138_;
   double tmp140_ = (tmp139_)*(tmp17_);
   double tmp141_ = tmp129_*tmp19_;
   double tmp142_ = tmp141_+tmp49_;
   double tmp143_ = (tmp142_)*(tmp29_);
   double tmp144_ = tmp140_+tmp143_;
   double tmp145_ = tmp45_*(tmp144_);
   double tmp146_ = -(tmp145_);
   double tmp147_ = tmp146_/tmp88_;
   double tmp148_ = (tmp147_)*(tmp44_);
   double tmp149_ = tmp134_+tmp148_;
   double tmp150_ = (tmp149_)*(tmp65_);
   double tmp151_ = tmp135_*tmp21_;
   double tmp152_ = tmp137_*tmp18_;
   double tmp153_ = tmp151_+tmp152_;
   double tmp154_ = (tmp153_)*(tmp17_);
   double tmp155_ = tmp129_*tmp21_;
   double tmp156_ = tmp155_+tmp68_;
   double tmp157_ = (tmp156_)*(tmp29_);
   double tmp158_ = tmp154_+tmp157_;
   double tmp159_ = (tmp158_)*(tmp61_);
   double tmp160_ = (tmp147_)*(tmp78_);
   double tmp161_ = tmp159_+tmp160_;
   double tmp162_ = (tmp161_)*(tmp81_);
   double tmp163_ = tmp150_+tmp150_;
   double tmp164_ = tmp162_+tmp162_;
   double tmp165_ = tmp163_+tmp164_;
   double tmp166_ = (tmp165_)*(tmp84_);
   double tmp167_ = tmp166_+tmp166_;
   double tmp168_ = (tmp167_)*(tmp84_);
   double tmp169_ = (tmp165_)*tmp85_;
   double tmp170_ = tmp168_+tmp169_;
   double tmp171_ = (tmp170_)*(tmp84_);
   double tmp172_ = (tmp165_)*tmp86_;
   double tmp173_ = tmp171_+tmp172_;
   double tmp174_ = tmp128_*tmp8_;
   double tmp175_ = -(tmp2_);
   double tmp176_ = tmp174_*tmp7_;
   double tmp177_ = tmp176_*(tmp17_);
   double tmp178_ = tmp174_*tmp6_;
   double tmp179_ = tmp178_*(tmp29_);
   double tmp180_ = tmp177_+tmp179_;
   double tmp181_ = tmp2_*(tmp37_);
   double tmp182_ = tmp180_+tmp181_;
   double tmp183_ = (tmp182_)*(tmp61_);
   double tmp184_ = tmp175_*tmp7_;
   double tmp185_ = tmp184_*tmp21_;
   double tmp186_ = tmp185_*(tmp17_);
   double tmp187_ = tmp175_*tmp6_;
   double tmp188_ = tmp187_*tmp21_;
   double tmp189_ = tmp188_*(tmp29_);
   double tmp190_ = tmp186_+tmp189_;
   double tmp191_ = tmp174_*tmp21_;
   double tmp192_ = tmp191_*(tmp37_);
   double tmp193_ = tmp190_+tmp192_;
   double tmp194_ = tmp45_*(tmp193_);
   double tmp195_ = -(tmp194_);
   double tmp196_ = tmp195_/tmp88_;
   double tmp197_ = (tmp196_)*(tmp44_);
   double tmp198_ = tmp183_+tmp197_;
   double tmp199_ = (tmp198_)*(tmp65_);
   double tmp200_ = tmp184_*tmp18_;
   double tmp201_ = tmp200_*(tmp17_);
   double tmp202_ = tmp187_*tmp18_;
   double tmp203_ = tmp202_*(tmp29_);
   double tmp204_ = tmp201_+tmp203_;
   double tmp205_ = tmp174_*tmp18_;
   double tmp206_ = tmp205_*(tmp37_);
   double tmp207_ = tmp204_+tmp206_;
   double tmp208_ = (tmp207_)*(tmp61_);
   double tmp209_ = (tmp196_)*(tmp78_);
   double tmp210_ = tmp208_+tmp209_;
   double tmp211_ = (tmp210_)*(tmp81_);
   double tmp212_ = tmp199_+tmp199_;
   double tmp213_ = tmp211_+tmp211_;
   double tmp214_ = tmp212_+tmp213_;
   double tmp215_ = (tmp214_)*(tmp84_);
   double tmp216_ = tmp215_+tmp215_;
   double tmp217_ = (tmp216_)*(tmp84_);
   double tmp218_ = (tmp214_)*tmp85_;
   double tmp219_ = tmp217_+tmp218_;
   double tmp220_ = (tmp219_)*(tmp84_);
   double tmp221_ = (tmp214_)*tmp86_;
   double tmp222_ = tmp220_+tmp221_;
   double tmp223_ = -(tmp21_);
   double tmp224_ = tmp128_*tmp18_;
   double tmp225_ = tmp223_*tmp46_;
   double tmp226_ = tmp224_*tmp48_;
   double tmp227_ = tmp225_+tmp226_;
   double tmp228_ = (tmp227_)*(tmp17_);
   double tmp229_ = tmp223_*tmp7_;
   double tmp230_ = tmp224_*tmp53_;
   double tmp231_ = tmp229_+tmp230_;
   double tmp232_ = (tmp231_)*(tmp29_);
   double tmp233_ = tmp228_+tmp232_;
   double tmp234_ = tmp224_*tmp2_;
   double tmp235_ = tmp234_*(tmp37_);
   double tmp236_ = tmp233_+tmp235_;
   double tmp237_ = tmp45_*(tmp236_);
   double tmp238_ = -(tmp237_);
   double tmp239_ = tmp238_/tmp88_;
   double tmp240_ = (tmp239_)*(tmp44_);
   double tmp241_ = tmp240_*(tmp65_);
   double tmp242_ = tmp224_*tmp46_;
   double tmp243_ = tmp21_*tmp48_;
   double tmp244_ = tmp242_+tmp243_;
   double tmp245_ = (tmp244_)*(tmp17_);
   double tmp246_ = tmp224_*tmp7_;
   double tmp247_ = tmp21_*tmp53_;
   double tmp248_ = tmp246_+tmp247_;
   double tmp249_ = (tmp248_)*(tmp29_);
   double tmp250_ = tmp245_+tmp249_;
   double tmp251_ = tmp21_*tmp2_;
   double tmp252_ = tmp251_*(tmp37_);
   double tmp253_ = tmp250_+tmp252_;
   double tmp254_ = (tmp253_)*(tmp61_);
   double tmp255_ = (tmp239_)*(tmp78_);
   double tmp256_ = tmp254_+tmp255_;
   double tmp257_ = (tmp256_)*(tmp81_);
   double tmp258_ = tmp241_+tmp241_;
   double tmp259_ = tmp257_+tmp257_;
   double tmp260_ = tmp258_+tmp259_;
   double tmp261_ = (tmp260_)*(tmp84_);
   double tmp262_ = tmp261_+tmp261_;
   double tmp263_ = (tmp262_)*(tmp84_);
   double tmp264_ = (tmp260_)*tmp85_;
   double tmp265_ = tmp263_+tmp264_;
   double tmp266_ = (tmp265_)*(tmp84_);
   double tmp267_ = (tmp260_)*tmp86_;
   double tmp268_ = tmp266_+tmp267_;
   double tmp269_ = tmp128_*tmp38_;
   double tmp270_ = tmp269_*(tmp61_);
   double tmp271_ = tmp128_*(tmp50_);
   double tmp272_ = tmp45_*tmp271_;
   double tmp273_ = -(tmp272_);
   double tmp274_ = tmp273_/tmp88_;
   double tmp275_ = (tmp274_)*(tmp44_);
   double tmp276_ = tmp270_+tmp275_;
   double tmp277_ = (tmp276_)*(tmp65_);
   double tmp278_ = tmp128_*(tmp69_);
   double tmp279_ = tmp278_*(tmp61_);
   double tmp280_ = (tmp274_)*(tmp78_);
   double tmp281_ = tmp279_+tmp280_;
   double tmp282_ = (tmp281_)*(tmp81_);
   double tmp283_ = tmp277_+tmp277_;
   double tmp284_ = tmp282_+tmp282_;
   double tmp285_ = tmp283_+tmp284_;
   double tmp286_ = (tmp285_)*(tmp84_);
   double tmp287_ = tmp286_+tmp286_;
   double tmp288_ = (tmp287_)*(tmp84_);
   double tmp289_ = (tmp285_)*tmp85_;
   double tmp290_ = tmp288_+tmp289_;
   double tmp291_ = (tmp290_)*(tmp84_);
   double tmp292_ = (tmp285_)*tmp86_;
   double tmp293_ = tmp291_+tmp292_;
   double tmp294_ = tmp128_*tmp40_;
   double tmp295_ = tmp294_*(tmp61_);
   double tmp296_ = tmp128_*(tmp55_);
   double tmp297_ = tmp45_*tmp296_;
   double tmp298_ = -(tmp297_);
   double tmp299_ = tmp298_/tmp88_;
   double tmp300_ = (tmp299_)*(tmp44_);
   double tmp301_ = tmp295_+tmp300_;
   double tmp302_ = (tmp301_)*(tmp65_);
   double tmp303_ = tmp128_*(tmp73_);
   double tmp304_ = tmp303_*(tmp61_);
   double tmp305_ = (tmp299_)*(tmp78_);
   double tmp306_ = tmp304_+tmp305_;
   double tmp307_ = (tmp306_)*(tmp81_);
   double tmp308_ = tmp302_+tmp302_;
   double tmp309_ = tmp307_+tmp307_;
   double tmp310_ = tmp308_+tmp309_;
   double tmp311_ = (tmp310_)*(tmp84_);
   double tmp312_ = tmp311_+tmp311_;
   double tmp313_ = (tmp312_)*(tmp84_);
   double tmp314_ = (tmp310_)*tmp85_;
   double tmp315_ = tmp313_+tmp314_;
   double tmp316_ = (tmp315_)*(tmp84_);
   double tmp317_ = (tmp310_)*tmp86_;
   double tmp318_ = tmp316_+tmp317_;
   double tmp319_ = tmp174_*(tmp61_);
   double tmp320_ = tmp128_*tmp58_;
   double tmp321_ = tmp45_*tmp320_;
   double tmp322_ = -(tmp321_);
   double tmp323_ = tmp322_/tmp88_;
   double tmp324_ = (tmp323_)*(tmp44_);
   double tmp325_ = tmp319_+tmp324_;
   double tmp326_ = (tmp325_)*(tmp65_);
   double tmp327_ = tmp128_*tmp76_;
   double tmp328_ = tmp327_*(tmp61_);
   double tmp329_ = (tmp323_)*(tmp78_);
   double tmp330_ = tmp328_+tmp329_;
   double tmp331_ = (tmp330_)*(tmp81_);
   double tmp332_ = tmp326_+tmp326_;
   double tmp333_ = tmp331_+tmp331_;
   double tmp334_ = tmp332_+tmp333_;
   double tmp335_ = (tmp334_)*(tmp84_);
   double tmp336_ = tmp335_+tmp335_;
   double tmp337_ = (tmp336_)*(tmp84_);
   double tmp338_ = (tmp334_)*tmp85_;
   double tmp339_ = tmp337_+tmp338_;
   double tmp340_ = (tmp339_)*(tmp84_);
   double tmp341_ = (tmp334_)*tmp86_;
   double tmp342_ = tmp340_+tmp341_;
   double tmp343_ = mLocProjI_x*tmp38_;
   double tmp344_ = mLocProjI_y*tmp40_;
   double tmp345_ = tmp343_+tmp344_;
   double tmp346_ = mLocProjI_z*tmp8_;
   double tmp347_ = tmp345_+tmp346_;
   double tmp348_ = (tmp347_)*(tmp61_);
   double tmp349_ = mLocProjI_x*(tmp50_);
   double tmp350_ = mLocProjI_y*(tmp55_);
   double tmp351_ = tmp349_+tmp350_;
   double tmp352_ = mLocProjI_z*tmp58_;
   double tmp353_ = tmp351_+tmp352_;
   double tmp354_ = tmp45_*(tmp353_);
   double tmp355_ = -(tmp354_);
   double tmp356_ = tmp355_/tmp88_;
   double tmp357_ = (tmp356_)*(tmp44_);
   double tmp358_ = tmp348_+tmp357_;
   double tmp359_ = (tmp358_)*(tmp65_);
   double tmp360_ = mLocProjI_x*(tmp69_);
   double tmp361_ = mLocProjI_y*(tmp73_);
   double tmp362_ = tmp360_+tmp361_;
   double tmp363_ = mLocProjI_z*tmp76_;
   double tmp364_ = tmp362_+tmp363_;
   double tmp365_ = (tmp364_)*(tmp61_);
   double tmp366_ = (tmp356_)*(tmp78_);
   double tmp367_ = tmp365_+tmp366_;
   double tmp368_ = (tmp367_)*(tmp81_);
   double tmp369_ = tmp359_+tmp359_;
   double tmp370_ = tmp368_+tmp368_;
   double tmp371_ = tmp369_+tmp370_;
   double tmp372_ = (tmp371_)*(tmp84_);
   double tmp373_ = tmp372_+tmp372_;
   double tmp374_ = (tmp373_)*(tmp84_);
   double tmp375_ = (tmp371_)*tmp85_;
   double tmp376_ = tmp374_+tmp375_;
   double tmp377_ = (tmp376_)*(tmp84_);
   double tmp378_ = (tmp371_)*tmp86_;
   double tmp379_ = tmp377_+tmp378_;
   double tmp380_ = mLocProjJ_x*tmp38_;
   double tmp381_ = mLocProjJ_y*tmp40_;
   double tmp382_ = tmp380_+tmp381_;
   double tmp383_ = mLocProjJ_z*tmp8_;
   double tmp384_ = tmp382_+tmp383_;
   double tmp385_ = (tmp384_)*(tmp61_);
   double tmp386_ = mLocProjJ_x*(tmp50_);
   double tmp387_ = mLocProjJ_y*(tmp55_);
   double tmp388_ = tmp386_+tmp387_;
   double tmp389_ = mLocProjJ_z*tmp58_;
   double tmp390_ = tmp388_+tmp389_;
   double tmp391_ = tmp45_*(tmp390_);
   double tmp392_ = -(tmp391_);
   double tmp393_ = tmp392_/tmp88_;
   double tmp394_ = (tmp393_)*(tmp44_);
   double tmp395_ = tmp385_+tmp394_;
   double tmp396_ = (tmp395_)*(tmp65_);
   double tmp397_ = mLocProjJ_x*(tmp69_);
   double tmp398_ = mLocProjJ_y*(tmp73_);
   double tmp399_ = tmp397_+tmp398_;
   double tmp400_ = mLocProjJ_z*tmp76_;
   double tmp401_ = tmp399_+tmp400_;
   double tmp402_ = (tmp401_)*(tmp61_);
   double tmp403_ = (tmp393_)*(tmp78_);
   double tmp404_ = tmp402_+tmp403_;
   double tmp405_ = (tmp404_)*(tmp81_);
   double tmp406_ = tmp396_+tmp396_;
   double tmp407_ = tmp405_+tmp405_;
   double tmp408_ = tmp406_+tmp407_;
   double tmp409_ = (tmp408_)*(tmp84_);
   double tmp410_ = tmp409_+tmp409_;
   double tmp411_ = (tmp410_)*(tmp84_);
   double tmp412_ = (tmp408_)*tmp85_;
   double tmp413_ = tmp411_+tmp412_;
   double tmp414_ = (tmp413_)*(tmp84_);
   double tmp415_ = (tmp408_)*tmp86_;
   double tmp416_ = tmp414_+tmp415_;
   double tmp417_ = mLocProjK_x*tmp38_;
   double tmp418_ = mLocProjK_y*tmp40_;
   double tmp419_ = tmp417_+tmp418_;
   double tmp420_ = mLocProjK_z*tmp8_;
   double tmp421_ = tmp419_+tmp420_;
   double tmp422_ = (tmp421_)*(tmp61_);
   double tmp423_ = mLocProjK_x*(tmp50_);
   double tmp424_ = mLocProjK_y*(tmp55_);
   double tmp425_ = tmp423_+tmp424_;
   double tmp426_ = mLocProjK_z*tmp58_;
   double tmp427_ = tmp425_+tmp426_;
   double tmp428_ = tmp45_*(tmp427_);
   double tmp429_ = -(tmp428_);
   double tmp430_ = tmp429_/tmp88_;
   double tmp431_ = (tmp430_)*(tmp44_);
   double tmp432_ = tmp422_+tmp431_;
   double tmp433_ = (tmp432_)*(tmp65_);
   double tmp434_ = mLocProjK_x*(tmp69_);
   double tmp435_ = mLocProjK_y*(tmp73_);
   double tmp436_ = tmp434_+tmp435_;
   double tmp437_ = mLocProjK_z*tmp76_;
   double tmp438_ = tmp436_+tmp437_;
   double tmp439_ = (tmp438_)*(tmp61_);
   double tmp440_ = (tmp430_)*(tmp78_);
   double tmp441_ = tmp439_+tmp440_;
   double tmp442_ = (tmp441_)*(tmp81_);
   double tmp443_ = tmp433_+tmp433_;
   double tmp444_ = tmp442_+tmp442_;
   double tmp445_ = tmp443_+tmp444_;
   double tmp446_ = (tmp445_)*(tmp84_);
   double tmp447_ = tmp446_+tmp446_;
   double tmp448_ = (tmp447_)*(tmp84_);
   double tmp449_ = (tmp445_)*tmp85_;
   double tmp450_ = tmp448_+tmp449_;
   double tmp451_ = (tmp450_)*(tmp84_);
   double tmp452_ = (tmp445_)*tmp86_;
   double tmp453_ = tmp451_+tmp452_;
   double tmp454_ = (tmp111_)*tmp91_;
   double tmp455_ = (tmp113_)*tmp93_;
   double tmp456_ = tmp454_+tmp455_;
   double tmp457_ = (tmp116_)*tmp96_;
   double tmp458_ = tmp456_+tmp457_;
   double tmp459_ = (tmp119_)*tmp99_;
   double tmp460_ = tmp458_+tmp459_;
   double tmp461_ = (tmp119_)*(tmp84_);
   double tmp462_ = (tmp111_)*tmp87_;
   double tmp463_ = tmp461_+tmp462_;
   double tmp464_ = (tmp463_)*tmp102_;
   double tmp465_ = tmp460_+tmp464_;
   double tmp466_ = tmp90_*(tmp81_);
   double tmp467_ = tmp107_*(tmp65_);
   double tmp468_ = tmp466_+tmp467_;
   double tmp469_ = (tmp468_)*2;
   double tmp470_ = tmp127_*mLocScNorm;
   double tmp471_ = 2*tmp83_;
   double tmp472_ = tmp471_+tmp84_;
   double tmp473_ = (tmp165_)*tmp91_;
   double tmp474_ = (tmp167_)*tmp93_;
   double tmp475_ = tmp473_+tmp474_;
   double tmp476_ = (tmp170_)*tmp96_;
   double tmp477_ = tmp475_+tmp476_;
   double tmp478_ = (tmp173_)*tmp99_;
   double tmp479_ = tmp477_+tmp478_;
   double tmp480_ = (tmp173_)*(tmp84_);
   double tmp481_ = (tmp165_)*tmp87_;
   double tmp482_ = tmp480_+tmp481_;
   double tmp483_ = (tmp482_)*tmp102_;
   double tmp484_ = tmp479_+tmp483_;
   double tmp485_ = (tmp149_)*(tmp81_);
   double tmp486_ = (tmp161_)*(tmp65_);
   double tmp487_ = tmp485_+tmp486_;
   double tmp488_ = (tmp487_)*2;
   double tmp489_ = (tmp214_)*tmp91_;
   double tmp490_ = (tmp216_)*tmp93_;
   double tmp491_ = tmp489_+tmp490_;
   double tmp492_ = (tmp219_)*tmp96_;
   double tmp493_ = tmp491_+tmp492_;
   double tmp494_ = (tmp222_)*tmp99_;
   double tmp495_ = tmp493_+tmp494_;
   double tmp496_ = (tmp222_)*(tmp84_);
   double tmp497_ = (tmp214_)*tmp87_;
   double tmp498_ = tmp496_+tmp497_;
   double tmp499_ = (tmp498_)*tmp102_;
   double tmp500_ = tmp495_+tmp499_;
   double tmp501_ = (tmp198_)*(tmp81_);
   double tmp502_ = (tmp210_)*(tmp65_);
   double tmp503_ = tmp501_+tmp502_;
   double tmp504_ = (tmp503_)*2;
   double tmp505_ = (tmp260_)*tmp91_;
   double tmp506_ = (tmp262_)*tmp93_;
   double tmp507_ = tmp505_+tmp506_;
   double tmp508_ = (tmp265_)*tmp96_;
   double tmp509_ = tmp507_+tmp508_;
   double tmp510_ = (tmp268_)*tmp99_;
   double tmp511_ = tmp509_+tmp510_;
   double tmp512_ = (tmp268_)*(tmp84_);
   double tmp513_ = (tmp260_)*tmp87_;
   double tmp514_ = tmp512_+tmp513_;
   double tmp515_ = (tmp514_)*tmp102_;
   double tmp516_ = tmp511_+tmp515_;
   double tmp517_ = tmp240_*(tmp81_);
   double tmp518_ = (tmp256_)*(tmp65_);
   double tmp519_ = tmp517_+tmp518_;
   double tmp520_ = (tmp519_)*2;
   double tmp521_ = (tmp285_)*tmp91_;
   double tmp522_ = (tmp287_)*tmp93_;
   double tmp523_ = tmp521_+tmp522_;
   double tmp524_ = (tmp290_)*tmp96_;
   double tmp525_ = tmp523_+tmp524_;
   double tmp526_ = (tmp293_)*tmp99_;
   double tmp527_ = tmp525_+tmp526_;
   double tmp528_ = (tmp293_)*(tmp84_);
   double tmp529_ = (tmp285_)*tmp87_;
   double tmp530_ = tmp528_+tmp529_;
   double tmp531_ = (tmp530_)*tmp102_;
   double tmp532_ = tmp527_+tmp531_;
   double tmp533_ = (tmp276_)*(tmp81_);
   double tmp534_ = (tmp281_)*(tmp65_);
   double tmp535_ = tmp533_+tmp534_;
   double tmp536_ = (tmp535_)*2;
   double tmp537_ = (tmp310_)*tmp91_;
   double tmp538_ = (tmp312_)*tmp93_;
   double tmp539_ = tmp537_+tmp538_;
   double tmp540_ = (tmp315_)*tmp96_;
   double tmp541_ = tmp539_+tmp540_;
   double tmp542_ = (tmp318_)*tmp99_;
   double tmp543_ = tmp541_+tmp542_;
   double tmp544_ = (tmp318_)*(tmp84_);
   double tmp545_ = (tmp310_)*tmp87_;
   double tmp546_ = tmp544_+tmp545_;
   double tmp547_ = (tmp546_)*tmp102_;
   double tmp548_ = tmp543_+tmp547_;
   double tmp549_ = (tmp301_)*(tmp81_);
   double tmp550_ = (tmp306_)*(tmp65_);
   double tmp551_ = tmp549_+tmp550_;
   double tmp552_ = (tmp551_)*2;
   double tmp553_ = (tmp334_)*tmp91_;
   double tmp554_ = (tmp336_)*tmp93_;
   double tmp555_ = tmp553_+tmp554_;
   double tmp556_ = (tmp339_)*tmp96_;
   double tmp557_ = tmp555_+tmp556_;
   double tmp558_ = (tmp342_)*tmp99_;
   double tmp559_ = tmp557_+tmp558_;
   double tmp560_ = (tmp342_)*(tmp84_);
   double tmp561_ = (tmp334_)*tmp87_;
   double tmp562_ = tmp560_+tmp561_;
   double tmp563_ = (tmp562_)*tmp102_;
   double tmp564_ = tmp559_+tmp563_;
   double tmp565_ = (tmp325_)*(tmp81_);
   double tmp566_ = (tmp330_)*(tmp65_);
   double tmp567_ = tmp565_+tmp566_;
   double tmp568_ = (tmp567_)*2;
   double tmp569_ = (tmp371_)*tmp91_;
   double tmp570_ = (tmp373_)*tmp93_;
   double tmp571_ = tmp569_+tmp570_;
   double tmp572_ = (tmp376_)*tmp96_;
   double tmp573_ = tmp571_+tmp572_;
   double tmp574_ = (tmp379_)*tmp99_;
   double tmp575_ = tmp573_+tmp574_;
   double tmp576_ = (tmp379_)*(tmp84_);
   double tmp577_ = (tmp371_)*tmp87_;
   double tmp578_ = tmp576_+tmp577_;
   double tmp579_ = (tmp578_)*tmp102_;
   double tmp580_ = tmp575_+tmp579_;
   double tmp581_ = (tmp358_)*(tmp81_);
   double tmp582_ = (tmp367_)*(tmp65_);
   double tmp583_ = tmp581_+tmp582_;
   double tmp584_ = (tmp583_)*2;
   double tmp585_ = (tmp408_)*tmp91_;
   double tmp586_ = (tmp410_)*tmp93_;
   double tmp587_ = tmp585_+tmp586_;
   double tmp588_ = (tmp413_)*tmp96_;
   double tmp589_ = tmp587_+tmp588_;
   double tmp590_ = (tmp416_)*tmp99_;
   double tmp591_ = tmp589_+tmp590_;
   double tmp592_ = (tmp416_)*(tmp84_);
   double tmp593_ = (tmp408_)*tmp87_;
   double tmp594_ = tmp592_+tmp593_;
   double tmp595_ = (tmp594_)*tmp102_;
   double tmp596_ = tmp591_+tmp595_;
   double tmp597_ = (tmp395_)*(tmp81_);
   double tmp598_ = (tmp404_)*(tmp65_);
   double tmp599_ = tmp597_+tmp598_;
   double tmp600_ = (tmp599_)*2;
   double tmp601_ = (tmp445_)*tmp91_;
   double tmp602_ = (tmp447_)*tmp93_;
   double tmp603_ = tmp601_+tmp602_;
   double tmp604_ = (tmp450_)*tmp96_;
   double tmp605_ = tmp603_+tmp604_;
   double tmp606_ = (tmp453_)*tmp99_;
   double tmp607_ = tmp605_+tmp606_;
   double tmp608_ = (tmp453_)*(tmp84_);
   double tmp609_ = (tmp445_)*tmp87_;
   double tmp610_ = tmp608_+tmp609_;
   double tmp611_ = (tmp610_)*tmp102_;
   double tmp612_ = tmp607_+tmp611_;
   double tmp613_ = (tmp432_)*(tmp81_);
   double tmp614_ = (tmp441_)*(tmp65_);
   double tmp615_ = tmp613_+tmp614_;
   double tmp616_ = (tmp615_)*2;

  mVal[0] = ((tmp64_+(tmp65_)*(tmp105_)+(tmp125_)*tmp120_+tmp127_*tmp121_+tmp122_*(tmp65_)+tmp123_*(tmp81_))-mLocXIm)*mLocScNorm;

  mCompDer[0][0] = (tmp90_+tmp90_*(tmp105_)+(tmp465_)*(tmp65_)+((tmp109_)*2+tmp111_)*tmp120_+tmp469_*tmp121_+tmp90_*tmp122_+tmp107_*tmp123_)*mLocScNorm;
  mCompDer[0][1] = mLocScNorm;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = (tmp84_)*(tmp65_)*mLocScNorm;
  mCompDer[0][4] = tmp85_*(tmp65_)*mLocScNorm;
  mCompDer[0][5] = tmp86_*(tmp65_)*mLocScNorm;
  mCompDer[0][6] = tmp87_*(tmp65_)*mLocScNorm;
  mCompDer[0][7] = tmp103_*(tmp65_)*mLocScNorm;
  mCompDer[0][8] = (tmp125_)*mLocScNorm;
  mCompDer[0][9] = tmp470_;
  mCompDer[0][10] = (tmp65_)*mLocScNorm;
  mCompDer[0][11] = (tmp81_)*mLocScNorm;
  mCompDer[0][12] = (tmp149_+(tmp149_)*(tmp105_)+(tmp484_)*(tmp65_)+((tmp163_)*2+tmp165_)*tmp120_+tmp488_*tmp121_+(tmp149_)*tmp122_+(tmp161_)*tmp123_)*mLocScNorm;
  mCompDer[0][13] = (tmp198_+(tmp198_)*(tmp105_)+(tmp500_)*(tmp65_)+((tmp212_)*2+tmp214_)*tmp120_+tmp504_*tmp121_+(tmp198_)*tmp122_+(tmp210_)*tmp123_)*mLocScNorm;
  mCompDer[0][14] = (tmp240_+tmp240_*(tmp105_)+(tmp516_)*(tmp65_)+((tmp258_)*2+tmp260_)*tmp120_+tmp520_*tmp121_+tmp240_*tmp122_+(tmp256_)*tmp123_)*mLocScNorm;
  mCompDer[0][15] = (tmp276_+(tmp276_)*(tmp105_)+(tmp532_)*(tmp65_)+((tmp283_)*2+tmp285_)*tmp120_+tmp536_*tmp121_+(tmp276_)*tmp122_+(tmp281_)*tmp123_)*mLocScNorm;
  mCompDer[0][16] = (tmp301_+(tmp301_)*(tmp105_)+(tmp548_)*(tmp65_)+((tmp308_)*2+tmp310_)*tmp120_+tmp552_*tmp121_+(tmp301_)*tmp122_+(tmp306_)*tmp123_)*mLocScNorm;
  mCompDer[0][17] = (tmp325_+(tmp325_)*(tmp105_)+(tmp564_)*(tmp65_)+((tmp332_)*2+tmp334_)*tmp120_+tmp568_*tmp121_+(tmp325_)*tmp122_+(tmp330_)*tmp123_)*mLocScNorm;
  mCompDer[0][18] = (tmp358_+(tmp358_)*(tmp105_)+(tmp580_)*(tmp65_)+((tmp369_)*2+tmp371_)*tmp120_+tmp584_*tmp121_+(tmp358_)*tmp122_+(tmp367_)*tmp123_)*mLocScNorm;
  mCompDer[0][19] = (tmp395_+(tmp395_)*(tmp105_)+(tmp596_)*(tmp65_)+((tmp406_)*2+tmp408_)*tmp120_+tmp600_*tmp121_+(tmp395_)*tmp122_+(tmp404_)*tmp123_)*mLocScNorm;
  mCompDer[0][20] = (tmp432_+(tmp432_)*(tmp105_)+(tmp612_)*(tmp65_)+((tmp443_)*2+tmp445_)*tmp120_+tmp616_*tmp121_+(tmp432_)*tmp122_+(tmp441_)*tmp123_)*mLocScNorm;
  mVal[1] = ((tmp80_+(tmp81_)*(tmp105_)+(tmp472_)*tmp121_+tmp127_*tmp120_)-mLocYIm)*mLocScNorm;

  mCompDer[1][0] = (tmp107_+tmp107_*(tmp105_)+(tmp465_)*(tmp81_)+((tmp110_)*2+tmp111_)*tmp121_+tmp469_*tmp120_)*mLocScNorm;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = mLocScNorm;
  mCompDer[1][3] = (tmp84_)*(tmp81_)*mLocScNorm;
  mCompDer[1][4] = tmp85_*(tmp81_)*mLocScNorm;
  mCompDer[1][5] = tmp86_*(tmp81_)*mLocScNorm;
  mCompDer[1][6] = tmp87_*(tmp81_)*mLocScNorm;
  mCompDer[1][7] = tmp103_*(tmp81_)*mLocScNorm;
  mCompDer[1][8] = tmp470_;
  mCompDer[1][9] = (tmp472_)*mLocScNorm;
  mCompDer[1][10] = 0;
  mCompDer[1][11] = 0;
  mCompDer[1][12] = (tmp161_+(tmp161_)*(tmp105_)+(tmp484_)*(tmp81_)+((tmp164_)*2+tmp165_)*tmp121_+tmp488_*tmp120_)*mLocScNorm;
  mCompDer[1][13] = (tmp210_+(tmp210_)*(tmp105_)+(tmp500_)*(tmp81_)+((tmp213_)*2+tmp214_)*tmp121_+tmp504_*tmp120_)*mLocScNorm;
  mCompDer[1][14] = (tmp256_+(tmp256_)*(tmp105_)+(tmp516_)*(tmp81_)+((tmp259_)*2+tmp260_)*tmp121_+tmp520_*tmp120_)*mLocScNorm;
  mCompDer[1][15] = (tmp281_+(tmp281_)*(tmp105_)+(tmp532_)*(tmp81_)+((tmp284_)*2+tmp285_)*tmp121_+tmp536_*tmp120_)*mLocScNorm;
  mCompDer[1][16] = (tmp306_+(tmp306_)*(tmp105_)+(tmp548_)*(tmp81_)+((tmp309_)*2+tmp310_)*tmp121_+tmp552_*tmp120_)*mLocScNorm;
  mCompDer[1][17] = (tmp330_+(tmp330_)*(tmp105_)+(tmp564_)*(tmp81_)+((tmp333_)*2+tmp334_)*tmp121_+tmp568_*tmp120_)*mLocScNorm;
  mCompDer[1][18] = (tmp367_+(tmp367_)*(tmp105_)+(tmp580_)*(tmp81_)+((tmp370_)*2+tmp371_)*tmp121_+tmp584_*tmp120_)*mLocScNorm;
  mCompDer[1][19] = (tmp404_+(tmp404_)*(tmp105_)+(tmp596_)*(tmp81_)+((tmp407_)*2+tmp408_)*tmp121_+tmp600_*tmp120_)*mLocScNorm;
  mCompDer[1][20] = (tmp441_+(tmp441_)*(tmp105_)+(tmp612_)*(tmp81_)+((tmp444_)*2+tmp445_)*tmp121_+tmp616_*tmp120_)*mLocScNorm;
}


void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_PProjInc_M2CFraser_PPaEqPPs Has no Der Sec");
}

void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetProjI_x(double aVal){ mLocProjI_x = aVal;}
void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetProjI_y(double aVal){ mLocProjI_y = aVal;}
void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetProjI_z(double aVal){ mLocProjI_z = aVal;}
void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetProjJ_x(double aVal){ mLocProjJ_x = aVal;}
void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetProjJ_y(double aVal){ mLocProjJ_y = aVal;}
void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetProjJ_z(double aVal){ mLocProjJ_z = aVal;}
void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetProjK_x(double aVal){ mLocProjK_x = aVal;}
void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetProjK_y(double aVal){ mLocProjK_y = aVal;}
void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetProjK_z(double aVal){ mLocProjK_z = aVal;}
void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetProjP0_x(double aVal){ mLocProjP0_x = aVal;}
void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetProjP0_y(double aVal){ mLocProjP0_y = aVal;}
void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetProjP0_z(double aVal){ mLocProjP0_z = aVal;}
void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetScNorm(double aVal){ mLocScNorm = aVal;}
void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_PProjInc_M2CFraser_PPaEqPPs::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_PProjInc_M2CFraser_PPaEqPPs::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "ProjI_x") return & mLocProjI_x;
   if (aName == "ProjI_y") return & mLocProjI_y;
   if (aName == "ProjI_z") return & mLocProjI_z;
   if (aName == "ProjJ_x") return & mLocProjJ_x;
   if (aName == "ProjJ_y") return & mLocProjJ_y;
   if (aName == "ProjJ_z") return & mLocProjJ_z;
   if (aName == "ProjK_x") return & mLocProjK_x;
   if (aName == "ProjK_y") return & mLocProjK_y;
   if (aName == "ProjK_z") return & mLocProjK_z;
   if (aName == "ProjP0_x") return & mLocProjP0_x;
   if (aName == "ProjP0_y") return & mLocProjP0_y;
   if (aName == "ProjP0_z") return & mLocProjP0_z;
   if (aName == "ScNorm") return & mLocScNorm;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_PProjInc_M2CFraser_PPaEqPPs::mTheAuto("cEqAppui_PProjInc_M2CFraser_PPaEqPPs",cEqAppui_PProjInc_M2CFraser_PPaEqPPs::Alloc);


cElCompiledFonc *  cEqAppui_PProjInc_M2CFraser_PPaEqPPs::Alloc()
{  return new cEqAppui_PProjInc_M2CFraser_PPaEqPPs();
}


