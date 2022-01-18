#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EXTMUID/SOURCES/july_28_2021_working_NN_version/nnTrainedchi110_ECAL.h"
#include <cmath>

double nnTrainedchi110_ECAL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9) {
   input0 = (in0 - 52.7019)/87.8199;
   input1 = (in1 - 8.07199)/4.79688;
   input2 = (in2 - 0.675565)/0.257578;
   input3 = (in3 - 3.17661e-310)/1;
   input4 = (in4 - 0)/1;
   input5 = (in5 - 0.999739)/0.0017883;
   input6 = (in6 - 6.93908e-310)/1;
   input7 = (in7 - 6.94012e-310)/1;
   input8 = (in8 - 6.72187e-314)/1;
   input9 = (in9 - 2.12555)/1.39013;
   switch(index) {
     case 0:
         return neuron0x4dbea70();
     default:
         return 0.;
   }
}

double nnTrainedchi110_ECAL::Value(int index, double* input) {
   input0 = (input[0] - 52.7019)/87.8199;
   input1 = (input[1] - 8.07199)/4.79688;
   input2 = (input[2] - 0.675565)/0.257578;
   input3 = (input[3] - 3.17661e-310)/1;
   input4 = (input[4] - 0)/1;
   input5 = (input[5] - 0.999739)/0.0017883;
   input6 = (input[6] - 6.93908e-310)/1;
   input7 = (input[7] - 6.94012e-310)/1;
   input8 = (input[8] - 6.72187e-314)/1;
   input9 = (input[9] - 2.12555)/1.39013;
   switch(index) {
     case 0:
         return neuron0x4dbea70();
     default:
         return 0.;
   }
}

double nnTrainedchi110_ECAL::neuron0x4d56380() {
   return input0;
}

double nnTrainedchi110_ECAL::neuron0x4d56600() {
   return input1;
}

double nnTrainedchi110_ECAL::neuron0x4d56090() {
   return input2;
}

double nnTrainedchi110_ECAL::neuron0x4dc3580() {
   return input3;
}

double nnTrainedchi110_ECAL::neuron0x4dc38c0() {
   return input4;
}

double nnTrainedchi110_ECAL::neuron0x4dc3c00() {
   return input5;
}

double nnTrainedchi110_ECAL::neuron0x4dc3f40() {
   return input6;
}

double nnTrainedchi110_ECAL::neuron0x4dc4280() {
   return input7;
}

double nnTrainedchi110_ECAL::neuron0x4dc45c0() {
   return input8;
}

double nnTrainedchi110_ECAL::neuron0x4dc4900() {
   return input9;
}

