#include "nnTrainednotL2_chi110.h"
#include <cmath>

double nnTrainednotL2_chi110::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7) {
   input0 = (in0 - 2.01767)/9.48174;
   input1 = (in1 - 2.48146)/1.02845;
   input2 = (in2 - 2.61984)/12.8363;
   input3 = (in3 - -26.1282)/168.946;
   input4 = (in4 - 29080.6)/168024;
   input5 = (in5 - -0.0291359)/0.16836;
   input6 = (in6 - 1201.96)/1170.75;
   input7 = (in7 - 107.968)/24.6581;
   switch(index) {
     case 0:
         return neuron0x54515c0();
     default:
         return 0.;
   }
}

double nnTrainednotL2_chi110::Value(int index, double* input) {
   input0 = (input[0] - 2.01767)/9.48174;
   input1 = (input[1] - 2.48146)/1.02845;
   input2 = (input[2] - 2.61984)/12.8363;
   input3 = (input[3] - -26.1282)/168.946;
   input4 = (input[4] - 29080.6)/168024;
   input5 = (input[5] - -0.0291359)/0.16836;
   input6 = (input[6] - 1201.96)/1170.75;
   input7 = (input[7] - 107.968)/24.6581;
   switch(index) {
     case 0:
         return neuron0x54515c0();
     default:
         return 0.;
   }
}

double nnTrainednotL2_chi110::neuron0x542abc0() {
   return input0;
}

double nnTrainednotL2_chi110::neuron0x542bc40() {
   return input1;
}

double nnTrainednotL2_chi110::neuron0x542bf80() {
   return input2;
}

double nnTrainednotL2_chi110::neuron0x542c2c0() {
   return input3;
}

double nnTrainednotL2_chi110::neuron0x542af20() {
   return input4;
}

double nnTrainednotL2_chi110::neuron0x542b260() {
   return input5;
}

double nnTrainednotL2_chi110::neuron0x542b5a0() {
   return input6;
}

double nnTrainednotL2_chi110::neuron0x5419380() {
   return input7;
}

double nnTrainednotL2_chi110::input0x54196c0() {
   double input = 4.3022;
   input += synapse0x542bad0();
   input += synapse0x5419970();
   input += synapse0x54199b0();
   input += synapse0x54199f0();
   input += synapse0x5419a30();
   input += synapse0x5419a70();
   input += synapse0x5419ab0();
   input += synapse0x5419af0();
   return input;
}

