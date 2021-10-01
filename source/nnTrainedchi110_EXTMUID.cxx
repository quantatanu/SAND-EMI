#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_EXTMUID.h"
#include <cmath>

double nnTrainedchi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8) {
   input0 = (in0 - 1.17123)/3.98895;
   input1 = (in1 - 1.17123)/3.98895;
   input2 = (in2 - 1.17123)/3.98895;
   input3 = (in3 - 1.18605)/4.00355;
   input4 = (in4 - -1.002)/1.23778e-07;
   input5 = (in5 - 1.18605)/4.00355;
   input6 = (in6 - 1.01378)/0.133783;
   input7 = (in7 - -1.002)/1.23778e-07;
   input8 = (in8 - 1.01378)/0.133783;
   switch(index) {
     case 0:
         return neuron0x4a43060();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 1.17123)/3.98895;
   input1 = (input[1] - 1.17123)/3.98895;
   input2 = (input[2] - 1.17123)/3.98895;
   input3 = (input[3] - 1.18605)/4.00355;
   input4 = (input[4] - -1.002)/1.23778e-07;
   input5 = (input[5] - 1.18605)/4.00355;
   input6 = (input[6] - 1.01378)/0.133783;
   input7 = (input[7] - -1.002)/1.23778e-07;
   input8 = (input[8] - 1.01378)/0.133783;
   switch(index) {
     case 0:
         return neuron0x4a43060();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x4a3d440() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x4a3d780() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x4a399f0() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x4a39d30() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x4a3a070() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x4a3f0c0() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x4a3f400() {
   return input6;
}

double nnTrainedchi110_EXTMUID::neuron0x4a3f740() {
   return input7;
}

double nnTrainedchi110_EXTMUID::neuron0x4a3fa80() {
   return input8;
}

double nnTrainedchi110_EXTMUID::input0x4a3fef0() {
   double input = -1.32245;
   input += synapse0x4a3d9a0();
   input += synapse0x4a3a290();
   input += synapse0x4a401a0();
   input += synapse0x4a401e0();
   input += synapse0x4a40220();
   input += synapse0x4a40260();
   input += synapse0x4a402a0();
   input += synapse0x4a402e0();
   input += synapse0x4a40320();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4a3fef0() {
   double input = input0x4a3fef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4a40360() {
   double input = -1.19157;
   input += synapse0x4a406a0();
   input += synapse0x4a406e0();
   input += synapse0x4a40720();
   input += synapse0x4a40760();
   input += synapse0x4a407a0();
   input += synapse0x4a407e0();
   input += synapse0x4a40820();
   input += synapse0x4a40860();
   input += synapse0x32f9740();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4a40360() {
   double input = input0x4a40360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4a409b0() {
   double input = -1.65693;
   input += synapse0x4a40cf0();
   input += synapse0x4a40d30();
   input += synapse0x4a40d70();
   input += synapse0x4a40db0();
   input += synapse0x4a40df0();
   input += synapse0x4a40e30();
   input += synapse0x4a40e70();
   input += synapse0x4a40eb0();
   input += synapse0x4a40ef0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4a409b0() {
   double input = input0x4a409b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4a40f30() {
   double input = 2.99964;
   input += synapse0x4a41270();
   input += synapse0x4a412b0();
   input += synapse0x4a412f0();
   input += synapse0x4a41330();
   input += synapse0x4a41370();
   input += synapse0x4a413b0();
   input += synapse0x32f9780();
   input += synapse0x4a408a0();
   input += synapse0x4a408e0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4a40f30() {
   double input = input0x4a40f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4a41600() {
   double input = 1.44562;
   input += synapse0x4a418b0();
   input += synapse0x4a418f0();
   input += synapse0x4a41930();
   input += synapse0x4a41970();
   input += synapse0x4a419b0();
   input += synapse0x4a419f0();
   input += synapse0x4a41a30();
   input += synapse0x4a41a70();
   input += synapse0x4a41ab0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4a41600() {
   double input = input0x4a41600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4a41af0() {
   double input = 2.01801;
   input += synapse0x4a41e30();
   input += synapse0x4a41e70();
   input += synapse0x4a41eb0();
   input += synapse0x4a41ef0();
   input += synapse0x4a41f30();
   input += synapse0x4a41f70();
   input += synapse0x4a41fb0();
   input += synapse0x4a41ff0();
   input += synapse0x4a42030();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4a41af0() {
   double input = input0x4a41af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4a42070() {
   double input = -0.776756;
   input += synapse0x4a423b0();
   input += synapse0x4a423f0();
   input += synapse0x4a42430();
   input += synapse0x4a42470();
   input += synapse0x4a424b0();
   input += synapse0x4a424f0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4a42070() {
   double input = input0x4a42070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4a42530() {
   double input = -0.626848;
   input += synapse0x32f9590();
   input += synapse0x32f95d0();
   input += synapse0x4a42980();
   input += synapse0x4a429c0();
   input += synapse0x4a42a00();
   input += synapse0x32fab00();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4a42530() {
   double input = input0x4a42530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4a413f0() {
   double input = 0.111118;
   input += synapse0x4a42ee0();
   input += synapse0x4a42f20();
   input += synapse0x4a42f60();
   input += synapse0x4a42fa0();
   input += synapse0x4a42fe0();
   input += synapse0x4a43020();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4a413f0() {
   double input = input0x4a413f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4a43060() {
   double input = -2.20818;
   input += synapse0x4a433a0();
   input += synapse0x4a433e0();
   input += synapse0x4a43420();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4a43060() {
   double input = input0x4a43060();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x4a3d9a0() {
   return (neuron0x4a3d440()*-0.523601);
}

double nnTrainedchi110_EXTMUID::synapse0x4a3a290() {
   return (neuron0x4a3d780()*-0.123924);
}

double nnTrainedchi110_EXTMUID::synapse0x4a401a0() {
   return (neuron0x4a399f0()*-0.255485);
}

double nnTrainedchi110_EXTMUID::synapse0x4a401e0() {
   return (neuron0x4a39d30()*0.382704);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40220() {
   return (neuron0x4a3a070()*-0.395561);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40260() {
   return (neuron0x4a3f0c0()*0.40319);
}

double nnTrainedchi110_EXTMUID::synapse0x4a402a0() {
   return (neuron0x4a3f400()*-0.0348892);
}

double nnTrainedchi110_EXTMUID::synapse0x4a402e0() {
   return (neuron0x4a3f740()*-0.187433);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40320() {
   return (neuron0x4a3fa80()*0.224998);
}

double nnTrainedchi110_EXTMUID::synapse0x4a406a0() {
   return (neuron0x4a3d440()*-0.648581);
}

double nnTrainedchi110_EXTMUID::synapse0x4a406e0() {
   return (neuron0x4a3d780()*-0.614975);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40720() {
   return (neuron0x4a399f0()*-0.686033);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40760() {
   return (neuron0x4a39d30()*0.718904);
}

double nnTrainedchi110_EXTMUID::synapse0x4a407a0() {
   return (neuron0x4a3a070()*0.465204);
}

double nnTrainedchi110_EXTMUID::synapse0x4a407e0() {
   return (neuron0x4a3f0c0()*0.76704);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40820() {
   return (neuron0x4a3f400()*-0.172674);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40860() {
   return (neuron0x4a3f740()*-0.468078);
}

double nnTrainedchi110_EXTMUID::synapse0x32f9740() {
   return (neuron0x4a3fa80()*0.377617);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40cf0() {
   return (neuron0x4a3d440()*1.19165);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40d30() {
   return (neuron0x4a3d780()*0.399585);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40d70() {
   return (neuron0x4a399f0()*0.998533);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40db0() {
   return (neuron0x4a39d30()*0.151237);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40df0() {
   return (neuron0x4a3a070()*0.43396);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40e30() {
   return (neuron0x4a3f0c0()*0.31395);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40e70() {
   return (neuron0x4a3f400()*0.707665);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40eb0() {
   return (neuron0x4a3f740()*0.216405);
}

double nnTrainedchi110_EXTMUID::synapse0x4a40ef0() {
   return (neuron0x4a3fa80()*0.835136);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41270() {
   return (neuron0x4a3d440()*-0.00147173);
}

double nnTrainedchi110_EXTMUID::synapse0x4a412b0() {
   return (neuron0x4a3d780()*0.249092);
}

double nnTrainedchi110_EXTMUID::synapse0x4a412f0() {
   return (neuron0x4a399f0()*0.193703);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41330() {
   return (neuron0x4a39d30()*-0.0720166);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41370() {
   return (neuron0x4a3a070()*0.170449);
}

double nnTrainedchi110_EXTMUID::synapse0x4a413b0() {
   return (neuron0x4a3f0c0()*-0.415285);
}

double nnTrainedchi110_EXTMUID::synapse0x32f9780() {
   return (neuron0x4a3f400()*-0.195862);
}

double nnTrainedchi110_EXTMUID::synapse0x4a408a0() {
   return (neuron0x4a3f740()*0.196135);
}

double nnTrainedchi110_EXTMUID::synapse0x4a408e0() {
   return (neuron0x4a3fa80()*-0.152329);
}

double nnTrainedchi110_EXTMUID::synapse0x4a418b0() {
   return (neuron0x4a3d440()*-0.569013);
}

double nnTrainedchi110_EXTMUID::synapse0x4a418f0() {
   return (neuron0x4a3d780()*-0.533423);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41930() {
   return (neuron0x4a399f0()*-0.678029);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41970() {
   return (neuron0x4a39d30()*-0.742468);
}

double nnTrainedchi110_EXTMUID::synapse0x4a419b0() {
   return (neuron0x4a3a070()*-0.404858);
}

double nnTrainedchi110_EXTMUID::synapse0x4a419f0() {
   return (neuron0x4a3f0c0()*-0.613671);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41a30() {
   return (neuron0x4a3f400()*0.266809);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41a70() {
   return (neuron0x4a3f740()*-0.256841);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41ab0() {
   return (neuron0x4a3fa80()*-0.097989);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41e30() {
   return (neuron0x4a3d440()*-0.496745);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41e70() {
   return (neuron0x4a3d780()*0.0248767);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41eb0() {
   return (neuron0x4a399f0()*-0.407719);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41ef0() {
   return (neuron0x4a39d30()*0.319669);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41f30() {
   return (neuron0x4a3a070()*-0.155015);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41f70() {
   return (neuron0x4a3f0c0()*-0.199999);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41fb0() {
   return (neuron0x4a3f400()*0.398184);
}

double nnTrainedchi110_EXTMUID::synapse0x4a41ff0() {
   return (neuron0x4a3f740()*-0.249663);
}

double nnTrainedchi110_EXTMUID::synapse0x4a42030() {
   return (neuron0x4a3fa80()*0.0552014);
}

double nnTrainedchi110_EXTMUID::synapse0x4a423b0() {
   return (neuron0x4a3fef0()*-0.027809);
}

double nnTrainedchi110_EXTMUID::synapse0x4a423f0() {
   return (neuron0x4a40360()*-0.472565);
}

double nnTrainedchi110_EXTMUID::synapse0x4a42430() {
   return (neuron0x4a409b0()*-0.318353);
}

double nnTrainedchi110_EXTMUID::synapse0x4a42470() {
   return (neuron0x4a40f30()*-1.4531);
}

double nnTrainedchi110_EXTMUID::synapse0x4a424b0() {
   return (neuron0x4a41600()*-0.947957);
}

double nnTrainedchi110_EXTMUID::synapse0x4a424f0() {
   return (neuron0x4a41af0()*-0.857354);
}

double nnTrainedchi110_EXTMUID::synapse0x32f9590() {
   return (neuron0x4a3fef0()*0.668506);
}

double nnTrainedchi110_EXTMUID::synapse0x32f95d0() {
   return (neuron0x4a40360()*-0.0381395);
}

double nnTrainedchi110_EXTMUID::synapse0x4a42980() {
   return (neuron0x4a409b0()*-0.971163);
}

double nnTrainedchi110_EXTMUID::synapse0x4a429c0() {
   return (neuron0x4a40f30()*-0.764418);
}

double nnTrainedchi110_EXTMUID::synapse0x4a42a00() {
   return (neuron0x4a41600()*-1.16153);
}

double nnTrainedchi110_EXTMUID::synapse0x32fab00() {
   return (neuron0x4a41af0()*-0.1557);
}

double nnTrainedchi110_EXTMUID::synapse0x4a42ee0() {
   return (neuron0x4a3fef0()*-2.03888);
}

double nnTrainedchi110_EXTMUID::synapse0x4a42f20() {
   return (neuron0x4a40360()*-2.76413);
}

double nnTrainedchi110_EXTMUID::synapse0x4a42f60() {
   return (neuron0x4a409b0()*2.69875);
}

double nnTrainedchi110_EXTMUID::synapse0x4a42fa0() {
   return (neuron0x4a40f30()*3.47329);
}

double nnTrainedchi110_EXTMUID::synapse0x4a42fe0() {
   return (neuron0x4a41600()*2.70682);
}

double nnTrainedchi110_EXTMUID::synapse0x4a43020() {
   return (neuron0x4a41af0()*-0.832996);
}

double nnTrainedchi110_EXTMUID::synapse0x4a433a0() {
   return (neuron0x4a42070()*-0.233726);
}

double nnTrainedchi110_EXTMUID::synapse0x4a433e0() {
   return (neuron0x4a42530()*-1.242);
}

double nnTrainedchi110_EXTMUID::synapse0x4a43420() {
   return (neuron0x4a413f0()*3.35172);
}