double nnTrainedchi110_ECAL::input0x4d52b30() {
   double input = -0.921569;
   input += synapse0x4d565c0();
   input += synapse0x4d55fc0();
   input += synapse0x4d52de0();
   input += synapse0x4d52e20();
   input += synapse0x4d52e60();
   input += synapse0x4d52ea0();
   input += synapse0x4d52ee0();
   input += synapse0x4d52f20();
   input += synapse0x4d52f60();
   input += synapse0x4d52fa0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d52b30() {
   double input = input0x4d52b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d52fe0() {
   double input = 0.629483;
   input += synapse0x4d53320();
   input += synapse0x4d53360();
   input += synapse0x4d533a0();
   input += synapse0x4d533e0();
   input += synapse0x4d53420();
   input += synapse0x4d53460();
   input += synapse0x4d534a0();
   input += synapse0x4d56820();
   input += synapse0x4d56860();
   input += synapse0x4d4fe20();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d52fe0() {
   double input = input0x4d52fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d535f0() {
   double input = 4.03888;
   input += synapse0x4d53930();
   input += synapse0x4d53970();
   input += synapse0x4d539b0();
   input += synapse0x4d539f0();
   input += synapse0x4d53a30();
   input += synapse0x4d53a70();
   input += synapse0x4d53ab0();
   input += synapse0x4d53af0();
   input += synapse0x4d53b30();
   input += synapse0x4d53b70();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d535f0() {
   double input = input0x4d535f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d53bb0() {
   double input = -2.17407;
   input += synapse0x4d53ef0();
   input += synapse0x4d53f30();
   input += synapse0x4d53f70();
   input += synapse0x4d4fe60();
   input += synapse0x4dc4c40();
   input += synapse0x4dc4c80();
   input += synapse0x4dc4cc0();
   input += synapse0x4d534e0();
   input += synapse0x4d53520();
   input += synapse0x4d53560();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d53bb0() {
   double input = input0x4d53bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d541c0() {
   double input = 1.93124;
   input += synapse0x4d54500();
   input += synapse0x4d54540();
   input += synapse0x4d54580();
   input += synapse0x4d545c0();
   input += synapse0x4d54600();
   input += synapse0x4d54640();
   input += synapse0x4d54680();
   input += synapse0x4d546c0();
   input += synapse0x4d54700();
   input += synapse0x4d54740();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d541c0() {
   double input = input0x4d541c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d54780() {
   double input = 1.71565;
   input += synapse0x4d54ac0();
   input += synapse0x4d54b00();
   input += synapse0x4d54b40();
   input += synapse0x4d54b80();
   input += synapse0x4d54bc0();
   input += synapse0x4d54c00();
   input += synapse0x4d54c40();
   input += synapse0x4d54c80();
   input += synapse0x4d54cc0();
   input += synapse0x4d54d00();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d54780() {
   double input = input0x4d54780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d54d40() {
   double input = 0.399827;
   input += synapse0x4d535a0();
   input += synapse0x4d4fc70();
   input += synapse0x4d4fcb0();
   input += synapse0x4d55190();
   input += synapse0x4d551d0();
   input += synapse0x4d52580();
   input += synapse0x4d57360();
   input += synapse0x4d55f50();
   input += synapse0x4d52820();
   input += synapse0x4d52860();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d54d40() {
   double input = input0x4d54d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4d55620() {
   double input = -1.12795;
   input += synapse0x4d529c0();
   input += synapse0x4d54040();
   input += synapse0x4d54080();
   input += synapse0x4d540c0();
   input += synapse0x4d54100();
   input += synapse0x4d54140();
   input += synapse0x4d54180();
   input += synapse0x4d557b0();
   input += synapse0x4d557f0();
   input += synapse0x4dbcff0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4d55620() {
   double input = input0x4d55620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4dbd030() {
   double input = -0.434002;
   input += synapse0x4dbd370();
   input += synapse0x4dbd3b0();
   input += synapse0x4dbd3f0();
   input += synapse0x4dbd430();
   input += synapse0x4dbd470();
   input += synapse0x4dbd4b0();
   input += synapse0x4dbd4f0();
   input += synapse0x4dbd530();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4dbd030() {
   double input = input0x4dbd030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4dbd570() {
   double input = 0.49888;
   input += synapse0x4dbd8b0();
   input += synapse0x4dbd8f0();
   input += synapse0x4dbd930();
   input += synapse0x4dbd970();
   input += synapse0x4dbd9b0();
   input += synapse0x4dbd9f0();
   input += synapse0x4dbda30();
   input += synapse0x4dbda70();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4dbd570() {
   double input = input0x4dbd570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4dbdab0() {
   double input = -0.226067;
   input += synapse0x4dbddf0();
   input += synapse0x4dbde30();
   input += synapse0x4dbde70();
   input += synapse0x4dbdeb0();
   input += synapse0x4dbdef0();
   input += synapse0x4dbdf30();
   input += synapse0x4dbdf70();
   input += synapse0x4dbdfb0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4dbdab0() {
   double input = input0x4dbdab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4dbdff0() {
   double input = 1.20583;
   input += synapse0x4dbe330();
   input += synapse0x4dbe370();
   input += synapse0x4dbe3b0();
   input += synapse0x4dbe3f0();
   input += synapse0x4dbe430();
   input += synapse0x4dbe470();
   input += synapse0x4dbe4b0();
   input += synapse0x4dbe4f0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4dbdff0() {
   double input = input0x4dbdff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4dbe530() {
   double input = 1.79737;
   input += synapse0x4dbe870();
   input += synapse0x4dbe8b0();
   input += synapse0x4dbe8f0();
   input += synapse0x4dbe930();
   input += synapse0x4dbe970();
   input += synapse0x4dbe9b0();
   input += synapse0x4dbe9f0();
   input += synapse0x4dbea30();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4dbe530() {
   double input = input0x4dbe530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4dbea70() {
   double input = 0.92704;
   input += synapse0x4dbedb0();
   input += synapse0x4dbedf0();
   input += synapse0x4dbee30();
   input += synapse0x4dbee70();
   input += synapse0x4dbeeb0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4dbea70() {
   double input = input0x4dbea70();
   return (input * 1)+0;
}

double nnTrainedchi110_ECAL::synapse0x4d565c0() {
   return (neuron0x4d56380()*1.08905);
}

double nnTrainedchi110_ECAL::synapse0x4d55fc0() {
   return (neuron0x4d56600()*-0.0675825);
}

double nnTrainedchi110_ECAL::synapse0x4d52de0() {
   return (neuron0x4d56090()*2.01884);
}

double nnTrainedchi110_ECAL::synapse0x4d52e20() {
   return (neuron0x4dc3580()*-0.0110966);
}

double nnTrainedchi110_ECAL::synapse0x4d52e60() {
   return (neuron0x4dc38c0()*-0.218762);
}

double nnTrainedchi110_ECAL::synapse0x4d52ea0() {
   return (neuron0x4dc3c00()*-1.06243);
}

double nnTrainedchi110_ECAL::synapse0x4d52ee0() {
   return (neuron0x4dc3f40()*-0.39474);
}

double nnTrainedchi110_ECAL::synapse0x4d52f20() {
   return (neuron0x4dc4280()*-0.250233);
}

double nnTrainedchi110_ECAL::synapse0x4d52f60() {
   return (neuron0x4dc45c0()*-0.248268);
}

double nnTrainedchi110_ECAL::synapse0x4d52fa0() {
   return (neuron0x4dc4900()*0.296449);
}

double nnTrainedchi110_ECAL::synapse0x4d53320() {
   return (neuron0x4d56380()*1.81472);
}

double nnTrainedchi110_ECAL::synapse0x4d53360() {
   return (neuron0x4d56600()*-0.0756763);
}

double nnTrainedchi110_ECAL::synapse0x4d533a0() {
   return (neuron0x4d56090()*-0.723472);
}

double nnTrainedchi110_ECAL::synapse0x4d533e0() {
   return (neuron0x4dc3580()*0.249416);
}

double nnTrainedchi110_ECAL::synapse0x4d53420() {
   return (neuron0x4dc38c0()*-0.361215);
}

double nnTrainedchi110_ECAL::synapse0x4d53460() {
   return (neuron0x4dc3c00()*-0.447812);
}

double nnTrainedchi110_ECAL::synapse0x4d534a0() {
   return (neuron0x4dc3f40()*0.261256);
}

double nnTrainedchi110_ECAL::synapse0x4d56820() {
   return (neuron0x4dc4280()*-0.335991);
}

double nnTrainedchi110_ECAL::synapse0x4d56860() {
   return (neuron0x4dc45c0()*-0.380971);
}

double nnTrainedchi110_ECAL::synapse0x4d4fe20() {
   return (neuron0x4dc4900()*0.170955);
}

double nnTrainedchi110_ECAL::synapse0x4d53930() {
   return (neuron0x4d56380()*-1.37442);
}

double nnTrainedchi110_ECAL::synapse0x4d53970() {
   return (neuron0x4d56600()*0.000963421);
}

double nnTrainedchi110_ECAL::synapse0x4d539b0() {
   return (neuron0x4d56090()*-4.24443);
}

double nnTrainedchi110_ECAL::synapse0x4d539f0() {
   return (neuron0x4dc3580()*0.074937);
}

double nnTrainedchi110_ECAL::synapse0x4d53a30() {
   return (neuron0x4dc38c0()*0.061036);
}

double nnTrainedchi110_ECAL::synapse0x4d53a70() {
   return (neuron0x4dc3c00()*0.00196081);
}

double nnTrainedchi110_ECAL::synapse0x4d53ab0() {
   return (neuron0x4dc3f40()*0.22853);
}

double nnTrainedchi110_ECAL::synapse0x4d53af0() {
   return (neuron0x4dc4280()*-0.127179);
}

double nnTrainedchi110_ECAL::synapse0x4d53b30() {
   return (neuron0x4dc45c0()*-0.361691);
}

double nnTrainedchi110_ECAL::synapse0x4d53b70() {
   return (neuron0x4dc4900()*-0.00173983);
}

double nnTrainedchi110_ECAL::synapse0x4d53ef0() {
   return (neuron0x4d56380()*1.32429);
}

double nnTrainedchi110_ECAL::synapse0x4d53f30() {
   return (neuron0x4d56600()*0.516986);
}

double nnTrainedchi110_ECAL::synapse0x4d53f70() {
   return (neuron0x4d56090()*1.04842);
}

double nnTrainedchi110_ECAL::synapse0x4d4fe60() {
   return (neuron0x4dc3580()*-0.0139902);
}

double nnTrainedchi110_ECAL::synapse0x4dc4c40() {
   return (neuron0x4dc38c0()*-0.26366);
}

double nnTrainedchi110_ECAL::synapse0x4dc4c80() {
   return (neuron0x4dc3c00()*0.0688339);
}

double nnTrainedchi110_ECAL::synapse0x4dc4cc0() {
   return (neuron0x4dc3f40()*-0.497324);
}

double nnTrainedchi110_ECAL::synapse0x4d534e0() {
   return (neuron0x4dc4280()*0.17307);
}

double nnTrainedchi110_ECAL::synapse0x4d53520() {
   return (neuron0x4dc45c0()*-0.206791);
}

double nnTrainedchi110_ECAL::synapse0x4d53560() {
   return (neuron0x4dc4900()*0.942916);
}

double nnTrainedchi110_ECAL::synapse0x4d54500() {
   return (neuron0x4d56380()*-4.03519);
}

double nnTrainedchi110_ECAL::synapse0x4d54540() {
   return (neuron0x4d56600()*-0.192246);
}

double nnTrainedchi110_ECAL::synapse0x4d54580() {
   return (neuron0x4d56090()*-0.389409);
}

double nnTrainedchi110_ECAL::synapse0x4d545c0() {
   return (neuron0x4dc3580()*0.429798);
}

double nnTrainedchi110_ECAL::synapse0x4d54600() {
   return (neuron0x4dc38c0()*0.479805);
}

double nnTrainedchi110_ECAL::synapse0x4d54640() {
   return (neuron0x4dc3c00()*1.06561);
}

double nnTrainedchi110_ECAL::synapse0x4d54680() {
   return (neuron0x4dc3f40()*-0.269893);
}

double nnTrainedchi110_ECAL::synapse0x4d546c0() {
   return (neuron0x4dc4280()*0.312395);
}

double nnTrainedchi110_ECAL::synapse0x4d54700() {
   return (neuron0x4dc45c0()*0.482304);
}

double nnTrainedchi110_ECAL::synapse0x4d54740() {
   return (neuron0x4dc4900()*-1.86346);
}

double nnTrainedchi110_ECAL::synapse0x4d54ac0() {
   return (neuron0x4d56380()*1.74613);
}

double nnTrainedchi110_ECAL::synapse0x4d54b00() {
   return (neuron0x4d56600()*0.404878);
}

double nnTrainedchi110_ECAL::synapse0x4d54b40() {
   return (neuron0x4d56090()*0.284657);
}

double nnTrainedchi110_ECAL::synapse0x4d54b80() {
   return (neuron0x4dc3580()*0.34613);
}

double nnTrainedchi110_ECAL::synapse0x4d54bc0() {
   return (neuron0x4dc38c0()*-0.058786);
}

double nnTrainedchi110_ECAL::synapse0x4d54c00() {
   return (neuron0x4dc3c00()*0.817249);
}

double nnTrainedchi110_ECAL::synapse0x4d54c40() {
   return (neuron0x4dc3f40()*0.362191);
}

double nnTrainedchi110_ECAL::synapse0x4d54c80() {
   return (neuron0x4dc4280()*-0.220238);
}

double nnTrainedchi110_ECAL::synapse0x4d54cc0() {
   return (neuron0x4dc45c0()*0.218356);
}

double nnTrainedchi110_ECAL::synapse0x4d54d00() {
   return (neuron0x4dc4900()*0.51762);
}

double nnTrainedchi110_ECAL::synapse0x4d535a0() {
   return (neuron0x4d56380()*-1.53195);
}

double nnTrainedchi110_ECAL::synapse0x4d4fc70() {
   return (neuron0x4d56600()*-0.0123094);
}

double nnTrainedchi110_ECAL::synapse0x4d4fcb0() {
   return (neuron0x4d56090()*-0.826472);
}

double nnTrainedchi110_ECAL::synapse0x4d55190() {
   return (neuron0x4dc3580()*-0.0787365);
}

double nnTrainedchi110_ECAL::synapse0x4d551d0() {
   return (neuron0x4dc38c0()*0.193883);
}

double nnTrainedchi110_ECAL::synapse0x4d52580() {
   return (neuron0x4dc3c00()*-0.437704);
}

double nnTrainedchi110_ECAL::synapse0x4d57360() {
   return (neuron0x4dc3f40()*0.406648);
}

double nnTrainedchi110_ECAL::synapse0x4d55f50() {
   return (neuron0x4dc4280()*0.161506);
}

double nnTrainedchi110_ECAL::synapse0x4d52820() {
   return (neuron0x4dc45c0()*0.394832);
}

double nnTrainedchi110_ECAL::synapse0x4d52860() {
   return (neuron0x4dc4900()*-1.04198);
}

double nnTrainedchi110_ECAL::synapse0x4d529c0() {
   return (neuron0x4d56380()*1.62731);
}

double nnTrainedchi110_ECAL::synapse0x4d54040() {
   return (neuron0x4d56600()*0.487377);
}

double nnTrainedchi110_ECAL::synapse0x4d54080() {
   return (neuron0x4d56090()*0.208932);
}

double nnTrainedchi110_ECAL::synapse0x4d540c0() {
   return (neuron0x4dc3580()*-0.224798);
}

double nnTrainedchi110_ECAL::synapse0x4d54100() {
   return (neuron0x4dc38c0()*0.270732);
}

double nnTrainedchi110_ECAL::synapse0x4d54140() {
   return (neuron0x4dc3c00()*-0.510495);
}

double nnTrainedchi110_ECAL::synapse0x4d54180() {
   return (neuron0x4dc3f40()*0.423453);
}

double nnTrainedchi110_ECAL::synapse0x4d557b0() {
   return (neuron0x4dc4280()*0.465475);
}

double nnTrainedchi110_ECAL::synapse0x4d557f0() {
   return (neuron0x4dc45c0()*-0.335442);
}

double nnTrainedchi110_ECAL::synapse0x4dbcff0() {
   return (neuron0x4dc4900()*1.14443);
}

double nnTrainedchi110_ECAL::synapse0x4dbd370() {
   return (neuron0x4d52b30()*0.622881);
}

double nnTrainedchi110_ECAL::synapse0x4dbd3b0() {
   return (neuron0x4d52fe0()*-0.0792159);
}

double nnTrainedchi110_ECAL::synapse0x4dbd3f0() {
   return (neuron0x4d535f0()*-0.583743);
}

double nnTrainedchi110_ECAL::synapse0x4dbd430() {
   return (neuron0x4d53bb0()*0.882601);
}

double nnTrainedchi110_ECAL::synapse0x4dbd470() {
   return (neuron0x4d541c0()*-0.323408);
}

double nnTrainedchi110_ECAL::synapse0x4dbd4b0() {
   return (neuron0x4d54780()*-0.316364);
}

double nnTrainedchi110_ECAL::synapse0x4dbd4f0() {
   return (neuron0x4d54d40()*-0.438699);
}

double nnTrainedchi110_ECAL::synapse0x4dbd530() {
   return (neuron0x4d55620()*-0.110956);
}

double nnTrainedchi110_ECAL::synapse0x4dbd8b0() {
   return (neuron0x4d52b30()*0.361581);
}

double nnTrainedchi110_ECAL::synapse0x4dbd8f0() {
   return (neuron0x4d52fe0()*0.48716);
}

double nnTrainedchi110_ECAL::synapse0x4dbd930() {
   return (neuron0x4d535f0()*-0.315734);
}

double nnTrainedchi110_ECAL::synapse0x4dbd970() {
   return (neuron0x4d53bb0()*0.0631174);
}

double nnTrainedchi110_ECAL::synapse0x4dbd9b0() {
   return (neuron0x4d541c0()*0.317459);
}

double nnTrainedchi110_ECAL::synapse0x4dbd9f0() {
   return (neuron0x4d54780()*-0.338429);
}

double nnTrainedchi110_ECAL::synapse0x4dbda30() {
   return (neuron0x4d54d40()*-0.278724);
}

double nnTrainedchi110_ECAL::synapse0x4dbda70() {
   return (neuron0x4d55620()*0.260027);
}

double nnTrainedchi110_ECAL::synapse0x4dbddf0() {
   return (neuron0x4d52b30()*0.694344);
}

double nnTrainedchi110_ECAL::synapse0x4dbde30() {
   return (neuron0x4d52fe0()*1.11353);
}

double nnTrainedchi110_ECAL::synapse0x4dbde70() {
   return (neuron0x4d535f0()*-2.06595);
}

double nnTrainedchi110_ECAL::synapse0x4dbdeb0() {
   return (neuron0x4d53bb0()*1.38662);
}

double nnTrainedchi110_ECAL::synapse0x4dbdef0() {
   return (neuron0x4d541c0()*-1.58567);
}

double nnTrainedchi110_ECAL::synapse0x4dbdf30() {
   return (neuron0x4d54780()*-0.378824);
}

double nnTrainedchi110_ECAL::synapse0x4dbdf70() {
   return (neuron0x4d54d40()*-1.35827);
}

double nnTrainedchi110_ECAL::synapse0x4dbdfb0() {
   return (neuron0x4d55620()*-0.467454);
}

double nnTrainedchi110_ECAL::synapse0x4dbe330() {
   return (neuron0x4d52b30()*-2.50016);
}

double nnTrainedchi110_ECAL::synapse0x4dbe370() {
   return (neuron0x4d52fe0()*1.55396);
}

double nnTrainedchi110_ECAL::synapse0x4dbe3b0() {
   return (neuron0x4d535f0()*4.30439);
}

double nnTrainedchi110_ECAL::synapse0x4dbe3f0() {
   return (neuron0x4d53bb0()*-2.30984);
}

double nnTrainedchi110_ECAL::synapse0x4dbe430() {
   return (neuron0x4d541c0()*2.44193);
}

double nnTrainedchi110_ECAL::synapse0x4dbe470() {
   return (neuron0x4d54780()*1.48751);
}

double nnTrainedchi110_ECAL::synapse0x4dbe4b0() {
   return (neuron0x4d54d40()*1.30079);
}

double nnTrainedchi110_ECAL::synapse0x4dbe4f0() {
   return (neuron0x4d55620()*-0.566294);
}

double nnTrainedchi110_ECAL::synapse0x4dbe870() {
   return (neuron0x4d52b30()*-1.06517);
}

double nnTrainedchi110_ECAL::synapse0x4dbe8b0() {
   return (neuron0x4d52fe0()*-1.05431);
}

double nnTrainedchi110_ECAL::synapse0x4dbe8f0() {
   return (neuron0x4d535f0()*1.97777);
}

double nnTrainedchi110_ECAL::synapse0x4dbe930() {
   return (neuron0x4d53bb0()*-2.73051);
}

double nnTrainedchi110_ECAL::synapse0x4dbe970() {
   return (neuron0x4d541c0()*-0.338488);
}

double nnTrainedchi110_ECAL::synapse0x4dbe9b0() {
   return (neuron0x4d54780()*2.17536);
}

double nnTrainedchi110_ECAL::synapse0x4dbe9f0() {
   return (neuron0x4d54d40()*1.73531);
}

double nnTrainedchi110_ECAL::synapse0x4dbea30() {
   return (neuron0x4d55620()*-0.563499);
}

double nnTrainedchi110_ECAL::synapse0x4dbedb0() {
   return (neuron0x4dbd030()*0.0169239);
}

double nnTrainedchi110_ECAL::synapse0x4dbedf0() {
   return (neuron0x4dbd570()*-0.116647);
}

double nnTrainedchi110_ECAL::synapse0x4dbee30() {
   return (neuron0x4dbdab0()*-1.14819);
}

double nnTrainedchi110_ECAL::synapse0x4dbee70() {
   return (neuron0x4dbdff0()*2.70375);
}

double nnTrainedchi110_ECAL::synapse0x4dbeeb0() {
   return (neuron0x4dbe530()*-2.55935);
}

