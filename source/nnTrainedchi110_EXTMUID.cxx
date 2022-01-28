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
         return neuron0x2ff1da0();
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
         return neuron0x2ff1da0();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x2653a60() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x2653da0() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x26540e0() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x2652570() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x2652820() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x2652b60() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x2652ea0() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x2ff05e0() {
   double input = nan;
   input += synapse0x26539a0();
   input += synapse0x2ff0890();
   input += synapse0x2ff08d0();
   input += synapse0x2ff0910();
   input += synapse0x2ff0950();
   input += synapse0x2ff0990();
   input += synapse0x2ff09d0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2ff05e0() {
   double input = input0x2ff05e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2ff0a10() {
   double input = nan;
   input += synapse0x2ff0d50();
   input += synapse0x2ff0d90();
   input += synapse0x2ff0dd0();
   input += synapse0x2ff0e10();
   input += synapse0x2ff0e50();
   input += synapse0x2ff0e90();
   input += synapse0x2ff0ed0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2ff0a10() {
   double input = input0x2ff0a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2ff0f10() {
   double input = nan;
   input += synapse0x2ff1250();
   input += synapse0x2ff1290();
   input += synapse0x2ff12d0();
   input += synapse0x26539e0();
   input += synapse0x2ff4c40();
   input += synapse0x2ff4c80();
   input += synapse0x26531e0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2ff0f10() {
   double input = input0x2ff0f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2ff1420() {
   double input = nan;
   input += synapse0x2ff1760();
   input += synapse0x2ff17a0();
   input += synapse0x2ff17e0();
   input += synapse0x2ff1820();
   input += synapse0x2ff1860();
   input += synapse0x2ff18a0();
   input += synapse0x2ff18e0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2ff1420() {
   double input = input0x2ff1420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2ff1920() {
   double input = nan;
   input += synapse0x2ff1c60();
   input += synapse0x2ff1ca0();
   input += synapse0x2ff1ce0();
   input += synapse0x2ff1d20();
   input += synapse0x2ff1d60();
   input += synapse0x2653220();
   input += synapse0x2653260();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2ff1920() {
   double input = input0x2ff1920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2ff1fb0() {
   double input = nan;
   input += synapse0x26532a0();
   input += synapse0x2ff22f0();
   input += synapse0x2ff2330();
   input += synapse0x2ff2370();
   input += synapse0x2ff23b0();
   input += synapse0x2ff1310();
   input += synapse0x2ff1350();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2ff1fb0() {
   double input = input0x2ff1fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x30026f0() {
   double input = nan;
   input += synapse0x30029a0();
   input += synapse0x30029e0();
   input += synapse0x3002a20();
   input += synapse0x3002a60();
   input += synapse0x3002aa0();
   input += synapse0x3002ae0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x30026f0() {
   double input = input0x30026f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3002b20() {
   double input = nan;
   input += synapse0x3002e60();
   input += synapse0x3002ea0();
   input += synapse0x3002ee0();
   input += synapse0x3002f20();
   input += synapse0x3002f60();
   input += synapse0x3002fa0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3002b20() {
   double input = input0x3002b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3002fe0() {
   double input = nan;
   input += synapse0x3003320();
   input += synapse0x3003360();
   input += synapse0x30033a0();
   input += synapse0x30033e0();
   input += synapse0x3003420();
   input += synapse0x3003460();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3002fe0() {
   double input = input0x3002fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x30034a0() {
   double input = nan;
   input += synapse0x2ff4a90();
   input += synapse0x2ff4ad0();
   input += synapse0x30038f0();
   input += synapse0x3003930();
   input += synapse0x3003970();
   input += synapse0x2ff2ec0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x30034a0() {
   double input = input0x30034a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2ff1da0() {
   double input = nan;
   input += synapse0x2feef10();
   input += synapse0x26532e0();
   input += synapse0x2ff5140();
   input += synapse0x2ff1f30();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2ff1da0() {
   double input = input0x2ff1da0();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x26539a0() {
   return (neuron0x2653a60()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff0890() {
   return (neuron0x2653da0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff08d0() {
   return (neuron0x26540e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff0910() {
   return (neuron0x2652570()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff0950() {
   return (neuron0x2652820()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff0990() {
   return (neuron0x2652b60()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff09d0() {
   return (neuron0x2652ea0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff0d50() {
   return (neuron0x2653a60()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff0d90() {
   return (neuron0x2653da0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff0dd0() {
   return (neuron0x26540e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff0e10() {
   return (neuron0x2652570()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff0e50() {
   return (neuron0x2652820()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff0e90() {
   return (neuron0x2652b60()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff0ed0() {
   return (neuron0x2652ea0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff1250() {
   return (neuron0x2653a60()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff1290() {
   return (neuron0x2653da0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff12d0() {
   return (neuron0x26540e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x26539e0() {
   return (neuron0x2652570()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff4c40() {
   return (neuron0x2652820()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff4c80() {
   return (neuron0x2652b60()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x26531e0() {
   return (neuron0x2652ea0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff1760() {
   return (neuron0x2653a60()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff17a0() {
   return (neuron0x2653da0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff17e0() {
   return (neuron0x26540e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff1820() {
   return (neuron0x2652570()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff1860() {
   return (neuron0x2652820()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff18a0() {
   return (neuron0x2652b60()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff18e0() {
   return (neuron0x2652ea0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff1c60() {
   return (neuron0x2653a60()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff1ca0() {
   return (neuron0x2653da0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff1ce0() {
   return (neuron0x26540e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff1d20() {
   return (neuron0x2652570()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff1d60() {
   return (neuron0x2652820()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2653220() {
   return (neuron0x2652b60()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2653260() {
   return (neuron0x2652ea0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x26532a0() {
   return (neuron0x2653a60()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff22f0() {
   return (neuron0x2653da0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff2330() {
   return (neuron0x26540e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff2370() {
   return (neuron0x2652570()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff23b0() {
   return (neuron0x2652820()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff1310() {
   return (neuron0x2652b60()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff1350() {
   return (neuron0x2652ea0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x30029a0() {
   return (neuron0x2ff05e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x30029e0() {
   return (neuron0x2ff0a10()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3002a20() {
   return (neuron0x2ff0f10()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3002a60() {
   return (neuron0x2ff1420()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3002aa0() {
   return (neuron0x2ff1920()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3002ae0() {
   return (neuron0x2ff1fb0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3002e60() {
   return (neuron0x2ff05e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3002ea0() {
   return (neuron0x2ff0a10()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3002ee0() {
   return (neuron0x2ff0f10()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3002f20() {
   return (neuron0x2ff1420()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3002f60() {
   return (neuron0x2ff1920()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3002fa0() {
   return (neuron0x2ff1fb0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3003320() {
   return (neuron0x2ff05e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3003360() {
   return (neuron0x2ff0a10()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x30033a0() {
   return (neuron0x2ff0f10()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x30033e0() {
   return (neuron0x2ff1420()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3003420() {
   return (neuron0x2ff1920()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3003460() {
   return (neuron0x2ff1fb0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff4a90() {
   return (neuron0x2ff05e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff4ad0() {
   return (neuron0x2ff0a10()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x30038f0() {
   return (neuron0x2ff0f10()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3003930() {
   return (neuron0x2ff1420()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3003970() {
   return (neuron0x2ff1920()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff2ec0() {
   return (neuron0x2ff1fb0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2feef10() {
   return (neuron0x30026f0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x26532e0() {
   return (neuron0x3002b20()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff5140() {
   return (neuron0x3002fe0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x2ff1f30() {
   return (neuron0x30034a0()*nan);
}

