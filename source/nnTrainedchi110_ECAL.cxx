#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_ECAL.h"
#include <cmath>

double nnTrainedchi110_ECAL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9) {
   input0 = (in0 - 52.5327)/87.3374;
   input1 = (in1 - 8.06378)/4.77866;
   input2 = (in2 - 0.675109)/0.257665;
   input3 = (in3 - 3.17662e-310)/1;
   input4 = (in4 - 0)/1;
   input5 = (in5 - 0.999729)/0.00203453;
   input6 = (in6 - 6.93772e-310)/1;
   input7 = (in7 - 6.939e-310)/1;
   input8 = (in8 - 6.72656e-314)/1;
   input9 = (in9 - 2.12277)/1.38;
   switch(index) {
     case 0:
         return neuron0x43ad520();
     default:
         return 0.;
   }
}

double nnTrainedchi110_ECAL::Value(int index, double* input) {
   input0 = (input[0] - 52.5327)/87.3374;
   input1 = (input[1] - 8.06378)/4.77866;
   input2 = (input[2] - 0.675109)/0.257665;
   input3 = (input[3] - 3.17662e-310)/1;
   input4 = (input[4] - 0)/1;
   input5 = (input[5] - 0.999729)/0.00203453;
   input6 = (input[6] - 6.93772e-310)/1;
   input7 = (input[7] - 6.939e-310)/1;
   input8 = (input[8] - 6.72656e-314)/1;
   input9 = (input[9] - 2.12277)/1.38;
   switch(index) {
     case 0:
         return neuron0x43ad520();
     default:
         return 0.;
   }
}

double nnTrainedchi110_ECAL::neuron0x41e5960() {
   return input0;
}

double nnTrainedchi110_ECAL::neuron0x41e03e0() {
   return input1;
}

double nnTrainedchi110_ECAL::neuron0x41e0720() {
   return input2;
}

double nnTrainedchi110_ECAL::neuron0x41e0a60() {
   return input3;
}

double nnTrainedchi110_ECAL::neuron0x41e0da0() {
   return input4;
}

double nnTrainedchi110_ECAL::neuron0x41e3d00() {
   return input5;
}

double nnTrainedchi110_ECAL::neuron0x41e4040() {
   return input6;
}

double nnTrainedchi110_ECAL::neuron0x41e4380() {
   return input7;
}

double nnTrainedchi110_ECAL::neuron0x41e46c0() {
   return input8;
}

double nnTrainedchi110_ECAL::neuron0x41e4a00() {
   return input9;
}

