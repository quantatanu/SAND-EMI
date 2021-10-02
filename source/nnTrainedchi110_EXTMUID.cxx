#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_EXTMUID.h"
#include <cmath>

double nnTrainedchi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6) {
   input0 = (in0 - 1.17123)/3.98895;
   input1 = (in1 - 1.17123)/3.98895;
   input2 = (in2 - 1.18605)/4.00355;
   input3 = (in3 - -1.002)/1.23778e-07;
   input4 = (in4 - 1.18605)/4.00355;
   input5 = (in5 - 1.01378)/0.133783;
   input6 = (in6 - 1.01378)/0.133783;
   switch(index) {
     case 0:
         return neuron0x4d70bc0();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 1.17123)/3.98895;
   input1 = (input[1] - 1.17123)/3.98895;
   input2 = (input[2] - 1.18605)/4.00355;
   input3 = (input[3] - -1.002)/1.23778e-07;
   input4 = (input[4] - 1.18605)/4.00355;
   input5 = (input[5] - 1.01378)/0.133783;
   input6 = (input[6] - 1.01378)/0.133783;
   switch(index) {
     case 0:
         return neuron0x4d70bc0();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x362abd0() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x362af10() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x4d69a10() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x4d69d50() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x4d6a090() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x4d6ec10() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x4d6ef50() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x4d6f3c0() {
   double input = 0.0861582;
   input += synapse0x3629c70();
   input += synapse0x4d6f670();
   input += synapse0x4d6f6b0();
   input += synapse0x4d6f6f0();
   input += synapse0x4d6f730();
   input += synapse0x4d6f770();
   input += synapse0x4d6f7b0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4d6f3c0() {
   double input = input0x4d6f3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4d6f7f0() {
   double input = -0.248213;
   input += synapse0x4d6fb30();
   input += synapse0x4d6fb70();
   input += synapse0x4d6fbb0();
   input += synapse0x4d6fbf0();
   input += synapse0x4d6fc30();
   input += synapse0x4d6fc70();
   input += synapse0x4d6fcb0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4d6f7f0() {
   double input = input0x4d6f7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4d6fcf0() {
   double input = 0.834191;
   input += synapse0x4d70030();
   input += synapse0x4d70070();
   input += synapse0x4d700b0();
   input += synapse0x362b130();
   input += synapse0x3629740();
   input += synapse0x3629780();
   input += synapse0x4d70200();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4d6fcf0() {
   double input = input0x4d6fcf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4d70240() {
   double input = 4.37016;
   input += synapse0x4d70580();
   input += synapse0x4d705c0();
   input += synapse0x4d70600();
   input += synapse0x4d70640();
   input += synapse0x4d70680();
   input += synapse0x4d706c0();
   input += synapse0x4d70700();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4d70240() {
   double input = input0x4d70240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4d70740() {
   double input = 1.20637;
   input += synapse0x4d70a80();
   input += synapse0x4d70ac0();
   input += synapse0x4d70b00();
   input += synapse0x4d70b40();
   input += synapse0x4d70b80();
   input += synapse0x4d700f0();
   input += synapse0x4d70130();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4d70740() {
   double input = input0x4d70740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4d70dd0() {
   double input = 0.403365;
   input += synapse0x4d71080();
   input += synapse0x4d710c0();
   input += synapse0x4d71100();
   input += synapse0x4d71140();
   input += synapse0x4d71180();
   input += synapse0x4d711c0();
   input += synapse0x4d71200();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4d70dd0() {
   double input = input0x4d70dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4d71240() {
   double input = -1.01684;
   input += synapse0x4d71580();
   input += synapse0x4d715c0();
   input += synapse0x4d71600();
   input += synapse0x4d71640();
   input += synapse0x4d71680();
   input += synapse0x4d716c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4d71240() {
   double input = input0x4d71240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4d71700() {
   double input = -0.383952;
   input += synapse0x4d71a40();
   input += synapse0x4d71a80();
   input += synapse0x4d71ac0();
   input += synapse0x4d71b00();
   input += synapse0x4d71b40();
   input += synapse0x4d71b80();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4d71700() {
   double input = input0x4d71700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4d71bc0() {
   double input = -0.127009;
   input += synapse0x4d71f00();
   input += synapse0x4d71f40();
   input += synapse0x4d71f80();
   input += synapse0x4d71fc0();
   input += synapse0x4d72000();
   input += synapse0x4d72040();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4d71bc0() {
   double input = input0x4d71bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4d72080() {
   double input = 0.651639;
   input += synapse0x3629590();
   input += synapse0x36295d0();
   input += synapse0x4d724d0();
   input += synapse0x4d72510();
   input += synapse0x4d72550();
   input += synapse0x4d6d2a0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4d72080() {
   double input = input0x4d72080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4d70bc0() {
   double input = -1.88195;
   input += synapse0x4d72a30();
   input += synapse0x4d72a70();
   input += synapse0x4d72ab0();
   input += synapse0x4d72af0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4d70bc0() {
   double input = input0x4d70bc0();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x3629c70() {
   return (neuron0x362abd0()*0.697428);
}

double nnTrainedchi110_EXTMUID::synapse0x4d6f670() {
   return (neuron0x362af10()*0.933363);
}

double nnTrainedchi110_EXTMUID::synapse0x4d6f6b0() {
   return (neuron0x4d69a10()*-0.989047);
}

double nnTrainedchi110_EXTMUID::synapse0x4d6f6f0() {
   return (neuron0x4d69d50()*0.447025);
}

double nnTrainedchi110_EXTMUID::synapse0x4d6f730() {
   return (neuron0x4d6a090()*-0.735997);
}

double nnTrainedchi110_EXTMUID::synapse0x4d6f770() {
   return (neuron0x4d6ec10()*-0.229281);
}

double nnTrainedchi110_EXTMUID::synapse0x4d6f7b0() {
   return (neuron0x4d6ef50()*-0.9875);
}

double nnTrainedchi110_EXTMUID::synapse0x4d6fb30() {
   return (neuron0x362abd0()*-0.0473993);
}

double nnTrainedchi110_EXTMUID::synapse0x4d6fb70() {
   return (neuron0x362af10()*0.204356);
}

double nnTrainedchi110_EXTMUID::synapse0x4d6fbb0() {
   return (neuron0x4d69a10()*0.253503);
}

double nnTrainedchi110_EXTMUID::synapse0x4d6fbf0() {
   return (neuron0x4d69d50()*-0.274907);
}

double nnTrainedchi110_EXTMUID::synapse0x4d6fc30() {
   return (neuron0x4d6a090()*0.292909);
}

double nnTrainedchi110_EXTMUID::synapse0x4d6fc70() {
   return (neuron0x4d6ec10()*-0.702454);
}

double nnTrainedchi110_EXTMUID::synapse0x4d6fcb0() {
   return (neuron0x4d6ef50()*-0.364358);
}

double nnTrainedchi110_EXTMUID::synapse0x4d70030() {
   return (neuron0x362abd0()*0.310059);
}

double nnTrainedchi110_EXTMUID::synapse0x4d70070() {
   return (neuron0x362af10()*0.483841);
}

double nnTrainedchi110_EXTMUID::synapse0x4d700b0() {
   return (neuron0x4d69a10()*-0.181143);
}

double nnTrainedchi110_EXTMUID::synapse0x362b130() {
   return (neuron0x4d69d50()*-0.456235);
}

double nnTrainedchi110_EXTMUID::synapse0x3629740() {
   return (neuron0x4d6a090()*0.411043);
}

double nnTrainedchi110_EXTMUID::synapse0x3629780() {
   return (neuron0x4d6ec10()*-0.631179);
}

double nnTrainedchi110_EXTMUID::synapse0x4d70200() {
   return (neuron0x4d6ef50()*-0.291879);
}

double nnTrainedchi110_EXTMUID::synapse0x4d70580() {
   return (neuron0x362abd0()*2.05935);
}

double nnTrainedchi110_EXTMUID::synapse0x4d705c0() {
   return (neuron0x362af10()*1.30699);
}

double nnTrainedchi110_EXTMUID::synapse0x4d70600() {
   return (neuron0x4d69a10()*-1.56354);
}

double nnTrainedchi110_EXTMUID::synapse0x4d70640() {
   return (neuron0x4d69d50()*0.0923468);
}

double nnTrainedchi110_EXTMUID::synapse0x4d70680() {
   return (neuron0x4d6a090()*-1.27728);
}

double nnTrainedchi110_EXTMUID::synapse0x4d706c0() {
   return (neuron0x4d6ec10()*-0.339376);
}

double nnTrainedchi110_EXTMUID::synapse0x4d70700() {
   return (neuron0x4d6ef50()*0.085437);
}

double nnTrainedchi110_EXTMUID::synapse0x4d70a80() {
   return (neuron0x362abd0()*0.319861);
}

double nnTrainedchi110_EXTMUID::synapse0x4d70ac0() {
   return (neuron0x362af10()*0.953028);
}

double nnTrainedchi110_EXTMUID::synapse0x4d70b00() {
   return (neuron0x4d69a10()*0.113056);
}

double nnTrainedchi110_EXTMUID::synapse0x4d70b40() {
   return (neuron0x4d69d50()*-0.460378);
}

double nnTrainedchi110_EXTMUID::synapse0x4d70b80() {
   return (neuron0x4d6a090()*0.539933);
}

double nnTrainedchi110_EXTMUID::synapse0x4d700f0() {
   return (neuron0x4d6ec10()*-1.68414);
}

double nnTrainedchi110_EXTMUID::synapse0x4d70130() {
   return (neuron0x4d6ef50()*-2.56028);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71080() {
   return (neuron0x362abd0()*-6.78263e-05);
}

double nnTrainedchi110_EXTMUID::synapse0x4d710c0() {
   return (neuron0x362af10()*0.0456254);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71100() {
   return (neuron0x4d69a10()*-0.167927);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71140() {
   return (neuron0x4d69d50()*-0.111324);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71180() {
   return (neuron0x4d6a090()*-0.24037);
}

double nnTrainedchi110_EXTMUID::synapse0x4d711c0() {
   return (neuron0x4d6ec10()*-0.551911);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71200() {
   return (neuron0x4d6ef50()*-0.417811);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71580() {
   return (neuron0x4d6f3c0()*2.2499);
}

double nnTrainedchi110_EXTMUID::synapse0x4d715c0() {
   return (neuron0x4d6f7f0()*0.0447415);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71600() {
   return (neuron0x4d6fcf0()*-0.434185);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71640() {
   return (neuron0x4d70240()*4.14879);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71680() {
   return (neuron0x4d70740()*0.26882);
}

double nnTrainedchi110_EXTMUID::synapse0x4d716c0() {
   return (neuron0x4d70dd0()*-1.20137);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71a40() {
   return (neuron0x4d6f3c0()*1.69855);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71a80() {
   return (neuron0x4d6f7f0()*0.231427);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71ac0() {
   return (neuron0x4d6fcf0()*-0.102045);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71b00() {
   return (neuron0x4d70240()*2.47895);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71b40() {
   return (neuron0x4d70740()*0.326626);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71b80() {
   return (neuron0x4d70dd0()*-0.810066);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71f00() {
   return (neuron0x4d6f3c0()*-1.21714);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71f40() {
   return (neuron0x4d6f7f0()*-0.572246);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71f80() {
   return (neuron0x4d6fcf0()*-0.105142);
}

double nnTrainedchi110_EXTMUID::synapse0x4d71fc0() {
   return (neuron0x4d70240()*-1.73887);
}

double nnTrainedchi110_EXTMUID::synapse0x4d72000() {
   return (neuron0x4d70740()*-0.00798134);
}

double nnTrainedchi110_EXTMUID::synapse0x4d72040() {
   return (neuron0x4d70dd0()*-0.0507024);
}

double nnTrainedchi110_EXTMUID::synapse0x3629590() {
   return (neuron0x4d6f3c0()*-0.24036);
}

double nnTrainedchi110_EXTMUID::synapse0x36295d0() {
   return (neuron0x4d6f7f0()*0.73914);
}

double nnTrainedchi110_EXTMUID::synapse0x4d724d0() {
   return (neuron0x4d6fcf0()*0.305836);
}

double nnTrainedchi110_EXTMUID::synapse0x4d72510() {
   return (neuron0x4d70240()*-0.127756);
}

double nnTrainedchi110_EXTMUID::synapse0x4d72550() {
   return (neuron0x4d70740()*0.870103);
}

double nnTrainedchi110_EXTMUID::synapse0x4d6d2a0() {
   return (neuron0x4d70dd0()*0.980034);
}

double nnTrainedchi110_EXTMUID::synapse0x4d72a30() {
   return (neuron0x4d71240()*3.04985);
}

double nnTrainedchi110_EXTMUID::synapse0x4d72a70() {
   return (neuron0x4d71700()*1.54806);
}

double nnTrainedchi110_EXTMUID::synapse0x4d72ab0() {
   return (neuron0x4d71bc0()*-1.83824);
}

double nnTrainedchi110_EXTMUID::synapse0x4d72af0() {
   return (neuron0x4d72080()*-1.60337);
}

