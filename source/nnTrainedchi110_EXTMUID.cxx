#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_EXTMUID.h"
#include <cmath>

double nnTrainedchi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6) {
   input0 = (in0 - 0)/1;
   input1 = (in1 - 0)/1;
   input2 = (in2 - 0)/1;
   input3 = (in3 - 0)/1;
   input4 = (in4 - 0)/1;
   input5 = (in5 - 0)/1;
   input6 = (in6 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x392dd90();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   input1 = (input[1] - 0)/1;
   input2 = (input[2] - 0)/1;
   input3 = (input[3] - 0)/1;
   input4 = (input[4] - 0)/1;
   input5 = (input[5] - 0)/1;
   input6 = (input[6] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x392dd90();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x2f8fa00() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x2f8fd40() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x2f90080() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x2f8e510() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x2f8e7c0() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x2f8eb00() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x2f8ee40() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x392c5d0() {
   double input = nan;
   input += synapse0x2f8f940();
   input += synapse0x392c880();
   input += synapse0x392c8c0();
   input += synapse0x392c900();
   input += synapse0x392c940();
   input += synapse0x392c980();
   input += synapse0x392c9c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x392c5d0() {
   double input = input0x392c5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x392ca00() {
   double input = nan;
   input += synapse0x392cd40();
   input += synapse0x392cd80();
   input += synapse0x392cdc0();
   input += synapse0x392ce00();
   input += synapse0x392ce40();
   input += synapse0x392ce80();
   input += synapse0x392cec0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x392ca00() {
   double input = input0x392ca00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x392cf00() {
   double input = nan;
   input += synapse0x392d240();
   input += synapse0x392d280();
   input += synapse0x392d2c0();
   input += synapse0x2f8f980();
   input += synapse0x3930e40();
   input += synapse0x3930e80();
   input += synapse0x2f8f180();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x392cf00() {
   double input = input0x392cf00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x392d410() {
   double input = nan;
   input += synapse0x392d750();
   input += synapse0x392d790();
   input += synapse0x392d7d0();
   input += synapse0x392d810();
   input += synapse0x392d850();
   input += synapse0x392d890();
   input += synapse0x392d8d0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x392d410() {
   double input = input0x392d410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x392d910() {
   double input = nan;
   input += synapse0x392dc50();
   input += synapse0x392dc90();
   input += synapse0x392dcd0();
   input += synapse0x392dd10();
   input += synapse0x392dd50();
   input += synapse0x2f8f1c0();
   input += synapse0x2f8f200();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x392d910() {
   double input = input0x392d910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x392dfa0() {
   double input = nan;
   input += synapse0x2f8f240();
   input += synapse0x392e2e0();
   input += synapse0x392e320();
   input += synapse0x392e360();
   input += synapse0x392e3a0();
   input += synapse0x392d300();
   input += synapse0x392d340();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x392dfa0() {
   double input = input0x392dfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x393e750() {
   double input = nan;
   input += synapse0x393ea00();
   input += synapse0x393ea40();
   input += synapse0x393ea80();
   input += synapse0x393eac0();
   input += synapse0x393eb00();
   input += synapse0x393eb40();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x393e750() {
   double input = input0x393e750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x393eb80() {
   double input = nan;
   input += synapse0x393eec0();
   input += synapse0x393ef00();
   input += synapse0x393ef40();
   input += synapse0x393ef80();
   input += synapse0x393efc0();
   input += synapse0x393f000();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x393eb80() {
   double input = input0x393eb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x393f040() {
   double input = nan;
   input += synapse0x393f380();
   input += synapse0x393f3c0();
   input += synapse0x393f400();
   input += synapse0x393f440();
   input += synapse0x393f480();
   input += synapse0x393f4c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x393f040() {
   double input = input0x393f040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x393f500() {
   double input = nan;
   input += synapse0x3930c90();
   input += synapse0x3930cd0();
   input += synapse0x393f950();
   input += synapse0x393f990();
   input += synapse0x393f9d0();
   input += synapse0x392eeb0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x393f500() {
   double input = input0x393f500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x392dd90() {
   double input = nan;
   input += synapse0x392af00();
   input += synapse0x2f8f280();
   input += synapse0x3931340();
   input += synapse0x392df20();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x392dd90() {
   double input = input0x392dd90();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x2f8f940() {
   return (neuron0x2f8fa00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392c880() {
   return (neuron0x2f8fd40()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392c8c0() {
   return (neuron0x2f90080()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392c900() {
   return (neuron0x2f8e510()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392c940() {
   return (neuron0x2f8e7c0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392c980() {
   return (neuron0x2f8eb00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392c9c0() {
   return (neuron0x2f8ee40()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392cd40() {
   return (neuron0x2f8fa00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392cd80() {
   return (neuron0x2f8fd40()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392cdc0() {
   return (neuron0x2f90080()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392ce00() {
   return (neuron0x2f8e510()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392ce40() {
   return (neuron0x2f8e7c0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392ce80() {
   return (neuron0x2f8eb00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392cec0() {
   return (neuron0x2f8ee40()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392d240() {
   return (neuron0x2f8fa00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392d280() {
   return (neuron0x2f8fd40()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392d2c0() {
   return (neuron0x2f90080()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2f8f980() {
   return (neuron0x2f8e510()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3930e40() {
   return (neuron0x2f8e7c0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3930e80() {
   return (neuron0x2f8eb00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2f8f180() {
   return (neuron0x2f8ee40()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392d750() {
   return (neuron0x2f8fa00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392d790() {
   return (neuron0x2f8fd40()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392d7d0() {
   return (neuron0x2f90080()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392d810() {
   return (neuron0x2f8e510()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392d850() {
   return (neuron0x2f8e7c0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392d890() {
   return (neuron0x2f8eb00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392d8d0() {
   return (neuron0x2f8ee40()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392dc50() {
   return (neuron0x2f8fa00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392dc90() {
   return (neuron0x2f8fd40()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392dcd0() {
   return (neuron0x2f90080()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392dd10() {
   return (neuron0x2f8e510()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392dd50() {
   return (neuron0x2f8e7c0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2f8f1c0() {
   return (neuron0x2f8eb00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2f8f200() {
   return (neuron0x2f8ee40()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2f8f240() {
   return (neuron0x2f8fa00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392e2e0() {
   return (neuron0x2f8fd40()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392e320() {
   return (neuron0x2f90080()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392e360() {
   return (neuron0x2f8e510()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392e3a0() {
   return (neuron0x2f8e7c0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392d300() {
   return (neuron0x2f8eb00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392d340() {
   return (neuron0x2f8ee40()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393ea00() {
   return (neuron0x392c5d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393ea40() {
   return (neuron0x392ca00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393ea80() {
   return (neuron0x392cf00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393eac0() {
   return (neuron0x392d410()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393eb00() {
   return (neuron0x392d910()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393eb40() {
   return (neuron0x392dfa0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393eec0() {
   return (neuron0x392c5d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393ef00() {
   return (neuron0x392ca00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393ef40() {
   return (neuron0x392cf00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393ef80() {
   return (neuron0x392d410()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393efc0() {
   return (neuron0x392d910()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393f000() {
   return (neuron0x392dfa0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393f380() {
   return (neuron0x392c5d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393f3c0() {
   return (neuron0x392ca00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393f400() {
   return (neuron0x392cf00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393f440() {
   return (neuron0x392d410()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393f480() {
   return (neuron0x392d910()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393f4c0() {
   return (neuron0x392dfa0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3930c90() {
   return (neuron0x392c5d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3930cd0() {
   return (neuron0x392ca00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393f950() {
   return (neuron0x392cf00()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393f990() {
   return (neuron0x392d410()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x393f9d0() {
   return (neuron0x392d910()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392eeb0() {
   return (neuron0x392dfa0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392af00() {
   return (neuron0x393e750()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2f8f280() {
   return (neuron0x393eb80()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3931340() {
   return (neuron0x393f040()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x392df20() {
   return (neuron0x393f500()*nan);
}

