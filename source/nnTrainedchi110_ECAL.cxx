#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_ECAL.h"
#include <cmath>

double nnTrainedchi110_ECAL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9) {
   input0 = (in0 - 86.2525)/178.669;
   input1 = (in1 - 8.17925)/5.5338;
   input2 = (in2 - 0.653704)/0.271914;
   input3 = (in3 - 3.1784e-310)/1;
   input4 = (in4 - 0)/1;
   input5 = (in5 - 0.99978)/0.000844316;
   input6 = (in6 - 6.94311e-310)/1;
   input7 = (in7 - 6.94311e-310)/1;
   input8 = (in8 - 6.65376e-314)/1;
   input9 = (in9 - 2.15803)/1.58529;
   switch(index) {
     case 0:
         return neuron0x4d97640();
     default:
         return 0.;
   }
}

double nnTrainedchi110_ECAL::Value(int index, double* input) {
   input0 = (input[0] - 86.2525)/178.669;
   input1 = (input[1] - 8.17925)/5.5338;
   input2 = (input[2] - 0.653704)/0.271914;
   input3 = (input[3] - 3.1784e-310)/1;
   input4 = (input[4] - 0)/1;
   input5 = (input[5] - 0.99978)/0.000844316;
   input6 = (input[6] - 6.94311e-310)/1;
   input7 = (input[7] - 6.94311e-310)/1;
   input8 = (input[8] - 6.65376e-314)/1;
   input9 = (input[9] - 2.15803)/1.58529;
   switch(index) {
     case 0:
         return neuron0x4d97640();
     default:
         return 0.;
   }
}

double nnTrainedchi110_ECAL::neuron0x4d996a0() {
   return input0;
}

double nnTrainedchi110_ECAL::neuron0x4bca450() {
   return input1;
}

double nnTrainedchi110_ECAL::neuron0x4bca790() {
   return input2;
}

double nnTrainedchi110_ECAL::neuron0x4bcaad0() {
   return input3;
}

double nnTrainedchi110_ECAL::neuron0x4bcae10() {
   return input4;
}

double nnTrainedchi110_ECAL::neuron0x4bcdf20() {
   return input5;
}

double nnTrainedchi110_ECAL::neuron0x4bce260() {
   return input6;
}

double nnTrainedchi110_ECAL::neuron0x4bce5a0() {
   return input7;
}

double nnTrainedchi110_ECAL::neuron0x4bce8e0() {
   return input8;
}

double nnTrainedchi110_ECAL::neuron0x4bcec20() {
   return input9;
}

