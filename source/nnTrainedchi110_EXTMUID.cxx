#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_EXTMUID.h"
#include <cmath>

double nnTrainedchi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6) {
   input0 = (in0 - 1.40272)/6.32486;
   input1 = (in1 - 1.40272)/6.32486;
   input2 = (in2 - 1.41482)/6.32871;
   input3 = (in3 - -1.002)/2.50676e-07;
   input4 = (in4 - 1.41482)/6.32871;
   input5 = (in5 - 1.01676)/0.131598;
   input6 = (in6 - 1.01676)/0.131598;
   switch(index) {
     case 0:
         return neuron0x2de9570();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 1.40272)/6.32486;
   input1 = (input[1] - 1.40272)/6.32486;
   input2 = (input[2] - 1.41482)/6.32871;
   input3 = (input[3] - -1.002)/2.50676e-07;
   input4 = (input[4] - 1.41482)/6.32871;
   input5 = (input[5] - 1.01676)/0.131598;
   input6 = (input[6] - 1.01676)/0.131598;
   switch(index) {
     case 0:
         return neuron0x2de9570();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x2d20cd0() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x2d21010() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x2d1d470() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x2d1d7b0() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x2d1e0a0() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x2d1e3e0() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x2d1e720() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x2defac0() {
   double input = -0.255146;
   input += synapse0x2d212b0();
   input += synapse0x2d211a0();
   input += synapse0x2d1da60();
   input += synapse0x2defd70();
   input += synapse0x2defdb0();
   input += synapse0x2defdf0();
   input += synapse0x2defe30();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2defac0() {
   double input = input0x2defac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2defe70() {
   double input = -0.180621;
   input += synapse0x2df01b0();
   input += synapse0x2df01f0();
   input += synapse0x2df0230();
   input += synapse0x2df0270();
   input += synapse0x2df02b0();
   input += synapse0x2df02f0();
   input += synapse0x2df0330();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2defe70() {
   double input = input0x2defe70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2df0370() {
   double input = -0.572961;
   input += synapse0x2df06b0();
   input += synapse0x2df06f0();
   input += synapse0x2df0730();
   input += synapse0x2d1c0a0();
   input += synapse0x2d1c0e0();
   input += synapse0x2d1ea60();
   input += synapse0x2d1eaa0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2df0370() {
   double input = input0x2df0370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2df0880() {
   double input = 0.184782;
   input += synapse0x2de8f30();
   input += synapse0x2de8f70();
   input += synapse0x2de8fb0();
   input += synapse0x2de8ff0();
   input += synapse0x2de9030();
   input += synapse0x2de9070();
   input += synapse0x2de90b0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2df0880() {
   double input = input0x2df0880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2de90f0() {
   double input = -0.904717;
   input += synapse0x2de9430();
   input += synapse0x2de9470();
   input += synapse0x2de94b0();
   input += synapse0x2de94f0();
   input += synapse0x2de9530();
   input += synapse0x2df0a10();
   input += synapse0x2df0a50();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2de90f0() {
   double input = input0x2de90f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2de9780() {
   double input = 0.135942;
   input += synapse0x2de9ac0();
   input += synapse0x2de9b00();
   input += synapse0x2de9b40();
   input += synapse0x2de9b80();
   input += synapse0x2de9bc0();
   input += synapse0x2de9c00();
   input += synapse0x2de9c40();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2de9780() {
   double input = input0x2de9780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2de9c80() {
   double input = -0.267706;
   input += synapse0x2de9fc0();
   input += synapse0x2dea000();
   input += synapse0x2dea040();
   input += synapse0x2dea080();
   input += synapse0x2dea0c0();
   input += synapse0x2dea100();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2de9c80() {
   double input = input0x2de9c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2dea140() {
   double input = -0.324451;
   input += synapse0x2dea480();
   input += synapse0x2dea4c0();
   input += synapse0x2dea500();
   input += synapse0x2dea540();
   input += synapse0x2dea580();
   input += synapse0x2dea5c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2dea140() {
   double input = input0x2dea140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2dea600() {
   double input = 0.0111185;
   input += synapse0x2dea940();
   input += synapse0x2dea980();
   input += synapse0x2dea9c0();
   input += synapse0x2deaa00();
   input += synapse0x2deaa40();
   input += synapse0x2deaa80();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2dea600() {
   double input = input0x2dea600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2deaac0() {
   double input = -0.960788;
   input += synapse0x2d1bef0();
   input += synapse0x2d1bf30();
   input += synapse0x2deae00();
   input += synapse0x2deae40();
   input += synapse0x2deae80();
   input += synapse0x2d212f0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2deaac0() {
   double input = input0x2deaac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2de9570() {
   double input = 0.744377;
   input += synapse0x2d21270();
   input += synapse0x2d20890();
   input += synapse0x2deefc0();
   input += synapse0x2d1c5a0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2de9570() {
   double input = input0x2de9570();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x2d212b0() {
   return (neuron0x2d20cd0()*-0.756042);
}

double nnTrainedchi110_EXTMUID::synapse0x2d211a0() {
   return (neuron0x2d21010()*-0.48128);
}

double nnTrainedchi110_EXTMUID::synapse0x2d1da60() {
   return (neuron0x2d1d470()*-1.75508);
}

double nnTrainedchi110_EXTMUID::synapse0x2defd70() {
   return (neuron0x2d1d7b0()*-0.138113);
}

double nnTrainedchi110_EXTMUID::synapse0x2defdb0() {
   return (neuron0x2d1e0a0()*-1.68938);
}

double nnTrainedchi110_EXTMUID::synapse0x2defdf0() {
   return (neuron0x2d1e3e0()*-0.075271);
}

double nnTrainedchi110_EXTMUID::synapse0x2defe30() {
   return (neuron0x2d1e720()*-0.0892934);
}

double nnTrainedchi110_EXTMUID::synapse0x2df01b0() {
   return (neuron0x2d20cd0()*-1.76889);
}

double nnTrainedchi110_EXTMUID::synapse0x2df01f0() {
   return (neuron0x2d21010()*-2.04533);
}

double nnTrainedchi110_EXTMUID::synapse0x2df0230() {
   return (neuron0x2d1d470()*-1.7727);
}

double nnTrainedchi110_EXTMUID::synapse0x2df0270() {
   return (neuron0x2d1d7b0()*0.239108);
}

double nnTrainedchi110_EXTMUID::synapse0x2df02b0() {
   return (neuron0x2d1e0a0()*-1.57439);
}

double nnTrainedchi110_EXTMUID::synapse0x2df02f0() {
   return (neuron0x2d1e3e0()*0.269971);
}

double nnTrainedchi110_EXTMUID::synapse0x2df0330() {
   return (neuron0x2d1e720()*0.0881868);
}

double nnTrainedchi110_EXTMUID::synapse0x2df06b0() {
   return (neuron0x2d20cd0()*-1.78019);
}

double nnTrainedchi110_EXTMUID::synapse0x2df06f0() {
   return (neuron0x2d21010()*-1.76513);
}

double nnTrainedchi110_EXTMUID::synapse0x2df0730() {
   return (neuron0x2d1d470()*-1.38101);
}

double nnTrainedchi110_EXTMUID::synapse0x2d1c0a0() {
   return (neuron0x2d1d7b0()*0.422561);
}

double nnTrainedchi110_EXTMUID::synapse0x2d1c0e0() {
   return (neuron0x2d1e0a0()*-1.98438);
}

double nnTrainedchi110_EXTMUID::synapse0x2d1ea60() {
   return (neuron0x2d1e3e0()*0.745347);
}

double nnTrainedchi110_EXTMUID::synapse0x2d1eaa0() {
   return (neuron0x2d1e720()*1.15105);
}

double nnTrainedchi110_EXTMUID::synapse0x2de8f30() {
   return (neuron0x2d20cd0()*-0.510403);
}

double nnTrainedchi110_EXTMUID::synapse0x2de8f70() {
   return (neuron0x2d21010()*0.296762);
}

double nnTrainedchi110_EXTMUID::synapse0x2de8fb0() {
   return (neuron0x2d1d470()*-0.33118);
}

double nnTrainedchi110_EXTMUID::synapse0x2de8ff0() {
   return (neuron0x2d1d7b0()*-0.213305);
}

double nnTrainedchi110_EXTMUID::synapse0x2de9030() {
   return (neuron0x2d1e0a0()*0.338807);
}

double nnTrainedchi110_EXTMUID::synapse0x2de9070() {
   return (neuron0x2d1e3e0()*0.36113);
}

double nnTrainedchi110_EXTMUID::synapse0x2de90b0() {
   return (neuron0x2d1e720()*0.109087);
}

double nnTrainedchi110_EXTMUID::synapse0x2de9430() {
   return (neuron0x2d20cd0()*0.188681);
}

double nnTrainedchi110_EXTMUID::synapse0x2de9470() {
   return (neuron0x2d21010()*-0.460291);
}

double nnTrainedchi110_EXTMUID::synapse0x2de94b0() {
   return (neuron0x2d1d470()*-0.132771);
}

double nnTrainedchi110_EXTMUID::synapse0x2de94f0() {
   return (neuron0x2d1d7b0()*-0.395369);
}

double nnTrainedchi110_EXTMUID::synapse0x2de9530() {
   return (neuron0x2d1e0a0()*0.366612);
}

double nnTrainedchi110_EXTMUID::synapse0x2df0a10() {
   return (neuron0x2d1e3e0()*-0.219315);
}

double nnTrainedchi110_EXTMUID::synapse0x2df0a50() {
   return (neuron0x2d1e720()*0.194631);
}

double nnTrainedchi110_EXTMUID::synapse0x2de9ac0() {
   return (neuron0x2d20cd0()*-0.973894);
}

double nnTrainedchi110_EXTMUID::synapse0x2de9b00() {
   return (neuron0x2d21010()*-0.758202);
}

double nnTrainedchi110_EXTMUID::synapse0x2de9b40() {
   return (neuron0x2d1d470()*-0.852754);
}

double nnTrainedchi110_EXTMUID::synapse0x2de9b80() {
   return (neuron0x2d1d7b0()*0.412614);
}

double nnTrainedchi110_EXTMUID::synapse0x2de9bc0() {
   return (neuron0x2d1e0a0()*-0.915286);
}

double nnTrainedchi110_EXTMUID::synapse0x2de9c00() {
   return (neuron0x2d1e3e0()*-1.39947);
}

double nnTrainedchi110_EXTMUID::synapse0x2de9c40() {
   return (neuron0x2d1e720()*-1.60937);
}

double nnTrainedchi110_EXTMUID::synapse0x2de9fc0() {
   return (neuron0x2defac0()*1.37572);
}

double nnTrainedchi110_EXTMUID::synapse0x2dea000() {
   return (neuron0x2defe70()*-1.11368);
}

double nnTrainedchi110_EXTMUID::synapse0x2dea040() {
   return (neuron0x2df0370()*0.296743);
}

double nnTrainedchi110_EXTMUID::synapse0x2dea080() {
   return (neuron0x2df0880()*0.206858);
}

double nnTrainedchi110_EXTMUID::synapse0x2dea0c0() {
   return (neuron0x2de90f0()*-0.548871);
}

double nnTrainedchi110_EXTMUID::synapse0x2dea100() {
   return (neuron0x2de9780()*-1.28183);
}

double nnTrainedchi110_EXTMUID::synapse0x2dea480() {
   return (neuron0x2defac0()*0.161294);
}

double nnTrainedchi110_EXTMUID::synapse0x2dea4c0() {
   return (neuron0x2defe70()*-1.93671);
}

double nnTrainedchi110_EXTMUID::synapse0x2dea500() {
   return (neuron0x2df0370()*0.673539);
}

double nnTrainedchi110_EXTMUID::synapse0x2dea540() {
   return (neuron0x2df0880()*0.634757);
}

double nnTrainedchi110_EXTMUID::synapse0x2dea580() {
   return (neuron0x2de90f0()*0.542878);
}

double nnTrainedchi110_EXTMUID::synapse0x2dea5c0() {
   return (neuron0x2de9780()*-1.01876);
}

double nnTrainedchi110_EXTMUID::synapse0x2dea940() {
   return (neuron0x2defac0()*-0.706145);
}

double nnTrainedchi110_EXTMUID::synapse0x2dea980() {
   return (neuron0x2defe70()*-1.78682);
}

double nnTrainedchi110_EXTMUID::synapse0x2dea9c0() {
   return (neuron0x2df0370()*0.954387);
}

double nnTrainedchi110_EXTMUID::synapse0x2deaa00() {
   return (neuron0x2df0880()*1.39616);
}

double nnTrainedchi110_EXTMUID::synapse0x2deaa40() {
   return (neuron0x2de90f0()*1.20931);
}

double nnTrainedchi110_EXTMUID::synapse0x2deaa80() {
   return (neuron0x2de9780()*-1.71538);
}

double nnTrainedchi110_EXTMUID::synapse0x2d1bef0() {
   return (neuron0x2defac0()*-2.90821);
}

double nnTrainedchi110_EXTMUID::synapse0x2d1bf30() {
   return (neuron0x2defe70()*0.126175);
}

double nnTrainedchi110_EXTMUID::synapse0x2deae00() {
   return (neuron0x2df0370()*0.575473);
}

double nnTrainedchi110_EXTMUID::synapse0x2deae40() {
   return (neuron0x2df0880()*-0.103735);
}

double nnTrainedchi110_EXTMUID::synapse0x2deae80() {
   return (neuron0x2de90f0()*2.36454);
}

double nnTrainedchi110_EXTMUID::synapse0x2d212f0() {
   return (neuron0x2de9780()*0.0361373);
}

double nnTrainedchi110_EXTMUID::synapse0x2d21270() {
   return (neuron0x2de9c80()*1.64126);
}

double nnTrainedchi110_EXTMUID::synapse0x2d20890() {
   return (neuron0x2dea140()*0.947027);
}

double nnTrainedchi110_EXTMUID::synapse0x2deefc0() {
   return (neuron0x2dea600()*0.325598);
}

double nnTrainedchi110_EXTMUID::synapse0x2d1c5a0() {
   return (neuron0x2deaac0()*-2.78321);
}

