#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_EXTMUID.h"
#include <cmath>

double nnTrainedchi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6) {
   input0 = (in0 - 1.37773)/6.40608;
   input1 = (in1 - 1.37773)/6.40608;
   input2 = (in2 - 1.39908)/6.45849;
   input3 = (in3 - -1.002)/7.49811e-07;
   input4 = (in4 - 1.39908)/6.45849;
   input5 = (in5 - 1.01807)/0.15657;
   input6 = (in6 - 1.01807)/0.15657;
   switch(index) {
     case 0:
         return neuron0x4cbaa50();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 1.37773)/6.40608;
   input1 = (input[1] - 1.37773)/6.40608;
   input2 = (input[2] - 1.39908)/6.45849;
   input3 = (input[3] - -1.002)/7.49811e-07;
   input4 = (input[4] - 1.39908)/6.45849;
   input5 = (input[5] - 1.01807)/0.15657;
   input6 = (input[6] - 1.01807)/0.15657;
   switch(index) {
     case 0:
         return neuron0x4cbaa50();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x4d5d2a0() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x4d5d5e0() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x4d59a40() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x4d59d80() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x4d5a670() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x4d5a9b0() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x4d5acf0() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x4cc0fa0() {
   double input = 1.28758;
   input += synapse0x4d5d880();
   input += synapse0x4d5d770();
   input += synapse0x4d5a030();
   input += synapse0x4cc1250();
   input += synapse0x4cc1290();
   input += synapse0x4cc12d0();
   input += synapse0x4cc1310();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4cc0fa0() {
   double input = input0x4cc0fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4cc1350() {
   double input = -0.0381286;
   input += synapse0x4cc1690();
   input += synapse0x4cc16d0();
   input += synapse0x4cc1710();
   input += synapse0x4cc1750();
   input += synapse0x4cc1790();
   input += synapse0x4cc17d0();
   input += synapse0x4cc1810();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4cc1350() {
   double input = input0x4cc1350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4cc1850() {
   double input = -0.648491;
   input += synapse0x4cc1b90();
   input += synapse0x4cc1bd0();
   input += synapse0x4cc1c10();
   input += synapse0x4d58670();
   input += synapse0x4d586b0();
   input += synapse0x4d5b030();
   input += synapse0x4d5b070();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4cc1850() {
   double input = input0x4cc1850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4cc1d60() {
   double input = -0.781204;
   input += synapse0x4cba410();
   input += synapse0x4cba450();
   input += synapse0x4cba490();
   input += synapse0x4cba4d0();
   input += synapse0x4cba510();
   input += synapse0x4cba550();
   input += synapse0x4cba590();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4cc1d60() {
   double input = input0x4cc1d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4cba5d0() {
   double input = 0.298557;
   input += synapse0x4cba910();
   input += synapse0x4cba950();
   input += synapse0x4cba990();
   input += synapse0x4cba9d0();
   input += synapse0x4cbaa10();
   input += synapse0x4cc1ef0();
   input += synapse0x4cc1f30();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4cba5d0() {
   double input = input0x4cba5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4cbac60() {
   double input = 0.200814;
   input += synapse0x4cbafa0();
   input += synapse0x4cbafe0();
   input += synapse0x4cbb020();
   input += synapse0x4cbb060();
   input += synapse0x4cbb0a0();
   input += synapse0x4cbb0e0();
   input += synapse0x4cbb120();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4cbac60() {
   double input = input0x4cbac60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4cbb160() {
   double input = 0.306921;
   input += synapse0x4cbb4a0();
   input += synapse0x4cbb4e0();
   input += synapse0x4cbb520();
   input += synapse0x4cbb560();
   input += synapse0x4cbb5a0();
   input += synapse0x4cbb5e0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4cbb160() {
   double input = input0x4cbb160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4cbb620() {
   double input = -0.133051;
   input += synapse0x4cbb960();
   input += synapse0x4cbb9a0();
   input += synapse0x4cbb9e0();
   input += synapse0x4cbba20();
   input += synapse0x4cbba60();
   input += synapse0x4cbbaa0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4cbb620() {
   double input = input0x4cbb620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4cbbae0() {
   double input = -0.302377;
   input += synapse0x4cbbe20();
   input += synapse0x4cbbe60();
   input += synapse0x4cbbea0();
   input += synapse0x4cbbee0();
   input += synapse0x4cbbf20();
   input += synapse0x4cbbf60();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4cbbae0() {
   double input = input0x4cbbae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4cbbfa0() {
   double input = 0.498265;
   input += synapse0x4d584c0();
   input += synapse0x4d58500();
   input += synapse0x4cbc2e0();
   input += synapse0x4cbc320();
   input += synapse0x4cbc360();
   input += synapse0x4d5d8c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4cbbfa0() {
   double input = input0x4cbbfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4cbaa50() {
   double input = -1.49524;
   input += synapse0x4d5d840();
   input += synapse0x4d5ce60();
   input += synapse0x4cc04a0();
   input += synapse0x4d58b70();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4cbaa50() {
   double input = input0x4cbaa50();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x4d5d880() {
   return (neuron0x4d5d2a0()*0.658635);
}

double nnTrainedchi110_EXTMUID::synapse0x4d5d770() {
   return (neuron0x4d5d5e0()*0.203751);
}

double nnTrainedchi110_EXTMUID::synapse0x4d5a030() {
   return (neuron0x4d59a40()*-0.244767);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc1250() {
   return (neuron0x4d59d80()*0.354931);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc1290() {
   return (neuron0x4d5a670()*-0.414234);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc12d0() {
   return (neuron0x4d5a9b0()*-0.123521);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc1310() {
   return (neuron0x4d5acf0()*-0.252663);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc1690() {
   return (neuron0x4d5d2a0()*0.576003);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc16d0() {
   return (neuron0x4d5d5e0()*-0.168032);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc1710() {
   return (neuron0x4d59a40()*0.631935);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc1750() {
   return (neuron0x4d59d80()*-0.229895);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc1790() {
   return (neuron0x4d5a670()*0.0737061);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc17d0() {
   return (neuron0x4d5a9b0()*-0.398263);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc1810() {
   return (neuron0x4d5acf0()*-0.228485);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc1b90() {
   return (neuron0x4d5d2a0()*0.209481);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc1bd0() {
   return (neuron0x4d5d5e0()*-0.411971);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc1c10() {
   return (neuron0x4d59a40()*-0.633291);
}

double nnTrainedchi110_EXTMUID::synapse0x4d58670() {
   return (neuron0x4d59d80()*-0.278886);
}

double nnTrainedchi110_EXTMUID::synapse0x4d586b0() {
   return (neuron0x4d5a670()*-0.542851);
}

double nnTrainedchi110_EXTMUID::synapse0x4d5b030() {
   return (neuron0x4d5a9b0()*0.101097);
}

double nnTrainedchi110_EXTMUID::synapse0x4d5b070() {
   return (neuron0x4d5acf0()*0.191431);
}

double nnTrainedchi110_EXTMUID::synapse0x4cba410() {
   return (neuron0x4d5d2a0()*0.493999);
}

double nnTrainedchi110_EXTMUID::synapse0x4cba450() {
   return (neuron0x4d5d5e0()*0.309515);
}

double nnTrainedchi110_EXTMUID::synapse0x4cba490() {
   return (neuron0x4d59a40()*0.333888);
}

double nnTrainedchi110_EXTMUID::synapse0x4cba4d0() {
   return (neuron0x4d59d80()*-0.229916);
}

double nnTrainedchi110_EXTMUID::synapse0x4cba510() {
   return (neuron0x4d5a670()*0.783832);
}

double nnTrainedchi110_EXTMUID::synapse0x4cba550() {
   return (neuron0x4d5a9b0()*-0.0741843);
}

double nnTrainedchi110_EXTMUID::synapse0x4cba590() {
   return (neuron0x4d5acf0()*0.383297);
}

double nnTrainedchi110_EXTMUID::synapse0x4cba910() {
   return (neuron0x4d5d2a0()*0.443026);
}

double nnTrainedchi110_EXTMUID::synapse0x4cba950() {
   return (neuron0x4d5d5e0()*-0.188071);
}

double nnTrainedchi110_EXTMUID::synapse0x4cba990() {
   return (neuron0x4d59a40()*0.52561);
}

double nnTrainedchi110_EXTMUID::synapse0x4cba9d0() {
   return (neuron0x4d59d80()*0.0542944);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbaa10() {
   return (neuron0x4d5a670()*0.0471028);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc1ef0() {
   return (neuron0x4d5a9b0()*-0.746828);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc1f30() {
   return (neuron0x4d5acf0()*-0.347283);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbafa0() {
   return (neuron0x4d5d2a0()*0.210043);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbafe0() {
   return (neuron0x4d5d5e0()*-0.606558);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbb020() {
   return (neuron0x4d59a40()*0.0965949);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbb060() {
   return (neuron0x4d59d80()*0.373263);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbb0a0() {
   return (neuron0x4d5a670()*-0.0900467);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbb0e0() {
   return (neuron0x4d5a9b0()*-0.308295);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbb120() {
   return (neuron0x4d5acf0()*0.3302);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbb4a0() {
   return (neuron0x4cc0fa0()*0.736877);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbb4e0() {
   return (neuron0x4cc1350()*0.552644);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbb520() {
   return (neuron0x4cc1850()*-0.756934);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbb560() {
   return (neuron0x4cc1d60()*-0.487097);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbb5a0() {
   return (neuron0x4cba5d0()*0.873075);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbb5e0() {
   return (neuron0x4cbac60()*1.3268);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbb960() {
   return (neuron0x4cc0fa0()*1.90687);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbb9a0() {
   return (neuron0x4cc1350()*1.43057);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbb9e0() {
   return (neuron0x4cc1850()*-2.01697);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbba20() {
   return (neuron0x4cc1d60()*-2.01842);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbba60() {
   return (neuron0x4cba5d0()*1.38788);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbbaa0() {
   return (neuron0x4cbac60()*1.48534);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbbe20() {
   return (neuron0x4cc0fa0()*0.679412);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbbe60() {
   return (neuron0x4cc1350()*0.760276);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbbea0() {
   return (neuron0x4cc1850()*-0.666726);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbbee0() {
   return (neuron0x4cc1d60()*-0.482746);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbbf20() {
   return (neuron0x4cba5d0()*0.192325);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbbf60() {
   return (neuron0x4cbac60()*0.924069);
}

double nnTrainedchi110_EXTMUID::synapse0x4d584c0() {
   return (neuron0x4cc0fa0()*2.95591);
}

double nnTrainedchi110_EXTMUID::synapse0x4d58500() {
   return (neuron0x4cc1350()*0.543915);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbc2e0() {
   return (neuron0x4cc1850()*-1.49156);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbc320() {
   return (neuron0x4cc1d60()*-1.44127);
}

double nnTrainedchi110_EXTMUID::synapse0x4cbc360() {
   return (neuron0x4cba5d0()*2.30966);
}

double nnTrainedchi110_EXTMUID::synapse0x4d5d8c0() {
   return (neuron0x4cbac60()*2.45864);
}

double nnTrainedchi110_EXTMUID::synapse0x4d5d840() {
   return (neuron0x4cbb160()*0.960952);
}

double nnTrainedchi110_EXTMUID::synapse0x4d5ce60() {
   return (neuron0x4cbb620()*-1.84972);
}

double nnTrainedchi110_EXTMUID::synapse0x4cc04a0() {
   return (neuron0x4cbbae0()*-0.0102857);
}

double nnTrainedchi110_EXTMUID::synapse0x4d58b70() {
   return (neuron0x4cbbfa0()*3.37135);
}