double nnTrainednotL2_chi110::neuron0x54196c0() {
   double input = input0x54196c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110::input0x5419b30() {
   double input = 1.3594;
   input += synapse0x5419e70();
   input += synapse0x5419eb0();
   input += synapse0x5419ef0();
   input += synapse0x5419f30();
   input += synapse0x5419f70();
   input += synapse0x5419fb0();
   input += synapse0x5419ff0();
   input += synapse0x541a030();
   return input;
}

double nnTrainednotL2_chi110::neuron0x5419b30() {
   double input = input0x5419b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110::input0x541a070() {
   double input = -0.343673;
   input += synapse0x541a3b0();
   input += synapse0x542bb10();
   input += synapse0x542ba10();
   input += synapse0x542c600();
   input += synapse0x542ae70();
   input += synapse0x542aeb0();
   input += synapse0x542a400();
   input += synapse0x542a440();
   return input;
}

double nnTrainednotL2_chi110::neuron0x541a070() {
   double input = input0x541a070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110::input0x541a500() {
   double input = 1.3982;
   input += synapse0x541a840();
   input += synapse0x541a880();
   input += synapse0x541a8c0();
   input += synapse0x541a900();
   input += synapse0x541a940();
   input += synapse0x541a980();
   input += synapse0x541a9c0();
   input += synapse0x541aa00();
   return input;
}

double nnTrainednotL2_chi110::neuron0x541a500() {
   double input = input0x541a500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110::input0x541aa40() {
   double input = -0.430443;
   input += synapse0x541ad80();
   input += synapse0x541a3f0();
   input += synapse0x541a430();
   input += synapse0x541a470();
   input += synapse0x541a4b0();
   input += synapse0x541afd0();
   input += synapse0x541b010();
   input += synapse0x541b050();
   return input;
}

double nnTrainednotL2_chi110::neuron0x541aa40() {
   double input = input0x541aa40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110::input0x541b090() {
   double input = 1.74702;
   input += synapse0x541b3d0();
   input += synapse0x541b410();
   input += synapse0x541b450();
   input += synapse0x541b490();
   input += synapse0x541b4d0();
   input += synapse0x541b510();
   input += synapse0x541b550();
   input += synapse0x541b590();
   return input;
}

double nnTrainednotL2_chi110::neuron0x541b090() {
   double input = input0x541b090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110::input0x541b5d0() {
   double input = -2.65448;
   input += synapse0x541b910();
   input += synapse0x541b950();
   input += synapse0x541b990();
   input += synapse0x541b9d0();
   input += synapse0x541ba10();
   input += synapse0x541ba50();
   input += synapse0x541ba90();
   input += synapse0x541bad0();
   return input;
}

double nnTrainednotL2_chi110::neuron0x541b5d0() {
   double input = input0x541b5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110::input0x541bb10() {
   double input = -1.43925;
   input += synapse0x541be50();
   input += synapse0x541be90();
   input += synapse0x541bed0();
   input += synapse0x541bf10();
   input += synapse0x541bf50();
   input += synapse0x541bf90();
   input += synapse0x541bfd0();
   return input;
}

double nnTrainednotL2_chi110::neuron0x541bb10() {
   double input = input0x541bb10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110::input0x541c010() {
   double input = 0.369644;
   input += synapse0x541c230();
   input += synapse0x542a250();
   input += synapse0x542a290();
   input += synapse0x542bb60();
   input += synapse0x542a490();
   input += synapse0x541adc0();
   input += synapse0x541ae00();
   return input;
}

double nnTrainednotL2_chi110::neuron0x541c010() {
   double input = input0x541c010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110::input0x541ae40() {
   double input = 0.665176;
   input += synapse0x542aa80();
   input += synapse0x542aac0();
   input += synapse0x5450f80();
   input += synapse0x5450fc0();
   input += synapse0x5451000();
   input += synapse0x5451040();
   input += synapse0x5451080();
   return input;
}

double nnTrainednotL2_chi110::neuron0x541ae40() {
   double input = input0x541ae40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110::input0x54510c0() {
   double input = -0.611426;
   input += synapse0x5451400();
   input += synapse0x5451440();
   input += synapse0x5451480();
   input += synapse0x54514c0();
   input += synapse0x5451500();
   input += synapse0x5451540();
   input += synapse0x5451580();
   return input;
}

double nnTrainednotL2_chi110::neuron0x54510c0() {
   double input = input0x54510c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110::input0x54515c0() {
   double input = -0.34685;
   input += synapse0x5451900();
   input += synapse0x5451940();
   input += synapse0x5451980();
   input += synapse0x54519c0();
   return input;
}

double nnTrainednotL2_chi110::neuron0x54515c0() {
   double input = input0x54515c0();
   return (input * 1)+0;
}

double nnTrainednotL2_chi110::synapse0x542bad0() {
   return (neuron0x542abc0()*3.12411);
}

double nnTrainednotL2_chi110::synapse0x5419970() {
   return (neuron0x542bc40()*-0.481539);
}

double nnTrainednotL2_chi110::synapse0x54199b0() {
   return (neuron0x542bf80()*-1.66663);
}

double nnTrainednotL2_chi110::synapse0x54199f0() {
   return (neuron0x542c2c0()*0.679742);
}

double nnTrainednotL2_chi110::synapse0x5419a30() {
   return (neuron0x542af20()*-0.00130731);
}

double nnTrainednotL2_chi110::synapse0x5419a70() {
   return (neuron0x542b260()*-0.151271);
}

double nnTrainednotL2_chi110::synapse0x5419ab0() {
   return (neuron0x542b5a0()*8.72192);
}

double nnTrainednotL2_chi110::synapse0x5419af0() {
   return (neuron0x5419380()*-0.774282);
}

double nnTrainednotL2_chi110::synapse0x5419e70() {
   return (neuron0x542abc0()*-3.56089);
}

double nnTrainednotL2_chi110::synapse0x5419eb0() {
   return (neuron0x542bc40()*-0.0543376);
}

double nnTrainednotL2_chi110::synapse0x5419ef0() {
   return (neuron0x542bf80()*5.19987);
}

double nnTrainednotL2_chi110::synapse0x5419f30() {
   return (neuron0x542c2c0()*-0.579416);
}

double nnTrainednotL2_chi110::synapse0x5419f70() {
   return (neuron0x542af20()*0.505163);
}

double nnTrainednotL2_chi110::synapse0x5419fb0() {
   return (neuron0x542b260()*-0.201238);
}

double nnTrainednotL2_chi110::synapse0x5419ff0() {
   return (neuron0x542b5a0()*-0.048525);
}

double nnTrainednotL2_chi110::synapse0x541a030() {
   return (neuron0x5419380()*0.037221);
}

double nnTrainednotL2_chi110::synapse0x541a3b0() {
   return (neuron0x542abc0()*-5.36215);
}

double nnTrainednotL2_chi110::synapse0x542bb10() {
   return (neuron0x542bc40()*-0.196995);
}

double nnTrainednotL2_chi110::synapse0x542ba10() {
   return (neuron0x542bf80()*1.41093);
}

double nnTrainednotL2_chi110::synapse0x542c600() {
   return (neuron0x542c2c0()*0.33082);
}

double nnTrainednotL2_chi110::synapse0x542ae70() {
   return (neuron0x542af20()*0.0312343);
}

double nnTrainednotL2_chi110::synapse0x542aeb0() {
   return (neuron0x542b260()*0.917767);
}

double nnTrainednotL2_chi110::synapse0x542a400() {
   return (neuron0x542b5a0()*2.54794);
}

double nnTrainednotL2_chi110::synapse0x542a440() {
   return (neuron0x5419380()*-0.200055);
}

double nnTrainednotL2_chi110::synapse0x541a840() {
   return (neuron0x542abc0()*2.40924);
}

double nnTrainednotL2_chi110::synapse0x541a880() {
   return (neuron0x542bc40()*3.0072);
}

double nnTrainednotL2_chi110::synapse0x541a8c0() {
   return (neuron0x542bf80()*-3.72507);
}

double nnTrainednotL2_chi110::synapse0x541a900() {
   return (neuron0x542c2c0()*0.170265);
}

double nnTrainednotL2_chi110::synapse0x541a940() {
   return (neuron0x542af20()*-0.652726);
}

double nnTrainednotL2_chi110::synapse0x541a980() {
   return (neuron0x542b260()*0.115383);
}

double nnTrainednotL2_chi110::synapse0x541a9c0() {
   return (neuron0x542b5a0()*-0.634376);
}

double nnTrainednotL2_chi110::synapse0x541aa00() {
   return (neuron0x5419380()*-0.0739657);
}

double nnTrainednotL2_chi110::synapse0x541ad80() {
   return (neuron0x542abc0()*3.20483);
}

double nnTrainednotL2_chi110::synapse0x541a3f0() {
   return (neuron0x542bc40()*-2.30118);
}

double nnTrainednotL2_chi110::synapse0x541a430() {
   return (neuron0x542bf80()*-2.26695);
}

double nnTrainednotL2_chi110::synapse0x541a470() {
   return (neuron0x542c2c0()*1.00031);
}

double nnTrainednotL2_chi110::synapse0x541a4b0() {
   return (neuron0x542af20()*-0.605183);
}

double nnTrainednotL2_chi110::synapse0x541afd0() {
   return (neuron0x542b260()*0.660195);
}

double nnTrainednotL2_chi110::synapse0x541b010() {
   return (neuron0x542b5a0()*0.49834);
}

double nnTrainednotL2_chi110::synapse0x541b050() {
   return (neuron0x5419380()*0.257198);
}

double nnTrainednotL2_chi110::synapse0x541b3d0() {
   return (neuron0x542abc0()*0.272714);
}

double nnTrainednotL2_chi110::synapse0x541b410() {
   return (neuron0x542bc40()*2.21113);
}

double nnTrainednotL2_chi110::synapse0x541b450() {
   return (neuron0x542bf80()*3.82256);
}

double nnTrainednotL2_chi110::synapse0x541b490() {
   return (neuron0x542c2c0()*0.473495);
}

double nnTrainednotL2_chi110::synapse0x541b4d0() {
   return (neuron0x542af20()*-0.399407);
}

double nnTrainednotL2_chi110::synapse0x541b510() {
   return (neuron0x542b260()*0.548256);
}

double nnTrainednotL2_chi110::synapse0x541b550() {
   return (neuron0x542b5a0()*-2.28356);
}

double nnTrainednotL2_chi110::synapse0x541b590() {
   return (neuron0x5419380()*0.0527117);
}

double nnTrainednotL2_chi110::synapse0x541b910() {
   return (neuron0x542abc0()*-0.225908);
}

double nnTrainednotL2_chi110::synapse0x541b950() {
   return (neuron0x542bc40()*2.04762);
}

double nnTrainednotL2_chi110::synapse0x541b990() {
   return (neuron0x542bf80()*1.5297);
}

double nnTrainednotL2_chi110::synapse0x541b9d0() {
   return (neuron0x542c2c0()*-0.7725);
}

double nnTrainednotL2_chi110::synapse0x541ba10() {
   return (neuron0x542af20()*0.35561);
}

double nnTrainednotL2_chi110::synapse0x541ba50() {
   return (neuron0x542b260()*-1.04782);
}

double nnTrainednotL2_chi110::synapse0x541ba90() {
   return (neuron0x542b5a0()*0.816237);
}

double nnTrainednotL2_chi110::synapse0x541bad0() {
   return (neuron0x5419380()*-0.150589);
}

double nnTrainednotL2_chi110::synapse0x541be50() {
   return (neuron0x54196c0()*1.17227);
}

double nnTrainednotL2_chi110::synapse0x541be90() {
   return (neuron0x5419b30()*3.11053);
}

double nnTrainednotL2_chi110::synapse0x541bed0() {
   return (neuron0x541a070()*-1.28095);
}

double nnTrainednotL2_chi110::synapse0x541bf10() {
   return (neuron0x541a500()*-2.64724);
}

double nnTrainednotL2_chi110::synapse0x541bf50() {
   return (neuron0x541aa40()*0.201292);
}

double nnTrainednotL2_chi110::synapse0x541bf90() {
   return (neuron0x541b090()*1.6244);
}

double nnTrainednotL2_chi110::synapse0x541bfd0() {
   return (neuron0x541b5d0()*-5.18711);
}

double nnTrainednotL2_chi110::synapse0x541c230() {
   return (neuron0x54196c0()*4.60934);
}

double nnTrainednotL2_chi110::synapse0x542a250() {
   return (neuron0x5419b30()*0.660004);
}

double nnTrainednotL2_chi110::synapse0x542a290() {
   return (neuron0x541a070()*-1.88181);
}

double nnTrainednotL2_chi110::synapse0x542bb60() {
   return (neuron0x541a500()*-2.71462);
}

double nnTrainednotL2_chi110::synapse0x542a490() {
   return (neuron0x541aa40()*1.11611);
}

double nnTrainednotL2_chi110::synapse0x541adc0() {
   return (neuron0x541b090()*0.471685);
}

double nnTrainednotL2_chi110::synapse0x541ae00() {
   return (neuron0x541b5d0()*-3.51583);
}

double nnTrainednotL2_chi110::synapse0x542aa80() {
   return (neuron0x54196c0()*2.132);
}

double nnTrainednotL2_chi110::synapse0x542aac0() {
   return (neuron0x5419b30()*-2.42193);
}

double nnTrainednotL2_chi110::synapse0x5450f80() {
   return (neuron0x541a070()*-3.30728);
}

double nnTrainednotL2_chi110::synapse0x5450fc0() {
   return (neuron0x541a500()*0.888928);
}

double nnTrainednotL2_chi110::synapse0x5451000() {
   return (neuron0x541aa40()*1.99383);
}

double nnTrainednotL2_chi110::synapse0x5451040() {
   return (neuron0x541b090()*-0.204301);
}

double nnTrainednotL2_chi110::synapse0x5451080() {
   return (neuron0x541b5d0()*-2.75921);
}

double nnTrainednotL2_chi110::synapse0x5451400() {
   return (neuron0x54196c0()*-1.10312);
}

double nnTrainednotL2_chi110::synapse0x5451440() {
   return (neuron0x5419b30()*0.493634);
}

double nnTrainednotL2_chi110::synapse0x5451480() {
   return (neuron0x541a070()*-0.846491);
}

double nnTrainednotL2_chi110::synapse0x54514c0() {
   return (neuron0x541a500()*-0.680471);
}

double nnTrainednotL2_chi110::synapse0x5451500() {
   return (neuron0x541aa40()*-1.04561);
}

double nnTrainednotL2_chi110::synapse0x5451540() {
   return (neuron0x541b090()*1.12359);
}

double nnTrainednotL2_chi110::synapse0x5451580() {
   return (neuron0x541b5d0()*-0.409128);
}

double nnTrainednotL2_chi110::synapse0x5451900() {
   return (neuron0x541bb10()*-3.66318);
}

double nnTrainednotL2_chi110::synapse0x5451940() {
   return (neuron0x541c010()*1.3595);
}

double nnTrainednotL2_chi110::synapse0x5451980() {
   return (neuron0x541ae40()*3.29337);
}

double nnTrainednotL2_chi110::synapse0x54519c0() {
   return (neuron0x54510c0()*0.764612);
}

