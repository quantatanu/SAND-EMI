#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_EXTMUID.h"
#include <cmath>

double nnTrainedchi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6) {
   input0 = (in0 - 1.3878)/6.32764;
   input1 = (in1 - 1.3878)/6.32764;
   input2 = (in2 - 1.41125)/6.40648;
   input3 = (in3 - -1.002)/2.61276e-06;
   input4 = (in4 - 1.41125)/6.40648;
   input5 = (in5 - 1.01932)/0.165104;
   input6 = (in6 - 1.01932)/0.165104;
   switch(index) {
     case 0:
         return neuron0x4b31390();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 1.3878)/6.32764;
   input1 = (input[1] - 1.3878)/6.32764;
   input2 = (input[2] - 1.41125)/6.40648;
   input3 = (input[3] - -1.002)/2.61276e-06;
   input4 = (input[4] - 1.41125)/6.40648;
   input5 = (input[5] - 1.01932)/0.165104;
   input6 = (input[6] - 1.01932)/0.165104;
   switch(index) {
     case 0:
         return neuron0x4b31390();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x49fa300() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x49fa640() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x49f6aa0() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x49f6de0() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x49f76d0() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x49f7a10() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x49f7d50() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x4b378e0() {
   double input = -0.311169;
   input += synapse0x49fa8e0();
   input += synapse0x49fa7d0();
   input += synapse0x49f7090();
   input += synapse0x4b37b90();
   input += synapse0x4b37bd0();
   input += synapse0x4b37c10();
   input += synapse0x4b37c50();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4b378e0() {
   double input = input0x4b378e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4b37c90() {
   double input = 1.32426;
   input += synapse0x4b37fd0();
   input += synapse0x4b38010();
   input += synapse0x4b38050();
   input += synapse0x4b38090();
   input += synapse0x4b380d0();
   input += synapse0x4b38110();
   input += synapse0x4b38150();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4b37c90() {
   double input = input0x4b37c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4b38190() {
   double input = 0.591073;
   input += synapse0x4b384d0();
   input += synapse0x4b38510();
   input += synapse0x4b38550();
   input += synapse0x49f56d0();
   input += synapse0x49f5710();
   input += synapse0x49f8090();
   input += synapse0x49f80d0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4b38190() {
   double input = input0x4b38190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4b386a0() {
   double input = -0.435084;
   input += synapse0x4b30d50();
   input += synapse0x4b30d90();
   input += synapse0x4b30dd0();
   input += synapse0x4b30e10();
   input += synapse0x4b30e50();
   input += synapse0x4b30e90();
   input += synapse0x4b30ed0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4b386a0() {
   double input = input0x4b386a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4b30f10() {
   double input = -0.409813;
   input += synapse0x4b31250();
   input += synapse0x4b31290();
   input += synapse0x4b312d0();
   input += synapse0x4b31310();
   input += synapse0x4b31350();
   input += synapse0x4b38830();
   input += synapse0x4b38870();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4b30f10() {
   double input = input0x4b30f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4b315a0() {
   double input = -0.105983;
   input += synapse0x4b318e0();
   input += synapse0x4b31920();
   input += synapse0x4b31960();
   input += synapse0x4b319a0();
   input += synapse0x4b319e0();
   input += synapse0x4b31a20();
   input += synapse0x4b31a60();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4b315a0() {
   double input = input0x4b315a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4b31aa0() {
   double input = 0.370057;
   input += synapse0x4b31de0();
   input += synapse0x4b31e20();
   input += synapse0x4b31e60();
   input += synapse0x4b31ea0();
   input += synapse0x4b31ee0();
   input += synapse0x4b31f20();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4b31aa0() {
   double input = input0x4b31aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4b31f60() {
   double input = -0.339431;
   input += synapse0x4b322a0();
   input += synapse0x4b322e0();
   input += synapse0x4b32320();
   input += synapse0x4b32360();
   input += synapse0x4b323a0();
   input += synapse0x4b323e0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4b31f60() {
   double input = input0x4b31f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4b32420() {
   double input = -0.066375;
   input += synapse0x4b32760();
   input += synapse0x4b327a0();
   input += synapse0x4b327e0();
   input += synapse0x4b32820();
   input += synapse0x4b32860();
   input += synapse0x4b328a0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4b32420() {
   double input = input0x4b32420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4b328e0() {
   double input = 0.0250631;
   input += synapse0x49f5520();
   input += synapse0x49f5560();
   input += synapse0x4b32c20();
   input += synapse0x4b32c60();
   input += synapse0x4b32ca0();
   input += synapse0x49fa920();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4b328e0() {
   double input = input0x4b328e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4b31390() {
   double input = -0.340777;
   input += synapse0x49fa8a0();
   input += synapse0x49f9ec0();
   input += synapse0x4b36de0();
   input += synapse0x49f5bd0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4b31390() {
   double input = input0x4b31390();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x49fa8e0() {
   return (neuron0x49fa300()*-0.00716341);
}

double nnTrainedchi110_EXTMUID::synapse0x49fa7d0() {
   return (neuron0x49fa640()*-0.0636144);
}

double nnTrainedchi110_EXTMUID::synapse0x49f7090() {
   return (neuron0x49f6aa0()*-0.839655);
}

double nnTrainedchi110_EXTMUID::synapse0x4b37b90() {
   return (neuron0x49f6de0()*-0.199463);
}

double nnTrainedchi110_EXTMUID::synapse0x4b37bd0() {
   return (neuron0x49f76d0()*-1.06591);
}

double nnTrainedchi110_EXTMUID::synapse0x4b37c10() {
   return (neuron0x49f7a10()*0.12715);
}

double nnTrainedchi110_EXTMUID::synapse0x4b37c50() {
   return (neuron0x49f7d50()*0.326724);
}

double nnTrainedchi110_EXTMUID::synapse0x4b37fd0() {
   return (neuron0x49fa300()*-0.750565);
}

double nnTrainedchi110_EXTMUID::synapse0x4b38010() {
   return (neuron0x49fa640()*-0.251215);
}

double nnTrainedchi110_EXTMUID::synapse0x4b38050() {
   return (neuron0x49f6aa0()*0.171788);
}

double nnTrainedchi110_EXTMUID::synapse0x4b38090() {
   return (neuron0x49f6de0()*-0.0836659);
}

double nnTrainedchi110_EXTMUID::synapse0x4b380d0() {
   return (neuron0x49f76d0()*-0.0587349);
}

double nnTrainedchi110_EXTMUID::synapse0x4b38110() {
   return (neuron0x49f7a10()*-0.00685542);
}

double nnTrainedchi110_EXTMUID::synapse0x4b38150() {
   return (neuron0x49f7d50()*-0.355634);
}

double nnTrainedchi110_EXTMUID::synapse0x4b384d0() {
   return (neuron0x49fa300()*-0.806725);
}

double nnTrainedchi110_EXTMUID::synapse0x4b38510() {
   return (neuron0x49fa640()*-0.0972739);
}

double nnTrainedchi110_EXTMUID::synapse0x4b38550() {
   return (neuron0x49f6aa0()*-0.361102);
}

double nnTrainedchi110_EXTMUID::synapse0x49f56d0() {
   return (neuron0x49f6de0()*0.401736);
}

double nnTrainedchi110_EXTMUID::synapse0x49f5710() {
   return (neuron0x49f76d0()*-0.0621146);
}

double nnTrainedchi110_EXTMUID::synapse0x49f8090() {
   return (neuron0x49f7a10()*0.103919);
}

double nnTrainedchi110_EXTMUID::synapse0x49f80d0() {
   return (neuron0x49f7d50()*-0.632571);
}

double nnTrainedchi110_EXTMUID::synapse0x4b30d50() {
   return (neuron0x49fa300()*0.0356209);
}

double nnTrainedchi110_EXTMUID::synapse0x4b30d90() {
   return (neuron0x49fa640()*0.618936);
}

double nnTrainedchi110_EXTMUID::synapse0x4b30dd0() {
   return (neuron0x49f6aa0()*0.261985);
}

double nnTrainedchi110_EXTMUID::synapse0x4b30e10() {
   return (neuron0x49f6de0()*0.278361);
}

double nnTrainedchi110_EXTMUID::synapse0x4b30e50() {
   return (neuron0x49f76d0()*-0.628629);
}

double nnTrainedchi110_EXTMUID::synapse0x4b30e90() {
   return (neuron0x49f7a10()*-1.73643);
}

double nnTrainedchi110_EXTMUID::synapse0x4b30ed0() {
   return (neuron0x49f7d50()*-1.23786);
}

double nnTrainedchi110_EXTMUID::synapse0x4b31250() {
   return (neuron0x49fa300()*-1.04465);
}

double nnTrainedchi110_EXTMUID::synapse0x4b31290() {
   return (neuron0x49fa640()*-0.410846);
}

double nnTrainedchi110_EXTMUID::synapse0x4b312d0() {
   return (neuron0x49f6aa0()*-0.546421);
}

double nnTrainedchi110_EXTMUID::synapse0x4b31310() {
   return (neuron0x49f6de0()*-0.471199);
}

double nnTrainedchi110_EXTMUID::synapse0x4b31350() {
   return (neuron0x49f76d0()*-0.378458);
}

double nnTrainedchi110_EXTMUID::synapse0x4b38830() {
   return (neuron0x49f7a10()*-0.874);
}

double nnTrainedchi110_EXTMUID::synapse0x4b38870() {
   return (neuron0x49f7d50()*-0.966696);
}

double nnTrainedchi110_EXTMUID::synapse0x4b318e0() {
   return (neuron0x49fa300()*0.302961);
}

double nnTrainedchi110_EXTMUID::synapse0x4b31920() {
   return (neuron0x49fa640()*0.104096);
}

double nnTrainedchi110_EXTMUID::synapse0x4b31960() {
   return (neuron0x49f6aa0()*-0.0841175);
}

double nnTrainedchi110_EXTMUID::synapse0x4b319a0() {
   return (neuron0x49f6de0()*-0.143085);
}

double nnTrainedchi110_EXTMUID::synapse0x4b319e0() {
   return (neuron0x49f76d0()*0.250902);
}

double nnTrainedchi110_EXTMUID::synapse0x4b31a20() {
   return (neuron0x49f7a10()*1.93328);
}

double nnTrainedchi110_EXTMUID::synapse0x4b31a60() {
   return (neuron0x49f7d50()*1.42198);
}

double nnTrainedchi110_EXTMUID::synapse0x4b31de0() {
   return (neuron0x4b378e0()*-1.60066);
}

double nnTrainedchi110_EXTMUID::synapse0x4b31e20() {
   return (neuron0x4b37c90()*2.99876);
}

double nnTrainedchi110_EXTMUID::synapse0x4b31e60() {
   return (neuron0x4b38190()*1.9393);
}

double nnTrainedchi110_EXTMUID::synapse0x4b31ea0() {
   return (neuron0x4b386a0()*2.1101);
}

double nnTrainedchi110_EXTMUID::synapse0x4b31ee0() {
   return (neuron0x4b30f10()*0.820673);
}

double nnTrainedchi110_EXTMUID::synapse0x4b31f20() {
   return (neuron0x4b315a0()*-0.0691487);
}

double nnTrainedchi110_EXTMUID::synapse0x4b322a0() {
   return (neuron0x4b378e0()*-0.0135546);
}

double nnTrainedchi110_EXTMUID::synapse0x4b322e0() {
   return (neuron0x4b37c90()*0.41608);
}

double nnTrainedchi110_EXTMUID::synapse0x4b32320() {
   return (neuron0x4b38190()*0.328992);
}

double nnTrainedchi110_EXTMUID::synapse0x4b32360() {
   return (neuron0x4b386a0()*0.279456);
}

double nnTrainedchi110_EXTMUID::synapse0x4b323a0() {
   return (neuron0x4b30f10()*0.34883);
}

double nnTrainedchi110_EXTMUID::synapse0x4b323e0() {
   return (neuron0x4b315a0()*-0.0351078);
}

double nnTrainedchi110_EXTMUID::synapse0x4b32760() {
   return (neuron0x4b378e0()*-1.33846);
}

double nnTrainedchi110_EXTMUID::synapse0x4b327a0() {
   return (neuron0x4b37c90()*0.601128);
}

double nnTrainedchi110_EXTMUID::synapse0x4b327e0() {
   return (neuron0x4b38190()*0.265751);
}

double nnTrainedchi110_EXTMUID::synapse0x4b32820() {
   return (neuron0x4b386a0()*1.03398);
}

double nnTrainedchi110_EXTMUID::synapse0x4b32860() {
   return (neuron0x4b30f10()*1.03779);
}

double nnTrainedchi110_EXTMUID::synapse0x4b328a0() {
   return (neuron0x4b315a0()*-0.976757);
}

double nnTrainedchi110_EXTMUID::synapse0x49f5520() {
   return (neuron0x4b378e0()*-0.603602);
}

double nnTrainedchi110_EXTMUID::synapse0x49f5560() {
   return (neuron0x4b37c90()*-0.629122);
}

double nnTrainedchi110_EXTMUID::synapse0x4b32c20() {
   return (neuron0x4b38190()*-0.434797);
}

double nnTrainedchi110_EXTMUID::synapse0x4b32c60() {
   return (neuron0x4b386a0()*-0.192099);
}

double nnTrainedchi110_EXTMUID::synapse0x4b32ca0() {
   return (neuron0x4b30f10()*-0.0017489);
}

double nnTrainedchi110_EXTMUID::synapse0x49fa920() {
   return (neuron0x4b315a0()*-0.39226);
}

double nnTrainedchi110_EXTMUID::synapse0x49fa8a0() {
   return (neuron0x4b31aa0()*3.32945);
}

double nnTrainedchi110_EXTMUID::synapse0x49f9ec0() {
   return (neuron0x4b31f60()*0.379746);
}

double nnTrainedchi110_EXTMUID::synapse0x4b36de0() {
   return (neuron0x4b32420()*-2.97214);
}

double nnTrainedchi110_EXTMUID::synapse0x49f5bd0() {
   return (neuron0x4b328e0()*-1.1843);
}

