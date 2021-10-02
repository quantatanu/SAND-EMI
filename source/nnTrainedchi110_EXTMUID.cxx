#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_EXTMUID.h"
#include <cmath>

double nnTrainedchi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6) {
   input0 = (in0 - 1.29552)/5.49844;
   input1 = (in1 - 1.29552)/5.49844;
   input2 = (in2 - 1.30906)/5.50652;
   input3 = (in3 - -1.002)/1.92565e-07;
   input4 = (in4 - 1.30906)/5.50652;
   input5 = (in5 - 1.01402)/0.126678;
   input6 = (in6 - 1.01402)/0.126678;
   switch(index) {
     case 0:
         return neuron0x4771890();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 1.29552)/5.49844;
   input1 = (input[1] - 1.29552)/5.49844;
   input2 = (input[2] - 1.30906)/5.50652;
   input3 = (input[3] - -1.002)/1.92565e-07;
   input4 = (input[4] - 1.30906)/5.50652;
   input5 = (input[5] - 1.01402)/0.126678;
   input6 = (input[6] - 1.01402)/0.126678;
   switch(index) {
     case 0:
         return neuron0x4771890();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x47744a0() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x4774130() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x4773f40() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x4783a70() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x4783db0() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x47840f0() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x4784430() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x47848a0() {
   double input = 0.327438;
   input += synapse0x47740f0();
   input += synapse0x47743e0();
   input += synapse0x4784b50();
   input += synapse0x4784b90();
   input += synapse0x4784bd0();
   input += synapse0x4784c10();
   input += synapse0x4784c50();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x47848a0() {
   double input = input0x47848a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4784c90() {
   double input = 0.900784;
   input += synapse0x47708d0();
   input += synapse0x4770910();
   input += synapse0x4770950();
   input += synapse0x4770990();
   input += synapse0x47709d0();
   input += synapse0x4770a10();
   input += synapse0x4770a50();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4784c90() {
   double input = input0x4784c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4770a90() {
   double input = -0.625867;
   input += synapse0x4770dd0();
   input += synapse0x4770e10();
   input += synapse0x4770e50();
   input += synapse0x4774420();
   input += synapse0x4773d90();
   input += synapse0x4784f40();
   input += synapse0x4784f80();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4770a90() {
   double input = input0x4770a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4770fa0() {
   double input = -0.0640427;
   input += synapse0x4771250();
   input += synapse0x4771290();
   input += synapse0x47712d0();
   input += synapse0x4771310();
   input += synapse0x4771350();
   input += synapse0x4771390();
   input += synapse0x47713d0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4770fa0() {
   double input = input0x4770fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4771410() {
   double input = 0.110671;
   input += synapse0x4771750();
   input += synapse0x4771790();
   input += synapse0x47717d0();
   input += synapse0x4771810();
   input += synapse0x4771850();
   input += synapse0x4770e90();
   input += synapse0x4770ed0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4771410() {
   double input = input0x4771410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4771aa0() {
   double input = -0.100931;
   input += synapse0x4771d50();
   input += synapse0x4771d90();
   input += synapse0x4771dd0();
   input += synapse0x4771e10();
   input += synapse0x4771e50();
   input += synapse0x4771e90();
   input += synapse0x4771ed0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4771aa0() {
   double input = input0x4771aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4771f10() {
   double input = -0.197668;
   input += synapse0x4772250();
   input += synapse0x4772290();
   input += synapse0x47722d0();
   input += synapse0x4772310();
   input += synapse0x4772350();
   input += synapse0x4772390();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4771f10() {
   double input = input0x4771f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x47723d0() {
   double input = 0.487055;
   input += synapse0x4772710();
   input += synapse0x4772750();
   input += synapse0x4772790();
   input += synapse0x47727d0();
   input += synapse0x4772810();
   input += synapse0x4772850();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x47723d0() {
   double input = input0x47723d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4772890() {
   double input = 0.472135;
   input += synapse0x4772bd0();
   input += synapse0x4772c10();
   input += synapse0x4772c50();
   input += synapse0x4772c90();
   input += synapse0x4772cd0();
   input += synapse0x4772d10();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4772890() {
   double input = input0x4772890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4772d50() {
   double input = 0.953773;
   input += synapse0x476dae0();
   input += synapse0x476db20();
   input += synapse0x47731a0();
   input += synapse0x47731e0();
   input += synapse0x4773220();
   input += synapse0x4773dd0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4772d50() {
   double input = input0x4772d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4771890() {
   double input = -0.625395;
   input += synapse0x4770460();
   input += synapse0x47751a0();
   input += synapse0x476e190();
   input += synapse0x4771a20();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4771890() {
   double input = input0x4771890();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x47740f0() {
   return (neuron0x47744a0()*-0.70019);
}

double nnTrainedchi110_EXTMUID::synapse0x47743e0() {
   return (neuron0x4774130()*-0.992947);
}

double nnTrainedchi110_EXTMUID::synapse0x4784b50() {
   return (neuron0x4773f40()*-1.18332);
}

double nnTrainedchi110_EXTMUID::synapse0x4784b90() {
   return (neuron0x4783a70()*-0.277948);
}

double nnTrainedchi110_EXTMUID::synapse0x4784bd0() {
   return (neuron0x4783db0()*-1.04609);
}

double nnTrainedchi110_EXTMUID::synapse0x4784c10() {
   return (neuron0x47840f0()*0.164196);
}

double nnTrainedchi110_EXTMUID::synapse0x4784c50() {
   return (neuron0x4784430()*0.2807);
}

double nnTrainedchi110_EXTMUID::synapse0x47708d0() {
   return (neuron0x47744a0()*0.163743);
}

double nnTrainedchi110_EXTMUID::synapse0x4770910() {
   return (neuron0x4774130()*-0.346324);
}

double nnTrainedchi110_EXTMUID::synapse0x4770950() {
   return (neuron0x4773f40()*0.41652);
}

double nnTrainedchi110_EXTMUID::synapse0x4770990() {
   return (neuron0x4783a70()*-0.0134688);
}

double nnTrainedchi110_EXTMUID::synapse0x47709d0() {
   return (neuron0x4783db0()*0.3773);
}

double nnTrainedchi110_EXTMUID::synapse0x4770a10() {
   return (neuron0x47840f0()*-0.0962641);
}

double nnTrainedchi110_EXTMUID::synapse0x4770a50() {
   return (neuron0x4784430()*-0.0455521);
}

double nnTrainedchi110_EXTMUID::synapse0x4770dd0() {
   return (neuron0x47744a0()*0.177504);
}

double nnTrainedchi110_EXTMUID::synapse0x4770e10() {
   return (neuron0x4774130()*0.55846);
}

double nnTrainedchi110_EXTMUID::synapse0x4770e50() {
   return (neuron0x4773f40()*0.20308);
}

double nnTrainedchi110_EXTMUID::synapse0x4774420() {
   return (neuron0x4783a70()*-0.00370944);
}

double nnTrainedchi110_EXTMUID::synapse0x4773d90() {
   return (neuron0x4783db0()*0.00253523);
}

double nnTrainedchi110_EXTMUID::synapse0x4784f40() {
   return (neuron0x47840f0()*-0.117759);
}

double nnTrainedchi110_EXTMUID::synapse0x4784f80() {
   return (neuron0x4784430()*0.257834);
}

double nnTrainedchi110_EXTMUID::synapse0x4771250() {
   return (neuron0x47744a0()*-0.00727126);
}

double nnTrainedchi110_EXTMUID::synapse0x4771290() {
   return (neuron0x4774130()*-0.460571);
}

double nnTrainedchi110_EXTMUID::synapse0x47712d0() {
   return (neuron0x4773f40()*-0.399488);
}

double nnTrainedchi110_EXTMUID::synapse0x4771310() {
   return (neuron0x4783a70()*-0.246837);
}

double nnTrainedchi110_EXTMUID::synapse0x4771350() {
   return (neuron0x4783db0()*-0.427391);
}

double nnTrainedchi110_EXTMUID::synapse0x4771390() {
   return (neuron0x47840f0()*-0.714893);
}

double nnTrainedchi110_EXTMUID::synapse0x47713d0() {
   return (neuron0x4784430()*-0.893);
}

double nnTrainedchi110_EXTMUID::synapse0x4771750() {
   return (neuron0x47744a0()*-0.62002);
}

double nnTrainedchi110_EXTMUID::synapse0x4771790() {
   return (neuron0x4774130()*-0.639719);
}

double nnTrainedchi110_EXTMUID::synapse0x47717d0() {
   return (neuron0x4773f40()*-0.688509);
}

double nnTrainedchi110_EXTMUID::synapse0x4771810() {
   return (neuron0x4783a70()*-0.24123);
}

double nnTrainedchi110_EXTMUID::synapse0x4771850() {
   return (neuron0x4783db0()*-0.645961);
}

double nnTrainedchi110_EXTMUID::synapse0x4770e90() {
   return (neuron0x47840f0()*-0.103198);
}

double nnTrainedchi110_EXTMUID::synapse0x4770ed0() {
   return (neuron0x4784430()*-0.0177702);
}

double nnTrainedchi110_EXTMUID::synapse0x4771d50() {
   return (neuron0x47744a0()*-0.672936);
}

double nnTrainedchi110_EXTMUID::synapse0x4771d90() {
   return (neuron0x4774130()*-0.333338);
}

double nnTrainedchi110_EXTMUID::synapse0x4771dd0() {
   return (neuron0x4773f40()*-0.548828);
}

double nnTrainedchi110_EXTMUID::synapse0x4771e10() {
   return (neuron0x4783a70()*0.443464);
}

double nnTrainedchi110_EXTMUID::synapse0x4771e50() {
   return (neuron0x4783db0()*0.265672);
}

double nnTrainedchi110_EXTMUID::synapse0x4771e90() {
   return (neuron0x47840f0()*-2.52982);
}

double nnTrainedchi110_EXTMUID::synapse0x4771ed0() {
   return (neuron0x4784430()*-2.62875);
}

double nnTrainedchi110_EXTMUID::synapse0x4772250() {
   return (neuron0x47848a0()*0.438778);
}

double nnTrainedchi110_EXTMUID::synapse0x4772290() {
   return (neuron0x4784c90()*-0.578457);
}

double nnTrainedchi110_EXTMUID::synapse0x47722d0() {
   return (neuron0x4770a90()*0.667097);
}

double nnTrainedchi110_EXTMUID::synapse0x4772310() {
   return (neuron0x4770fa0()*0.0804875);
}

double nnTrainedchi110_EXTMUID::synapse0x4772350() {
   return (neuron0x4771410()*-0.469408);
}

double nnTrainedchi110_EXTMUID::synapse0x4772390() {
   return (neuron0x4771aa0()*0.172378);
}

double nnTrainedchi110_EXTMUID::synapse0x4772710() {
   return (neuron0x47848a0()*-0.633471);
}

double nnTrainedchi110_EXTMUID::synapse0x4772750() {
   return (neuron0x4784c90()*1.04013);
}

double nnTrainedchi110_EXTMUID::synapse0x4772790() {
   return (neuron0x4770a90()*-0.870733);
}

double nnTrainedchi110_EXTMUID::synapse0x47727d0() {
   return (neuron0x4770fa0()*-0.676608);
}

double nnTrainedchi110_EXTMUID::synapse0x4772810() {
   return (neuron0x4771410()*1.28212);
}

double nnTrainedchi110_EXTMUID::synapse0x4772850() {
   return (neuron0x4771aa0()*-0.624609);
}

double nnTrainedchi110_EXTMUID::synapse0x4772bd0() {
   return (neuron0x47848a0()*0.0828177);
}

double nnTrainedchi110_EXTMUID::synapse0x4772c10() {
   return (neuron0x4784c90()*-0.147759);
}

double nnTrainedchi110_EXTMUID::synapse0x4772c50() {
   return (neuron0x4770a90()*-0.46567);
}

double nnTrainedchi110_EXTMUID::synapse0x4772c90() {
   return (neuron0x4770fa0()*0.401484);
}

double nnTrainedchi110_EXTMUID::synapse0x4772cd0() {
   return (neuron0x4771410()*0.238365);
}

double nnTrainedchi110_EXTMUID::synapse0x4772d10() {
   return (neuron0x4771aa0()*0.269098);
}

double nnTrainedchi110_EXTMUID::synapse0x476dae0() {
   return (neuron0x47848a0()*-0.363689);
}

double nnTrainedchi110_EXTMUID::synapse0x476db20() {
   return (neuron0x4784c90()*0.96627);
}

double nnTrainedchi110_EXTMUID::synapse0x47731a0() {
   return (neuron0x4770a90()*-1.38839);
}

double nnTrainedchi110_EXTMUID::synapse0x47731e0() {
   return (neuron0x4770fa0()*-1.13637);
}

double nnTrainedchi110_EXTMUID::synapse0x4773220() {
   return (neuron0x4771410()*1.64571);
}

double nnTrainedchi110_EXTMUID::synapse0x4773dd0() {
   return (neuron0x4771aa0()*-0.817957);
}

double nnTrainedchi110_EXTMUID::synapse0x4770460() {
   return (neuron0x4771f10()*-1.28656);
}

double nnTrainedchi110_EXTMUID::synapse0x47751a0() {
   return (neuron0x47723d0()*1.53378);
}

double nnTrainedchi110_EXTMUID::synapse0x476e190() {
   return (neuron0x4772890()*-0.439185);
}

double nnTrainedchi110_EXTMUID::synapse0x4771a20() {
   return (neuron0x4772d50()*2.2659);
}