double nnTrainedchi110_ECAL::input0x4d92e10() {
   double input = 1.73338;
   input += synapse0x4d99660();
   input += synapse0x4bcb1f0();
   input += synapse0x4d930c0();
   input += synapse0x4d93100();
   input += synapse0x4d93140();
   input += synapse0x4d93180();
   input += synapse0x4d931c0();
   input += synapse0x4d93200();
   input += synapse0x4d93240();
   input += synapse0x4d93280();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d92e10() {
   double input = input0x4d92e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d932c0() {
   double input = -0.863083;
   input += synapse0x4d93600();
   input += synapse0x4d93640();
   input += synapse0x4d93680();
   input += synapse0x4d936c0();
   input += synapse0x4d93700();
   input += synapse0x4d93740();
   input += synapse0x4d93780();
   input += synapse0x4bcb030();
   input += synapse0x4bc8620();
   input += synapse0x4bc8660();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d932c0() {
   double input = input0x4d932c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d938d0() {
   double input = 7.73787;
   input += synapse0x4d93c10();
   input += synapse0x4d93c50();
   input += synapse0x4d93c90();
   input += synapse0x4d93cd0();
   input += synapse0x4d93d10();
   input += synapse0x4d93d50();
   input += synapse0x4d93d90();
   input += synapse0x4d93dd0();
   input += synapse0x4d93e10();
   input += synapse0x4d93e50();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d938d0() {
   double input = input0x4d938d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d93e90() {
   double input = 0.404828;
   input += synapse0x4d941d0();
   input += synapse0x4d94210();
   input += synapse0x4d94250();
   input += synapse0x4d937c0();
   input += synapse0x4d93800();
   input += synapse0x4d93840();
   input += synapse0x4d93880();
   input += synapse0x4d944a0();
   input += synapse0x4d944e0();
   input += synapse0x4d94520();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d93e90() {
   double input = input0x4d93e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d94560() {
   double input = -0.29108;
   input += synapse0x4d948a0();
   input += synapse0x4d948e0();
   input += synapse0x4d94920();
   input += synapse0x4d94960();
   input += synapse0x4d949a0();
   input += synapse0x4d949e0();
   input += synapse0x4d94a20();
   input += synapse0x4d94a60();
   input += synapse0x4d94aa0();
   input += synapse0x4d94ae0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d94560() {
   double input = input0x4d94560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d94b20() {
   double input = 2.00124;
   input += synapse0x4d94e60();
   input += synapse0x4d94ea0();
   input += synapse0x4d94ee0();
   input += synapse0x4d94f20();
   input += synapse0x4d94f60();
   input += synapse0x4d94fa0();
   input += synapse0x4d94fe0();
   input += synapse0x4d95020();
   input += synapse0x4d95060();
   input += synapse0x4d950a0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d94b20() {
   double input = input0x4d94b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d950e0() {
   double input = -0.581555;
   input += synapse0x4bc8470();
   input += synapse0x4bc84b0();
   input += synapse0x4d95530();
   input += synapse0x4d95570();
   input += synapse0x4d955b0();
   input += synapse0x4d998c0();
   input += synapse0x4bcbcd0();
   input += synapse0x4bcf9c0();
   input += synapse0x4bcb080();
   input += synapse0x4bcbee0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d950e0() {
   double input = input0x4d950e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4bca270() {
   double input = -0.287534;
   input += synapse0x4bca400();
   input += synapse0x4d94440();
   input += synapse0x4d95a00();
   input += synapse0x4d95a40();
   input += synapse0x4d95a80();
   input += synapse0x4d95ac0();
   input += synapse0x4d95b00();
   input += synapse0x4d95b40();
   input += synapse0x4d95b80();
   input += synapse0x4d95bc0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4bca270() {
   double input = input0x4bca270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d95c00() {
   double input = 1.47988;
   input += synapse0x4d95f40();
   input += synapse0x4d95f80();
   input += synapse0x4d95fc0();
   input += synapse0x4d96000();
   input += synapse0x4d96040();
   input += synapse0x4d96080();
   input += synapse0x4d960c0();
   input += synapse0x4d96100();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d95c00() {
   double input = input0x4d95c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d96140() {
   double input = 1.18202;
   input += synapse0x4d96480();
   input += synapse0x4d964c0();
   input += synapse0x4d96500();
   input += synapse0x4d96540();
   input += synapse0x4d96580();
   input += synapse0x4d965c0();
   input += synapse0x4d96600();
   input += synapse0x4d96640();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d96140() {
   double input = input0x4d96140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d96680() {
   double input = 0.486239;
   input += synapse0x4d969c0();
   input += synapse0x4d96a00();
   input += synapse0x4d96a40();
   input += synapse0x4d96a80();
   input += synapse0x4d96ac0();
   input += synapse0x4d96b00();
   input += synapse0x4d96b40();
   input += synapse0x4d96b80();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d96680() {
   double input = input0x4d96680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d96bc0() {
   double input = 0.784701;
   input += synapse0x4d96f00();
   input += synapse0x4d96f40();
   input += synapse0x4d96f80();
   input += synapse0x4d96fc0();
   input += synapse0x4d97000();
   input += synapse0x4d97040();
   input += synapse0x4d97080();
   input += synapse0x4d970c0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d96bc0() {
   double input = input0x4d96bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d97100() {
   double input = -0.989841;
   input += synapse0x4d97440();
   input += synapse0x4d97480();
   input += synapse0x4d974c0();
   input += synapse0x4d97500();
   input += synapse0x4d97540();
   input += synapse0x4d97580();
   input += synapse0x4d975c0();
   input += synapse0x4d97600();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d97100() {
   double input = input0x4d97100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d97640() {
   double input = -0.944394;
   input += synapse0x4d97980();
   input += synapse0x4d979c0();
   input += synapse0x4d97a00();
   input += synapse0x4d97a40();
   input += synapse0x4d97a80();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d97640() {
   double input = input0x4d97640();
   return (input * 1)+0;
}

double nnTrainedchi110_ECAL::synapse0x4d99660() {
   return (neuron0x4d996a0()*-4.35703);
}

double nnTrainedchi110_ECAL::synapse0x4bcb1f0() {
   return (neuron0x4bca450()*-0.756056);
}

double nnTrainedchi110_ECAL::synapse0x4d930c0() {
   return (neuron0x4bca790()*-2.22989);
}

double nnTrainedchi110_ECAL::synapse0x4d93100() {
   return (neuron0x4bcaad0()*0.0339078);
}

double nnTrainedchi110_ECAL::synapse0x4d93140() {
   return (neuron0x4bcae10()*-0.398832);
}

double nnTrainedchi110_ECAL::synapse0x4d93180() {
   return (neuron0x4bcdf20()*-0.712503);
}

double nnTrainedchi110_ECAL::synapse0x4d931c0() {
   return (neuron0x4bce260()*0.142038);
}

double nnTrainedchi110_ECAL::synapse0x4d93200() {
   return (neuron0x4bce5a0()*-0.374115);
}

double nnTrainedchi110_ECAL::synapse0x4d93240() {
   return (neuron0x4bce8e0()*-0.471177);
}

double nnTrainedchi110_ECAL::synapse0x4d93280() {
   return (neuron0x4bcec20()*-0.4136);
}

double nnTrainedchi110_ECAL::synapse0x4d93600() {
   return (neuron0x4d996a0()*-0.0436159);
}

double nnTrainedchi110_ECAL::synapse0x4d93640() {
   return (neuron0x4bca450()*-0.200844);
}

double nnTrainedchi110_ECAL::synapse0x4d93680() {
   return (neuron0x4bca790()*1.7988);
}

double nnTrainedchi110_ECAL::synapse0x4d936c0() {
   return (neuron0x4bcaad0()*-0.301123);
}

double nnTrainedchi110_ECAL::synapse0x4d93700() {
   return (neuron0x4bcae10()*0.131116);
}

double nnTrainedchi110_ECAL::synapse0x4d93740() {
   return (neuron0x4bcdf20()*1.37923);
}

double nnTrainedchi110_ECAL::synapse0x4d93780() {
   return (neuron0x4bce260()*-0.459512);
}

double nnTrainedchi110_ECAL::synapse0x4bcb030() {
   return (neuron0x4bce5a0()*0.307279);
}

double nnTrainedchi110_ECAL::synapse0x4bc8620() {
   return (neuron0x4bce8e0()*0.461102);
}

double nnTrainedchi110_ECAL::synapse0x4bc8660() {
   return (neuron0x4bcec20()*0.543809);
}

double nnTrainedchi110_ECAL::synapse0x4d93c10() {
   return (neuron0x4d996a0()*0.196253);
}

double nnTrainedchi110_ECAL::synapse0x4d93c50() {
   return (neuron0x4bca450()*-0.0666079);
}

double nnTrainedchi110_ECAL::synapse0x4d93c90() {
   return (neuron0x4bca790()*-6.41385);
}

double nnTrainedchi110_ECAL::synapse0x4d93cd0() {
   return (neuron0x4bcaad0()*0.275089);
}

double nnTrainedchi110_ECAL::synapse0x4d93d10() {
   return (neuron0x4bcae10()*-0.143284);
}

double nnTrainedchi110_ECAL::synapse0x4d93d50() {
   return (neuron0x4bcdf20()*0.116148);
}

double nnTrainedchi110_ECAL::synapse0x4d93d90() {
   return (neuron0x4bce260()*-0.0125002);
}

double nnTrainedchi110_ECAL::synapse0x4d93dd0() {
   return (neuron0x4bce5a0()*-0.262938);
}

double nnTrainedchi110_ECAL::synapse0x4d93e10() {
   return (neuron0x4bce8e0()*-0.476557);
}

double nnTrainedchi110_ECAL::synapse0x4d93e50() {
   return (neuron0x4bcec20()*-0.758405);
}

double nnTrainedchi110_ECAL::synapse0x4d941d0() {
   return (neuron0x4d996a0()*-0.0702009);
}

double nnTrainedchi110_ECAL::synapse0x4d94210() {
   return (neuron0x4bca450()*0.116943);
}

double nnTrainedchi110_ECAL::synapse0x4d94250() {
   return (neuron0x4bca790()*1.20749);
}

double nnTrainedchi110_ECAL::synapse0x4d937c0() {
   return (neuron0x4bcaad0()*0.0953381);
}

double nnTrainedchi110_ECAL::synapse0x4d93800() {
   return (neuron0x4bcae10()*0.258999);
}

double nnTrainedchi110_ECAL::synapse0x4d93840() {
   return (neuron0x4bcdf20()*0.578133);
}

double nnTrainedchi110_ECAL::synapse0x4d93880() {
   return (neuron0x4bce260()*-0.314596);
}

double nnTrainedchi110_ECAL::synapse0x4d944a0() {
   return (neuron0x4bce5a0()*-0.223781);
}

double nnTrainedchi110_ECAL::synapse0x4d944e0() {
   return (neuron0x4bce8e0()*0.0950511);
}

double nnTrainedchi110_ECAL::synapse0x4d94520() {
   return (neuron0x4bcec20()*0.437552);
}

double nnTrainedchi110_ECAL::synapse0x4d948a0() {
   return (neuron0x4d996a0()*1.70852);
}

double nnTrainedchi110_ECAL::synapse0x4d948e0() {
   return (neuron0x4bca450()*0.478158);
}

double nnTrainedchi110_ECAL::synapse0x4d94920() {
   return (neuron0x4bca790()*-1.43545);
}

double nnTrainedchi110_ECAL::synapse0x4d94960() {
   return (neuron0x4bcaad0()*0.124485);
}

double nnTrainedchi110_ECAL::synapse0x4d949a0() {
   return (neuron0x4bcae10()*0.115682);
}

double nnTrainedchi110_ECAL::synapse0x4d949e0() {
   return (neuron0x4bcdf20()*0.466663);
}

double nnTrainedchi110_ECAL::synapse0x4d94a20() {
   return (neuron0x4bce260()*-0.425284);
}

double nnTrainedchi110_ECAL::synapse0x4d94a60() {
   return (neuron0x4bce5a0()*-0.325376);
}

double nnTrainedchi110_ECAL::synapse0x4d94aa0() {
   return (neuron0x4bce8e0()*0.156113);
}

double nnTrainedchi110_ECAL::synapse0x4d94ae0() {
   return (neuron0x4bcec20()*1.15967);
}

double nnTrainedchi110_ECAL::synapse0x4d94e60() {
   return (neuron0x4d996a0()*-0.651102);
}

double nnTrainedchi110_ECAL::synapse0x4d94ea0() {
   return (neuron0x4bca450()*-1.22872);
}

double nnTrainedchi110_ECAL::synapse0x4d94ee0() {
   return (neuron0x4bca790()*-2.38143);
}

double nnTrainedchi110_ECAL::synapse0x4d94f20() {
   return (neuron0x4bcaad0()*-0.0426027);
}

double nnTrainedchi110_ECAL::synapse0x4d94f60() {
   return (neuron0x4bcae10()*0.138264);
}

double nnTrainedchi110_ECAL::synapse0x4d94fa0() {
   return (neuron0x4bcdf20()*0.345502);
}

double nnTrainedchi110_ECAL::synapse0x4d94fe0() {
   return (neuron0x4bce260()*-0.450399);
}

double nnTrainedchi110_ECAL::synapse0x4d95020() {
   return (neuron0x4bce5a0()*0.459273);
}

double nnTrainedchi110_ECAL::synapse0x4d95060() {
   return (neuron0x4bce8e0()*0.0510498);
}

double nnTrainedchi110_ECAL::synapse0x4d950a0() {
   return (neuron0x4bcec20()*-1.1318);
}

double nnTrainedchi110_ECAL::synapse0x4bc8470() {
   return (neuron0x4d996a0()*-0.22577);
}

double nnTrainedchi110_ECAL::synapse0x4bc84b0() {
   return (neuron0x4bca450()*0.309538);
}

double nnTrainedchi110_ECAL::synapse0x4d95530() {
   return (neuron0x4bca790()*-0.838374);
}

double nnTrainedchi110_ECAL::synapse0x4d95570() {
   return (neuron0x4bcaad0()*-0.377026);
}

double nnTrainedchi110_ECAL::synapse0x4d955b0() {
   return (neuron0x4bcae10()*-0.017041);
}

double nnTrainedchi110_ECAL::synapse0x4d998c0() {
   return (neuron0x4bcdf20()*0.185154);
}

double nnTrainedchi110_ECAL::synapse0x4bcbcd0() {
   return (neuron0x4bce260()*-0.14063);
}

double nnTrainedchi110_ECAL::synapse0x4bcf9c0() {
   return (neuron0x4bce5a0()*0.0529157);
}

double nnTrainedchi110_ECAL::synapse0x4bcb080() {
   return (neuron0x4bce8e0()*-0.156779);
}

double nnTrainedchi110_ECAL::synapse0x4bcbee0() {
   return (neuron0x4bcec20()*0.636041);
}

double nnTrainedchi110_ECAL::synapse0x4bca400() {
   return (neuron0x4d996a0()*-0.180155);
}

double nnTrainedchi110_ECAL::synapse0x4d94440() {
   return (neuron0x4bca450()*-0.159499);
}

double nnTrainedchi110_ECAL::synapse0x4d95a00() {
   return (neuron0x4bca790()*-1.38039);
}

double nnTrainedchi110_ECAL::synapse0x4d95a40() {
   return (neuron0x4bcaad0()*0.250718);
}

double nnTrainedchi110_ECAL::synapse0x4d95a80() {
   return (neuron0x4bcae10()*-0.49879);
}

double nnTrainedchi110_ECAL::synapse0x4d95ac0() {
   return (neuron0x4bcdf20()*0.181588);
}

double nnTrainedchi110_ECAL::synapse0x4d95b00() {
   return (neuron0x4bce260()*-0.15057);
}

double nnTrainedchi110_ECAL::synapse0x4d95b40() {
   return (neuron0x4bce5a0()*-0.394328);
}

double nnTrainedchi110_ECAL::synapse0x4d95b80() {
   return (neuron0x4bce8e0()*-0.127979);
}

double nnTrainedchi110_ECAL::synapse0x4d95bc0() {
   return (neuron0x4bcec20()*1.08581);
}

double nnTrainedchi110_ECAL::synapse0x4d95f40() {
   return (neuron0x4d92e10()*2.23819);
}

double nnTrainedchi110_ECAL::synapse0x4d95f80() {
   return (neuron0x4d932c0()*-1.24172);
}

double nnTrainedchi110_ECAL::synapse0x4d95fc0() {
   return (neuron0x4d938d0()*2.32846);
}

double nnTrainedchi110_ECAL::synapse0x4d96000() {
   return (neuron0x4d93e90()*0.158577);
}

double nnTrainedchi110_ECAL::synapse0x4d96040() {
   return (neuron0x4d94560()*-0.240992);
}

double nnTrainedchi110_ECAL::synapse0x4d96080() {
   return (neuron0x4d94b20()*2.40317);
}

double nnTrainedchi110_ECAL::synapse0x4d960c0() {
   return (neuron0x4d950e0()*-0.151895);
}

double nnTrainedchi110_ECAL::synapse0x4d96100() {
   return (neuron0x4bca270()*0.168265);
}

double nnTrainedchi110_ECAL::synapse0x4d96480() {
   return (neuron0x4d92e10()*1.44556);
}

double nnTrainedchi110_ECAL::synapse0x4d964c0() {
   return (neuron0x4d932c0()*0.63254);
}

double nnTrainedchi110_ECAL::synapse0x4d96500() {
   return (neuron0x4d938d0()*3.20803);
}

double nnTrainedchi110_ECAL::synapse0x4d96540() {
   return (neuron0x4d93e90()*0.514193);
}

double nnTrainedchi110_ECAL::synapse0x4d96580() {
   return (neuron0x4d94560()*0.806908);
}

double nnTrainedchi110_ECAL::synapse0x4d965c0() {
   return (neuron0x4d94b20()*-0.0142205);
}

double nnTrainedchi110_ECAL::synapse0x4d96600() {
   return (neuron0x4d950e0()*0.300965);
}

double nnTrainedchi110_ECAL::synapse0x4d96640() {
   return (neuron0x4bca270()*0.368975);
}

double nnTrainedchi110_ECAL::synapse0x4d969c0() {
   return (neuron0x4d92e10()*1.5425);
}

double nnTrainedchi110_ECAL::synapse0x4d96a00() {
   return (neuron0x4d932c0()*0.0923484);
}

double nnTrainedchi110_ECAL::synapse0x4d96a40() {
   return (neuron0x4d938d0()*0.160121);
}

double nnTrainedchi110_ECAL::synapse0x4d96a80() {
   return (neuron0x4d93e90()*0.193507);
}

double nnTrainedchi110_ECAL::synapse0x4d96ac0() {
   return (neuron0x4d94560()*-0.00865885);
}

double nnTrainedchi110_ECAL::synapse0x4d96b00() {
   return (neuron0x4d94b20()*1.67029);
}

double nnTrainedchi110_ECAL::synapse0x4d96b40() {
   return (neuron0x4d950e0()*0.20452);
}

double nnTrainedchi110_ECAL::synapse0x4d96b80() {
   return (neuron0x4bca270()*-0.154409);
}

double nnTrainedchi110_ECAL::synapse0x4d96f00() {
   return (neuron0x4d92e10()*1.01415);
}

double nnTrainedchi110_ECAL::synapse0x4d96f40() {
   return (neuron0x4d932c0()*-0.980846);
}

double nnTrainedchi110_ECAL::synapse0x4d96f80() {
   return (neuron0x4d938d0()*1.84063);
}

double nnTrainedchi110_ECAL::synapse0x4d96fc0() {
   return (neuron0x4d93e90()*-0.12291);
}

double nnTrainedchi110_ECAL::synapse0x4d97000() {
   return (neuron0x4d94560()*0.940478);
}

double nnTrainedchi110_ECAL::synapse0x4d97040() {
   return (neuron0x4d94b20()*0.836115);
}

double nnTrainedchi110_ECAL::synapse0x4d97080() {
   return (neuron0x4d950e0()*-0.0258231);
}

double nnTrainedchi110_ECAL::synapse0x4d970c0() {
   return (neuron0x4bca270()*1.38123);
}

double nnTrainedchi110_ECAL::synapse0x4d97440() {
   return (neuron0x4d92e10()*3.35262);
}

double nnTrainedchi110_ECAL::synapse0x4d97480() {
   return (neuron0x4d932c0()*-1.72906);
}

double nnTrainedchi110_ECAL::synapse0x4d974c0() {
   return (neuron0x4d938d0()*7.77471);
}

double nnTrainedchi110_ECAL::synapse0x4d97500() {
   return (neuron0x4d93e90()*-1.26181);
}

double nnTrainedchi110_ECAL::synapse0x4d97540() {
   return (neuron0x4d94560()*2.25101);
}

double nnTrainedchi110_ECAL::synapse0x4d97580() {
   return (neuron0x4d94b20()*0.293971);
}

double nnTrainedchi110_ECAL::synapse0x4d975c0() {
   return (neuron0x4d950e0()*0.797855);
}

double nnTrainedchi110_ECAL::synapse0x4d97600() {
   return (neuron0x4bca270()*1.24746);
}

double nnTrainedchi110_ECAL::synapse0x4d97980() {
   return (neuron0x4d95c00()*-1.41115);
}

double nnTrainedchi110_ECAL::synapse0x4d979c0() {
   return (neuron0x4d96140()*-0.401587);
}

double nnTrainedchi110_ECAL::synapse0x4d97a00() {
   return (neuron0x4d96680()*0.421189);
}

double nnTrainedchi110_ECAL::synapse0x4d97a40() {
   return (neuron0x4d96bc0()*-0.437867);
}

double nnTrainedchi110_ECAL::synapse0x4d97a80() {
   return (neuron0x4d97100()*3.77856);
}

