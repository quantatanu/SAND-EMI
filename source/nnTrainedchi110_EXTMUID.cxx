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
         return neuron0x3f51770();
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
         return neuron0x3f51770();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x35b34d0() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x35b3810() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x35b3b50() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x35b1fe0() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x35b2290() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x35b25d0() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x35b2910() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x3f4ffb0() {
   double input = nan;
   input += synapse0x35b3410();
   input += synapse0x3f50260();
   input += synapse0x3f502a0();
   input += synapse0x3f502e0();
   input += synapse0x3f50320();
   input += synapse0x3f50360();
   input += synapse0x3f503a0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3f4ffb0() {
   double input = input0x3f4ffb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3f503e0() {
   double input = nan;
   input += synapse0x3f50720();
   input += synapse0x3f50760();
   input += synapse0x3f507a0();
   input += synapse0x3f507e0();
   input += synapse0x3f50820();
   input += synapse0x3f50860();
   input += synapse0x3f508a0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3f503e0() {
   double input = input0x3f503e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3f508e0() {
   double input = nan;
   input += synapse0x3f50c20();
   input += synapse0x3f50c60();
   input += synapse0x3f50ca0();
   input += synapse0x35b3450();
   input += synapse0x3f54820();
   input += synapse0x3f54860();
   input += synapse0x35b2c50();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3f508e0() {
   double input = input0x3f508e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3f50df0() {
   double input = nan;
   input += synapse0x3f51130();
   input += synapse0x3f51170();
   input += synapse0x3f511b0();
   input += synapse0x3f511f0();
   input += synapse0x3f51230();
   input += synapse0x3f51270();
   input += synapse0x3f512b0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3f50df0() {
   double input = input0x3f50df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3f512f0() {
   double input = nan;
   input += synapse0x3f51630();
   input += synapse0x3f51670();
   input += synapse0x3f516b0();
   input += synapse0x3f516f0();
   input += synapse0x3f51730();
   input += synapse0x35b2c90();
   input += synapse0x35b2cd0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3f512f0() {
   double input = input0x3f512f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3f51980() {
   double input = nan;
   input += synapse0x35b2d10();
   input += synapse0x3f51cc0();
   input += synapse0x3f51d00();
   input += synapse0x3f51d40();
   input += synapse0x3f51d80();
   input += synapse0x3f50ce0();
   input += synapse0x3f50d20();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3f51980() {
   double input = input0x3f51980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3f62130() {
   double input = nan;
   input += synapse0x3f623e0();
   input += synapse0x3f62420();
   input += synapse0x3f62460();
   input += synapse0x3f624a0();
   input += synapse0x3f624e0();
   input += synapse0x3f62520();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3f62130() {
   double input = input0x3f62130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3f62560() {
   double input = nan;
   input += synapse0x3f628a0();
   input += synapse0x3f628e0();
   input += synapse0x3f62920();
   input += synapse0x3f62960();
   input += synapse0x3f629a0();
   input += synapse0x3f629e0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3f62560() {
   double input = input0x3f62560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3f62a20() {
   double input = nan;
   input += synapse0x3f62d60();
   input += synapse0x3f62da0();
   input += synapse0x3f62de0();
   input += synapse0x3f62e20();
   input += synapse0x3f62e60();
   input += synapse0x3f62ea0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3f62a20() {
   double input = input0x3f62a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3f62ee0() {
   double input = nan;
   input += synapse0x3f54670();
   input += synapse0x3f546b0();
   input += synapse0x3f63330();
   input += synapse0x3f63370();
   input += synapse0x3f633b0();
   input += synapse0x3f52890();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3f62ee0() {
   double input = input0x3f62ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3f51770() {
   double input = nan;
   input += synapse0x3f4e8e0();
   input += synapse0x35b2d50();
   input += synapse0x3f54d20();
   input += synapse0x3f51900();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3f51770() {
   double input = input0x3f51770();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x35b3410() {
   return (neuron0x35b34d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f50260() {
   return (neuron0x35b3810()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f502a0() {
   return (neuron0x35b3b50()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f502e0() {
   return (neuron0x35b1fe0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f50320() {
   return (neuron0x35b2290()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f50360() {
   return (neuron0x35b25d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f503a0() {
   return (neuron0x35b2910()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f50720() {
   return (neuron0x35b34d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f50760() {
   return (neuron0x35b3810()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f507a0() {
   return (neuron0x35b3b50()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f507e0() {
   return (neuron0x35b1fe0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f50820() {
   return (neuron0x35b2290()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f50860() {
   return (neuron0x35b25d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f508a0() {
   return (neuron0x35b2910()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f50c20() {
   return (neuron0x35b34d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f50c60() {
   return (neuron0x35b3810()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f50ca0() {
   return (neuron0x35b3b50()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x35b3450() {
   return (neuron0x35b1fe0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f54820() {
   return (neuron0x35b2290()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f54860() {
   return (neuron0x35b25d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x35b2c50() {
   return (neuron0x35b2910()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f51130() {
   return (neuron0x35b34d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f51170() {
   return (neuron0x35b3810()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f511b0() {
   return (neuron0x35b3b50()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f511f0() {
   return (neuron0x35b1fe0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f51230() {
   return (neuron0x35b2290()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f51270() {
   return (neuron0x35b25d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f512b0() {
   return (neuron0x35b2910()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f51630() {
   return (neuron0x35b34d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f51670() {
   return (neuron0x35b3810()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f516b0() {
   return (neuron0x35b3b50()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f516f0() {
   return (neuron0x35b1fe0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f51730() {
   return (neuron0x35b2290()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x35b2c90() {
   return (neuron0x35b25d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x35b2cd0() {
   return (neuron0x35b2910()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x35b2d10() {
   return (neuron0x35b34d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f51cc0() {
   return (neuron0x35b3810()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f51d00() {
   return (neuron0x35b3b50()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f51d40() {
   return (neuron0x35b1fe0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f51d80() {
   return (neuron0x35b2290()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f50ce0() {
   return (neuron0x35b25d0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f50d20() {
   return (neuron0x35b2910()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f623e0() {
   return (neuron0x3f4ffb0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f62420() {
   return (neuron0x3f503e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f62460() {
   return (neuron0x3f508e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f624a0() {
   return (neuron0x3f50df0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f624e0() {
   return (neuron0x3f512f0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f62520() {
   return (neuron0x3f51980()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f628a0() {
   return (neuron0x3f4ffb0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f628e0() {
   return (neuron0x3f503e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f62920() {
   return (neuron0x3f508e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f62960() {
   return (neuron0x3f50df0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f629a0() {
   return (neuron0x3f512f0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f629e0() {
   return (neuron0x3f51980()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f62d60() {
   return (neuron0x3f4ffb0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f62da0() {
   return (neuron0x3f503e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f62de0() {
   return (neuron0x3f508e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f62e20() {
   return (neuron0x3f50df0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f62e60() {
   return (neuron0x3f512f0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f62ea0() {
   return (neuron0x3f51980()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f54670() {
   return (neuron0x3f4ffb0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f546b0() {
   return (neuron0x3f503e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f63330() {
   return (neuron0x3f508e0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f63370() {
   return (neuron0x3f50df0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f633b0() {
   return (neuron0x3f512f0()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f52890() {
   return (neuron0x3f51980()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f4e8e0() {
   return (neuron0x3f62130()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x35b2d50() {
   return (neuron0x3f62560()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f54d20() {
   return (neuron0x3f62a20()*nan);
}

double nnTrainedchi110_EXTMUID::synapse0x3f51900() {
   return (neuron0x3f62ee0()*nan);
}