double nnTrainedchi110_ECAL::input0x43a8c60() {
   double input = 3.67341;
   input += synapse0x41e1080();
   input += synapse0x41e5ba0();
   input += synapse0x41e5be0();
   input += synapse0x43a8f10();
   input += synapse0x43a8f50();
   input += synapse0x43a8f90();
   input += synapse0x43a8fd0();
   input += synapse0x43a9010();
   input += synapse0x43a9050();
   input += synapse0x43a9090();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43a8c60() {
   double input = input0x43a8c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x43a90d0() {
   double input = 0.590323;
   input += synapse0x43a9410();
   input += synapse0x43a9450();
   input += synapse0x43a9490();
   input += synapse0x43a94d0();
   input += synapse0x43a9510();
   input += synapse0x43a9550();
   input += synapse0x43a9590();
   input += synapse0x41e4cb0();
   input += synapse0x41de500();
   input += synapse0x41de540();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43a90d0() {
   double input = input0x43a90d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x43a96e0() {
   double input = 0.295232;
   input += synapse0x43a9a20();
   input += synapse0x43a9a60();
   input += synapse0x43a9aa0();
   input += synapse0x43a9ae0();
   input += synapse0x43a9b20();
   input += synapse0x43a9b60();
   input += synapse0x43a9ba0();
   input += synapse0x43a9be0();
   input += synapse0x43a9c20();
   input += synapse0x43a9c60();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43a96e0() {
   double input = input0x43a96e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x43a9ca0() {
   double input = 2.10822;
   input += synapse0x43a9fe0();
   input += synapse0x43aa020();
   input += synapse0x43aa060();
   input += synapse0x43a95d0();
   input += synapse0x43a9610();
   input += synapse0x43a9650();
   input += synapse0x43a9690();
   input += synapse0x43aa2b0();
   input += synapse0x43aa2f0();
   input += synapse0x43aa330();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43a9ca0() {
   double input = input0x43a9ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x43aa370() {
   double input = -0.0293031;
   input += synapse0x43aa6b0();
   input += synapse0x43aa6f0();
   input += synapse0x43aa730();
   input += synapse0x43aa770();
   input += synapse0x43aa7b0();
   input += synapse0x43aa7f0();
   input += synapse0x43aa830();
   input += synapse0x43aa870();
   input += synapse0x43aa8b0();
   input += synapse0x43aa8f0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43aa370() {
   double input = input0x43aa370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x43aa930() {
   double input = 1.00029;
   input += synapse0x43aac70();
   input += synapse0x43aacb0();
   input += synapse0x43aacf0();
   input += synapse0x43aad30();
   input += synapse0x43aad70();
   input += synapse0x43aadb0();
   input += synapse0x43aadf0();
   input += synapse0x43aae30();
   input += synapse0x43aae70();
   input += synapse0x43aaeb0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43aa930() {
   double input = input0x43aa930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x43aaef0() {
   double input = -2.76803;
   input += synapse0x41de350();
   input += synapse0x41de390();
   input += synapse0x43ab340();
   input += synapse0x43ab380();
   input += synapse0x43ab3c0();
   input += synapse0x41e1b40();
   input += synapse0x43af3f0();
   input += synapse0x41e58f0();
   input += synapse0x41e00e0();
   input += synapse0x41e0120();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43aaef0() {
   double input = input0x43aaef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x43aa0a0() {
   double input = 0.53068;
   input += synapse0x41e0280();
   input += synapse0x43ab8a0();
   input += synapse0x43ab8e0();
   input += synapse0x43ab920();
   input += synapse0x43ab960();
   input += synapse0x43ab9a0();
   input += synapse0x43ab9e0();
   input += synapse0x43aba20();
   input += synapse0x43aba60();
   input += synapse0x43abaa0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43aa0a0() {
   double input = input0x43aa0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x43abae0() {
   double input = -1.31369;
   input += synapse0x43abe20();
   input += synapse0x43abe60();
   input += synapse0x43abea0();
   input += synapse0x43abee0();
   input += synapse0x43abf20();
   input += synapse0x43abf60();
   input += synapse0x43abfa0();
   input += synapse0x43abfe0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43abae0() {
   double input = input0x43abae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x43ac020() {
   double input = -0.528646;
   input += synapse0x43ac360();
   input += synapse0x43ac3a0();
   input += synapse0x43ac3e0();
   input += synapse0x43ac420();
   input += synapse0x43ac460();
   input += synapse0x43ac4a0();
   input += synapse0x43ac4e0();
   input += synapse0x43ac520();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43ac020() {
   double input = input0x43ac020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x43ac560() {
   double input = -1.19637;
   input += synapse0x43ac8a0();
   input += synapse0x43ac8e0();
   input += synapse0x43ac920();
   input += synapse0x43ac960();
   input += synapse0x43ac9a0();
   input += synapse0x43ac9e0();
   input += synapse0x43aca20();
   input += synapse0x43aca60();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43ac560() {
   double input = input0x43ac560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x43acaa0() {
   double input = -0.723903;
   input += synapse0x43acde0();
   input += synapse0x43ace20();
   input += synapse0x43ace60();
   input += synapse0x43acea0();
   input += synapse0x43acee0();
   input += synapse0x43acf20();
   input += synapse0x43acf60();
   input += synapse0x43acfa0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43acaa0() {
   double input = input0x43acaa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x43acfe0() {
   double input = -0.701628;
   input += synapse0x43ad320();
   input += synapse0x43ad360();
   input += synapse0x43ad3a0();
   input += synapse0x43ad3e0();
   input += synapse0x43ad420();
   input += synapse0x43ad460();
   input += synapse0x43ad4a0();
   input += synapse0x43ad4e0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43acfe0() {
   double input = input0x43acfe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x43ad520() {
   double input = 1.04306;
   input += synapse0x43ad860();
   input += synapse0x43ad8a0();
   input += synapse0x43ad8e0();
   input += synapse0x43ad920();
   input += synapse0x43ad960();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43ad520() {
   double input = input0x43ad520();
   return (input * 1)+0;
}

double nnTrainedchi110_ECAL::synapse0x41e1080() {
   return (neuron0x41e5960()*-5.09459);
}

double nnTrainedchi110_ECAL::synapse0x41e5ba0() {
   return (neuron0x41e03e0()*-0.952671);
}

double nnTrainedchi110_ECAL::synapse0x41e5be0() {
   return (neuron0x41e0720()*-1.80504);
}

double nnTrainedchi110_ECAL::synapse0x43a8f10() {
   return (neuron0x41e0a60()*-0.163595);
}

double nnTrainedchi110_ECAL::synapse0x43a8f50() {
   return (neuron0x41e0da0()*0.181488);
}

double nnTrainedchi110_ECAL::synapse0x43a8f90() {
   return (neuron0x41e3d00()*1.12383);
}

double nnTrainedchi110_ECAL::synapse0x43a8fd0() {
   return (neuron0x41e4040()*-0.161206);
}

double nnTrainedchi110_ECAL::synapse0x43a9010() {
   return (neuron0x41e4380()*0.0489917);
}

double nnTrainedchi110_ECAL::synapse0x43a9050() {
   return (neuron0x41e46c0()*-0.368664);
}

double nnTrainedchi110_ECAL::synapse0x43a9090() {
   return (neuron0x41e4a00()*-1.28628);
}

double nnTrainedchi110_ECAL::synapse0x43a9410() {
   return (neuron0x41e5960()*0.991973);
}

double nnTrainedchi110_ECAL::synapse0x43a9450() {
   return (neuron0x41e03e0()*0.55995);
}

double nnTrainedchi110_ECAL::synapse0x43a9490() {
   return (neuron0x41e0720()*0.000157092);
}

double nnTrainedchi110_ECAL::synapse0x43a94d0() {
   return (neuron0x41e0a60()*-0.300275);
}

double nnTrainedchi110_ECAL::synapse0x43a9510() {
   return (neuron0x41e0da0()*-0.450243);
}

double nnTrainedchi110_ECAL::synapse0x43a9550() {
   return (neuron0x41e3d00()*-0.429209);
}

double nnTrainedchi110_ECAL::synapse0x43a9590() {
   return (neuron0x41e4040()*-0.184282);
}

double nnTrainedchi110_ECAL::synapse0x41e4cb0() {
   return (neuron0x41e4380()*0.17015);
}

double nnTrainedchi110_ECAL::synapse0x41de500() {
   return (neuron0x41e46c0()*-0.494731);
}

double nnTrainedchi110_ECAL::synapse0x41de540() {
   return (neuron0x41e4a00()*0.226694);
}

double nnTrainedchi110_ECAL::synapse0x43a9a20() {
   return (neuron0x41e5960()*0.22757);
}

double nnTrainedchi110_ECAL::synapse0x43a9a60() {
   return (neuron0x41e03e0()*1.09462);
}

double nnTrainedchi110_ECAL::synapse0x43a9aa0() {
   return (neuron0x41e0720()*-0.569572);
}

double nnTrainedchi110_ECAL::synapse0x43a9ae0() {
   return (neuron0x41e0a60()*-0.455162);
}

double nnTrainedchi110_ECAL::synapse0x43a9b20() {
   return (neuron0x41e0da0()*-0.155486);
}

double nnTrainedchi110_ECAL::synapse0x43a9b60() {
   return (neuron0x41e3d00()*0.303825);
}

double nnTrainedchi110_ECAL::synapse0x43a9ba0() {
   return (neuron0x41e4040()*0.20218);
}

double nnTrainedchi110_ECAL::synapse0x43a9be0() {
   return (neuron0x41e4380()*-0.411983);
}

double nnTrainedchi110_ECAL::synapse0x43a9c20() {
   return (neuron0x41e46c0()*-0.058048);
}

double nnTrainedchi110_ECAL::synapse0x43a9c60() {
   return (neuron0x41e4a00()*0.158028);
}

double nnTrainedchi110_ECAL::synapse0x43a9fe0() {
   return (neuron0x41e5960()*-0.0109809);
}

double nnTrainedchi110_ECAL::synapse0x43aa020() {
   return (neuron0x41e03e0()*0.0216745);
}

double nnTrainedchi110_ECAL::synapse0x43aa060() {
   return (neuron0x41e0720()*-2.54873);
}

double nnTrainedchi110_ECAL::synapse0x43a95d0() {
   return (neuron0x41e0a60()*0.127329);
}

double nnTrainedchi110_ECAL::synapse0x43a9610() {
   return (neuron0x41e0da0()*0.160712);
}

double nnTrainedchi110_ECAL::synapse0x43a9650() {
   return (neuron0x41e3d00()*0.385352);
}

double nnTrainedchi110_ECAL::synapse0x43a9690() {
   return (neuron0x41e4040()*-0.0122099);
}

double nnTrainedchi110_ECAL::synapse0x43aa2b0() {
   return (neuron0x41e4380()*-0.0314548);
}

double nnTrainedchi110_ECAL::synapse0x43aa2f0() {
   return (neuron0x41e46c0()*-0.455272);
}

double nnTrainedchi110_ECAL::synapse0x43aa330() {
   return (neuron0x41e4a00()*-0.00961132);
}

double nnTrainedchi110_ECAL::synapse0x43aa6b0() {
   return (neuron0x41e5960()*1.48189);
}

double nnTrainedchi110_ECAL::synapse0x43aa6f0() {
   return (neuron0x41e03e0()*-1.03814);
}

double nnTrainedchi110_ECAL::synapse0x43aa730() {
   return (neuron0x41e0720()*-0.529885);
}

double nnTrainedchi110_ECAL::synapse0x43aa770() {
   return (neuron0x41e0a60()*-0.338583);
}

double nnTrainedchi110_ECAL::synapse0x43aa7b0() {
   return (neuron0x41e0da0()*-0.169761);
}

double nnTrainedchi110_ECAL::synapse0x43aa7f0() {
   return (neuron0x41e3d00()*0.0819828);
}

double nnTrainedchi110_ECAL::synapse0x43aa830() {
   return (neuron0x41e4040()*0.0172524);
}

double nnTrainedchi110_ECAL::synapse0x43aa870() {
   return (neuron0x41e4380()*0.233058);
}

double nnTrainedchi110_ECAL::synapse0x43aa8b0() {
   return (neuron0x41e46c0()*-0.0390115);
}

double nnTrainedchi110_ECAL::synapse0x43aa8f0() {
   return (neuron0x41e4a00()*-0.447595);
}

double nnTrainedchi110_ECAL::synapse0x43aac70() {
   return (neuron0x41e5960()*-2.88925);
}

double nnTrainedchi110_ECAL::synapse0x43aacb0() {
   return (neuron0x41e03e0()*-0.228969);
}

double nnTrainedchi110_ECAL::synapse0x43aacf0() {
   return (neuron0x41e0720()*-1.51388);
}

double nnTrainedchi110_ECAL::synapse0x43aad30() {
   return (neuron0x41e0a60()*-0.070625);
}

double nnTrainedchi110_ECAL::synapse0x43aad70() {
   return (neuron0x41e0da0()*0.498552);
}

double nnTrainedchi110_ECAL::synapse0x43aadb0() {
   return (neuron0x41e3d00()*-0.141537);
}

double nnTrainedchi110_ECAL::synapse0x43aadf0() {
   return (neuron0x41e4040()*0.319639);
}

double nnTrainedchi110_ECAL::synapse0x43aae30() {
   return (neuron0x41e4380()*0.342008);
}

double nnTrainedchi110_ECAL::synapse0x43aae70() {
   return (neuron0x41e46c0()*0.0353902);
}

double nnTrainedchi110_ECAL::synapse0x43aaeb0() {
   return (neuron0x41e4a00()*-0.745239);
}

double nnTrainedchi110_ECAL::synapse0x41de350() {
   return (neuron0x41e5960()*1.12386);
}

double nnTrainedchi110_ECAL::synapse0x41de390() {
   return (neuron0x41e03e0()*0.575334);
}

double nnTrainedchi110_ECAL::synapse0x43ab340() {
   return (neuron0x41e0720()*3.84182);
}

double nnTrainedchi110_ECAL::synapse0x43ab380() {
   return (neuron0x41e0a60()*-0.0125251);
}

double nnTrainedchi110_ECAL::synapse0x43ab3c0() {
   return (neuron0x41e0da0()*-0.464904);
}

double nnTrainedchi110_ECAL::synapse0x41e1b40() {
   return (neuron0x41e3d00()*0.125949);
}

double nnTrainedchi110_ECAL::synapse0x43af3f0() {
   return (neuron0x41e4040()*-0.319761);
}

double nnTrainedchi110_ECAL::synapse0x41e58f0() {
   return (neuron0x41e4380()*0.412882);
}

double nnTrainedchi110_ECAL::synapse0x41e00e0() {
   return (neuron0x41e46c0()*0.202248);
}

double nnTrainedchi110_ECAL::synapse0x41e0120() {
   return (neuron0x41e4a00()*-0.263537);
}

double nnTrainedchi110_ECAL::synapse0x41e0280() {
   return (neuron0x41e5960()*-2.34275);
}

double nnTrainedchi110_ECAL::synapse0x43ab8a0() {
   return (neuron0x41e03e0()*-0.54132);
}

double nnTrainedchi110_ECAL::synapse0x43ab8e0() {
   return (neuron0x41e0720()*-0.361512);
}

double nnTrainedchi110_ECAL::synapse0x43ab920() {
   return (neuron0x41e0a60()*0.13329);
}

double nnTrainedchi110_ECAL::synapse0x43ab960() {
   return (neuron0x41e0da0()*-0.406656);
}

double nnTrainedchi110_ECAL::synapse0x43ab9a0() {
   return (neuron0x41e3d00()*-1.47667);
}

double nnTrainedchi110_ECAL::synapse0x43ab9e0() {
   return (neuron0x41e4040()*0.288541);
}

double nnTrainedchi110_ECAL::synapse0x43aba20() {
   return (neuron0x41e4380()*0.294515);
}

double nnTrainedchi110_ECAL::synapse0x43aba60() {
   return (neuron0x41e46c0()*-0.223518);
}

double nnTrainedchi110_ECAL::synapse0x43abaa0() {
   return (neuron0x41e4a00()*-0.854625);
}

double nnTrainedchi110_ECAL::synapse0x43abe20() {
   return (neuron0x43a8c60()*-2.22872);
}

double nnTrainedchi110_ECAL::synapse0x43abe60() {
   return (neuron0x43a90d0()*0.297128);
}

double nnTrainedchi110_ECAL::synapse0x43abea0() {
   return (neuron0x43a96e0()*0.207402);
}

double nnTrainedchi110_ECAL::synapse0x43abee0() {
   return (neuron0x43a9ca0()*-0.0574039);
}

double nnTrainedchi110_ECAL::synapse0x43abf20() {
   return (neuron0x43aa370()*-1.23821);
}

double nnTrainedchi110_ECAL::synapse0x43abf60() {
   return (neuron0x43aa930()*-0.8809);
}

double nnTrainedchi110_ECAL::synapse0x43abfa0() {
   return (neuron0x43aaef0()*1.28736);
}

double nnTrainedchi110_ECAL::synapse0x43abfe0() {
   return (neuron0x43aa0a0()*-0.7612);
}

double nnTrainedchi110_ECAL::synapse0x43ac360() {
   return (neuron0x43a8c60()*-3.92058);
}

double nnTrainedchi110_ECAL::synapse0x43ac3a0() {
   return (neuron0x43a90d0()*-0.58409);
}

double nnTrainedchi110_ECAL::synapse0x43ac3e0() {
   return (neuron0x43a96e0()*-0.289759);
}

double nnTrainedchi110_ECAL::synapse0x43ac420() {
   return (neuron0x43a9ca0()*-3.20901);
}

double nnTrainedchi110_ECAL::synapse0x43ac460() {
   return (neuron0x43aa370()*-0.701111);
}

double nnTrainedchi110_ECAL::synapse0x43ac4a0() {
   return (neuron0x43aa930()*-1.86998);
}

double nnTrainedchi110_ECAL::synapse0x43ac4e0() {
   return (neuron0x43aaef0()*2.80481);
}

double nnTrainedchi110_ECAL::synapse0x43ac520() {
   return (neuron0x43aa0a0()*-1.12821);
}

double nnTrainedchi110_ECAL::synapse0x43ac8a0() {
   return (neuron0x43a8c60()*-0.669685);
}

double nnTrainedchi110_ECAL::synapse0x43ac8e0() {
   return (neuron0x43a90d0()*-1.1753);
}

double nnTrainedchi110_ECAL::synapse0x43ac920() {
   return (neuron0x43a96e0()*-0.305373);
}

double nnTrainedchi110_ECAL::synapse0x43ac960() {
   return (neuron0x43a9ca0()*-0.694396);
}

double nnTrainedchi110_ECAL::synapse0x43ac9a0() {
   return (neuron0x43aa370()*-0.52008);
}

double nnTrainedchi110_ECAL::synapse0x43ac9e0() {
   return (neuron0x43aa930()*-0.333774);
}

double nnTrainedchi110_ECAL::synapse0x43aca20() {
   return (neuron0x43aaef0()*0.995138);
}

double nnTrainedchi110_ECAL::synapse0x43aca60() {
   return (neuron0x43aa0a0()*-0.375183);
}

double nnTrainedchi110_ECAL::synapse0x43acde0() {
   return (neuron0x43a8c60()*-1.30287);
}

double nnTrainedchi110_ECAL::synapse0x43ace20() {
   return (neuron0x43a90d0()*-0.0261338);
}

double nnTrainedchi110_ECAL::synapse0x43ace60() {
   return (neuron0x43a96e0()*-0.0133738);
}

double nnTrainedchi110_ECAL::synapse0x43acea0() {
   return (neuron0x43a9ca0()*-1.28084);
}

double nnTrainedchi110_ECAL::synapse0x43acee0() {
   return (neuron0x43aa370()*-0.808316);
}

double nnTrainedchi110_ECAL::synapse0x43acf20() {
   return (neuron0x43aa930()*-1.69588);
}

double nnTrainedchi110_ECAL::synapse0x43acf60() {
   return (neuron0x43aaef0()*-0.419439);
}

double nnTrainedchi110_ECAL::synapse0x43acfa0() {
   return (neuron0x43aa0a0()*-0.724111);
}

double nnTrainedchi110_ECAL::synapse0x43ad320() {
   return (neuron0x43a8c60()*-0.322755);
}

double nnTrainedchi110_ECAL::synapse0x43ad360() {
   return (neuron0x43a90d0()*-0.150854);
}

double nnTrainedchi110_ECAL::synapse0x43ad3a0() {
   return (neuron0x43a96e0()*0.303706);
}

double nnTrainedchi110_ECAL::synapse0x43ad3e0() {
   return (neuron0x43a9ca0()*-0.239064);
}

double nnTrainedchi110_ECAL::synapse0x43ad420() {
   return (neuron0x43aa370()*0.623695);
}

double nnTrainedchi110_ECAL::synapse0x43ad460() {
   return (neuron0x43aa930()*-0.88888);
}

double nnTrainedchi110_ECAL::synapse0x43ad4a0() {
   return (neuron0x43aaef0()*-0.269052);
}

double nnTrainedchi110_ECAL::synapse0x43ad4e0() {
   return (neuron0x43aa0a0()*-0.852231);
}

double nnTrainedchi110_ECAL::synapse0x43ad860() {
   return (neuron0x43abae0()*1.21966);
}

double nnTrainedchi110_ECAL::synapse0x43ad8a0() {
   return (neuron0x43ac020()*-2.13427);
}

double nnTrainedchi110_ECAL::synapse0x43ad8e0() {
   return (neuron0x43ac560()*0.169725);
}

double nnTrainedchi110_ECAL::synapse0x43ad920() {
   return (neuron0x43acaa0()*-1.9521);
}

double nnTrainedchi110_ECAL::synapse0x43ad960() {
   return (neuron0x43acfe0()*-0.483606);
}

