#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_ECAL.h"
#include <cmath>

double nnTrainedchi110_ECAL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9) {
   input0 = (in0 - 83.3777)/163.911;
   input1 = (in1 - 8.25678)/5.7327;
   input2 = (in2 - 0.654886)/0.271104;
   input3 = (in3 - 3.17374e-310)/1;
   input4 = (in4 - 0)/1;
   input5 = (in5 - 0.999775)/0.000932553;
   input6 = (in6 - 6.94091e-310)/1;
   input7 = (in7 - 6.94091e-310)/1;
   input8 = (in8 - 6.56637e-314)/1;
   input9 = (in9 - 2.1875)/1.66013;
   switch(index) {
     case 0:
         return neuron0x3a38d30();
     default:
         return 0.;
   }
}

double nnTrainedchi110_ECAL::Value(int index, double* input) {
   input0 = (input[0] - 83.3777)/163.911;
   input1 = (input[1] - 8.25678)/5.7327;
   input2 = (input[2] - 0.654886)/0.271104;
   input3 = (input[3] - 3.17374e-310)/1;
   input4 = (input[4] - 0)/1;
   input5 = (input[5] - 0.999775)/0.000932553;
   input6 = (input[6] - 6.94091e-310)/1;
   input7 = (input[7] - 6.94091e-310)/1;
   input8 = (input[8] - 6.56637e-314)/1;
   input9 = (input[9] - 2.1875)/1.66013;
   switch(index) {
     case 0:
         return neuron0x3a38d30();
     default:
         return 0.;
   }
}

double nnTrainedchi110_ECAL::neuron0x3a3ad90() {
   return input0;
}

double nnTrainedchi110_ECAL::neuron0x3a64d40() {
   return input1;
}

double nnTrainedchi110_ECAL::neuron0x3a65080() {
   return input2;
}

double nnTrainedchi110_ECAL::neuron0x3a653c0() {
   return input3;
}

double nnTrainedchi110_ECAL::neuron0x3a65700() {
   return input4;
}

double nnTrainedchi110_ECAL::neuron0x3a68810() {
   return input5;
}

double nnTrainedchi110_ECAL::neuron0x3a68b50() {
   return input6;
}

double nnTrainedchi110_ECAL::neuron0x3a68e90() {
   return input7;
}

double nnTrainedchi110_ECAL::neuron0x3a691d0() {
   return input8;
}

double nnTrainedchi110_ECAL::neuron0x3a69510() {
   return input9;
}

double nnTrainedchi110_ECAL::input0x3a34500() {
   double input = -0.638493;
   input += synapse0x3a3ad50();
   input += synapse0x3a65ae0();
   input += synapse0x3a347b0();
   input += synapse0x3a347f0();
   input += synapse0x3a34830();
   input += synapse0x3a34870();
   input += synapse0x3a348b0();
   input += synapse0x3a348f0();
   input += synapse0x3a34930();
   input += synapse0x3a34970();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3a34500() {
   double input = input0x3a34500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x3a349b0() {
   double input = 0.796703;
   input += synapse0x3a34cf0();
   input += synapse0x3a34d30();
   input += synapse0x3a34d70();
   input += synapse0x3a34db0();
   input += synapse0x3a34df0();
   input += synapse0x3a34e30();
   input += synapse0x3a34e70();
   input += synapse0x3a65920();
   input += synapse0x3a62f10();
   input += synapse0x3a62f50();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3a349b0() {
   double input = input0x3a349b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x3a34fc0() {
   double input = 1.79146;
   input += synapse0x3a35300();
   input += synapse0x3a35340();
   input += synapse0x3a35380();
   input += synapse0x3a353c0();
   input += synapse0x3a35400();
   input += synapse0x3a35440();
   input += synapse0x3a35480();
   input += synapse0x3a354c0();
   input += synapse0x3a35500();
   input += synapse0x3a35540();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3a34fc0() {
   double input = input0x3a34fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x3a35580() {
   double input = 2.41189;
   input += synapse0x3a358c0();
   input += synapse0x3a35900();
   input += synapse0x3a35940();
   input += synapse0x3a34eb0();
   input += synapse0x3a34ef0();
   input += synapse0x3a34f30();
   input += synapse0x3a34f70();
   input += synapse0x3a35b90();
   input += synapse0x3a35bd0();
   input += synapse0x3a35c10();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3a35580() {
   double input = input0x3a35580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x3a35c50() {
   double input = 0.216164;
   input += synapse0x3a35f90();
   input += synapse0x3a35fd0();
   input += synapse0x3a36010();
   input += synapse0x3a36050();
   input += synapse0x3a36090();
   input += synapse0x3a360d0();
   input += synapse0x3a36110();
   input += synapse0x3a36150();
   input += synapse0x3a36190();
   input += synapse0x3a361d0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3a35c50() {
   double input = input0x3a35c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x3a36210() {
   double input = 2.61616;
   input += synapse0x3a36550();
   input += synapse0x3a36590();
   input += synapse0x3a365d0();
   input += synapse0x3a36610();
   input += synapse0x3a36650();
   input += synapse0x3a36690();
   input += synapse0x3a366d0();
   input += synapse0x3a36710();
   input += synapse0x3a36750();
   input += synapse0x3a36790();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3a36210() {
   double input = input0x3a36210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x3a367d0() {
   double input = -0.881461;
   input += synapse0x3a62d60();
   input += synapse0x3a62da0();
   input += synapse0x3a36c20();
   input += synapse0x3a36c60();
   input += synapse0x3a36ca0();
   input += synapse0x3a3afb0();
   input += synapse0x3a665c0();
   input += synapse0x3a6a2b0();
   input += synapse0x3a65970();
   input += synapse0x3a667d0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3a367d0() {
   double input = input0x3a367d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x3a64b60() {
   double input = 6.85708;
   input += synapse0x3a64cf0();
   input += synapse0x3a35b30();
   input += synapse0x3a370f0();
   input += synapse0x3a37130();
   input += synapse0x3a37170();
   input += synapse0x3a371b0();
   input += synapse0x3a371f0();
   input += synapse0x3a37230();
   input += synapse0x3a37270();
   input += synapse0x3a372b0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3a64b60() {
   double input = input0x3a64b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x3a372f0() {
   double input = -0.914641;
   input += synapse0x3a37630();
   input += synapse0x3a37670();
   input += synapse0x3a376b0();
   input += synapse0x3a376f0();
   input += synapse0x3a37730();
   input += synapse0x3a37770();
   input += synapse0x3a377b0();
   input += synapse0x3a377f0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3a372f0() {
   double input = input0x3a372f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x3a37830() {
   double input = 0.48371;
   input += synapse0x3a37b70();
   input += synapse0x3a37bb0();
   input += synapse0x3a37bf0();
   input += synapse0x3a37c30();
   input += synapse0x3a37c70();
   input += synapse0x3a37cb0();
   input += synapse0x3a37cf0();
   input += synapse0x3a37d30();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3a37830() {
   double input = input0x3a37830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x3a37d70() {
   double input = 0.236599;
   input += synapse0x3a380b0();
   input += synapse0x3a380f0();
   input += synapse0x3a38130();
   input += synapse0x3a38170();
   input += synapse0x3a381b0();
   input += synapse0x3a381f0();
   input += synapse0x3a38230();
   input += synapse0x3a38270();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3a37d70() {
   double input = input0x3a37d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x3a382b0() {
   double input = 0.468244;
   input += synapse0x3a385f0();
   input += synapse0x3a38630();
   input += synapse0x3a38670();
   input += synapse0x3a386b0();
   input += synapse0x3a386f0();
   input += synapse0x3a38730();
   input += synapse0x3a38770();
   input += synapse0x3a387b0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3a382b0() {
   double input = input0x3a382b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x3a387f0() {
   double input = 0.066088;
   input += synapse0x3a38b30();
   input += synapse0x3a38b70();
   input += synapse0x3a38bb0();
   input += synapse0x3a38bf0();
   input += synapse0x3a38c30();
   input += synapse0x3a38c70();
   input += synapse0x3a38cb0();
   input += synapse0x3a38cf0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3a387f0() {
   double input = input0x3a387f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x3a38d30() {
   double input = -0.183698;
   input += synapse0x3a39070();
   input += synapse0x3a390b0();
   input += synapse0x3a390f0();
   input += synapse0x3a39130();
   input += synapse0x3a39170();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3a38d30() {
   double input = input0x3a38d30();
   return (input * 1)+0;
}

double nnTrainedchi110_ECAL::synapse0x3a3ad50() {
   return (neuron0x3a3ad90()*-1.17365);
}

double nnTrainedchi110_ECAL::synapse0x3a65ae0() {
   return (neuron0x3a64d40()*-1.74302);
}

double nnTrainedchi110_ECAL::synapse0x3a347b0() {
   return (neuron0x3a65080()*-0.841726);
}

double nnTrainedchi110_ECAL::synapse0x3a347f0() {
   return (neuron0x3a653c0()*0.234833);
}

double nnTrainedchi110_ECAL::synapse0x3a34830() {
   return (neuron0x3a65700()*0.132214);
}

double nnTrainedchi110_ECAL::synapse0x3a34870() {
   return (neuron0x3a68810()*-0.0486467);
}

double nnTrainedchi110_ECAL::synapse0x3a348b0() {
   return (neuron0x3a68b50()*-0.373467);
}

double nnTrainedchi110_ECAL::synapse0x3a348f0() {
   return (neuron0x3a68e90()*0.0656327);
}

double nnTrainedchi110_ECAL::synapse0x3a34930() {
   return (neuron0x3a691d0()*0.365813);
}

double nnTrainedchi110_ECAL::synapse0x3a34970() {
   return (neuron0x3a69510()*-2.37735);
}

double nnTrainedchi110_ECAL::synapse0x3a34cf0() {
   return (neuron0x3a3ad90()*-1.01112);
}

double nnTrainedchi110_ECAL::synapse0x3a34d30() {
   return (neuron0x3a64d40()*0.472907);
}

double nnTrainedchi110_ECAL::synapse0x3a34d70() {
   return (neuron0x3a65080()*2.46809);
}

double nnTrainedchi110_ECAL::synapse0x3a34db0() {
   return (neuron0x3a653c0()*-0.496686);
}

double nnTrainedchi110_ECAL::synapse0x3a34df0() {
   return (neuron0x3a65700()*0.134374);
}

double nnTrainedchi110_ECAL::synapse0x3a34e30() {
   return (neuron0x3a68810()*0.133476);
}

double nnTrainedchi110_ECAL::synapse0x3a34e70() {
   return (neuron0x3a68b50()*-0.354863);
}

double nnTrainedchi110_ECAL::synapse0x3a65920() {
   return (neuron0x3a68e90()*-0.0381062);
}

double nnTrainedchi110_ECAL::synapse0x3a62f10() {
   return (neuron0x3a691d0()*0.116986);
}

double nnTrainedchi110_ECAL::synapse0x3a62f50() {
   return (neuron0x3a69510()*2.88192);
}

double nnTrainedchi110_ECAL::synapse0x3a35300() {
   return (neuron0x3a3ad90()*-4.52596);
}

double nnTrainedchi110_ECAL::synapse0x3a35340() {
   return (neuron0x3a64d40()*-0.144214);
}

double nnTrainedchi110_ECAL::synapse0x3a35380() {
   return (neuron0x3a65080()*-1.50191);
}

double nnTrainedchi110_ECAL::synapse0x3a353c0() {
   return (neuron0x3a653c0()*-0.460749);
}

double nnTrainedchi110_ECAL::synapse0x3a35400() {
   return (neuron0x3a65700()*0.228353);
}

double nnTrainedchi110_ECAL::synapse0x3a35440() {
   return (neuron0x3a68810()*0.4346);
}

double nnTrainedchi110_ECAL::synapse0x3a35480() {
   return (neuron0x3a68b50()*-0.359148);
}

double nnTrainedchi110_ECAL::synapse0x3a354c0() {
   return (neuron0x3a68e90()*0.319108);
}

double nnTrainedchi110_ECAL::synapse0x3a35500() {
   return (neuron0x3a691d0()*0.228229);
}

double nnTrainedchi110_ECAL::synapse0x3a35540() {
   return (neuron0x3a69510()*-2.86694);
}

double nnTrainedchi110_ECAL::synapse0x3a358c0() {
   return (neuron0x3a3ad90()*2.38405);
}

double nnTrainedchi110_ECAL::synapse0x3a35900() {
   return (neuron0x3a64d40()*-0.0964164);
}

double nnTrainedchi110_ECAL::synapse0x3a35940() {
   return (neuron0x3a65080()*-1.54835);
}

double nnTrainedchi110_ECAL::synapse0x3a34eb0() {
   return (neuron0x3a653c0()*-0.415539);
}

double nnTrainedchi110_ECAL::synapse0x3a34ef0() {
   return (neuron0x3a65700()*-0.147283);
}

double nnTrainedchi110_ECAL::synapse0x3a34f30() {
   return (neuron0x3a68810()*0.499492);
}

double nnTrainedchi110_ECAL::synapse0x3a34f70() {
   return (neuron0x3a68b50()*-0.170841);
}

double nnTrainedchi110_ECAL::synapse0x3a35b90() {
   return (neuron0x3a68e90()*-0.0619682);
}

double nnTrainedchi110_ECAL::synapse0x3a35bd0() {
   return (neuron0x3a691d0()*0.171482);
}

double nnTrainedchi110_ECAL::synapse0x3a35c10() {
   return (neuron0x3a69510()*-3.10752);
}

double nnTrainedchi110_ECAL::synapse0x3a35f90() {
   return (neuron0x3a3ad90()*-0.169125);
}

double nnTrainedchi110_ECAL::synapse0x3a35fd0() {
   return (neuron0x3a64d40()*-0.377892);
}

double nnTrainedchi110_ECAL::synapse0x3a36010() {
   return (neuron0x3a65080()*-3.1584);
}

double nnTrainedchi110_ECAL::synapse0x3a36050() {
   return (neuron0x3a653c0()*-0.226469);
}

double nnTrainedchi110_ECAL::synapse0x3a36090() {
   return (neuron0x3a65700()*0.255779);
}

double nnTrainedchi110_ECAL::synapse0x3a360d0() {
   return (neuron0x3a68810()*0.636838);
}

double nnTrainedchi110_ECAL::synapse0x3a36110() {
   return (neuron0x3a68b50()*-0.267354);
}

double nnTrainedchi110_ECAL::synapse0x3a36150() {
   return (neuron0x3a68e90()*0.361157);
}

double nnTrainedchi110_ECAL::synapse0x3a36190() {
   return (neuron0x3a691d0()*-0.326856);
}

double nnTrainedchi110_ECAL::synapse0x3a361d0() {
   return (neuron0x3a69510()*-1.70168);
}

double nnTrainedchi110_ECAL::synapse0x3a36550() {
   return (neuron0x3a3ad90()*-3.36927);
}

double nnTrainedchi110_ECAL::synapse0x3a36590() {
   return (neuron0x3a64d40()*-0.0422729);
}

double nnTrainedchi110_ECAL::synapse0x3a365d0() {
   return (neuron0x3a65080()*-2.2853);
}

double nnTrainedchi110_ECAL::synapse0x3a36610() {
   return (neuron0x3a653c0()*0.286369);
}

double nnTrainedchi110_ECAL::synapse0x3a36650() {
   return (neuron0x3a65700()*-0.33873);
}

double nnTrainedchi110_ECAL::synapse0x3a36690() {
   return (neuron0x3a68810()*-0.643429);
}

double nnTrainedchi110_ECAL::synapse0x3a366d0() {
   return (neuron0x3a68b50()*0.137598);
}

double nnTrainedchi110_ECAL::synapse0x3a36710() {
   return (neuron0x3a68e90()*0.32946);
}

double nnTrainedchi110_ECAL::synapse0x3a36750() {
   return (neuron0x3a691d0()*0.185498);
}

double nnTrainedchi110_ECAL::synapse0x3a36790() {
   return (neuron0x3a69510()*-2.1654);
}

double nnTrainedchi110_ECAL::synapse0x3a62d60() {
   return (neuron0x3a3ad90()*-1.2728);
}

double nnTrainedchi110_ECAL::synapse0x3a62da0() {
   return (neuron0x3a64d40()*0.317094);
}

double nnTrainedchi110_ECAL::synapse0x3a36c20() {
   return (neuron0x3a65080()*2.23633);
}

double nnTrainedchi110_ECAL::synapse0x3a36c60() {
   return (neuron0x3a653c0()*-0.264739);
}

double nnTrainedchi110_ECAL::synapse0x3a36ca0() {
   return (neuron0x3a65700()*-0.252868);
}

double nnTrainedchi110_ECAL::synapse0x3a3afb0() {
   return (neuron0x3a68810()*-1.23416);
}

double nnTrainedchi110_ECAL::synapse0x3a665c0() {
   return (neuron0x3a68b50()*0.392331);
}

double nnTrainedchi110_ECAL::synapse0x3a6a2b0() {
   return (neuron0x3a68e90()*0.277607);
}

double nnTrainedchi110_ECAL::synapse0x3a65970() {
   return (neuron0x3a691d0()*-0.380539);
}

double nnTrainedchi110_ECAL::synapse0x3a667d0() {
   return (neuron0x3a69510()*3.7966);
}

double nnTrainedchi110_ECAL::synapse0x3a64cf0() {
   return (neuron0x3a3ad90()*-0.0297466);
}

double nnTrainedchi110_ECAL::synapse0x3a35b30() {
   return (neuron0x3a64d40()*-0.0241213);
}

double nnTrainedchi110_ECAL::synapse0x3a370f0() {
   return (neuron0x3a65080()*-5.9931);
}

double nnTrainedchi110_ECAL::synapse0x3a37130() {
   return (neuron0x3a653c0()*0.0751248);
}

double nnTrainedchi110_ECAL::synapse0x3a37170() {
   return (neuron0x3a65700()*-0.196369);
}

double nnTrainedchi110_ECAL::synapse0x3a371b0() {
   return (neuron0x3a68810()*0.257567);
}

double nnTrainedchi110_ECAL::synapse0x3a371f0() {
   return (neuron0x3a68b50()*-0.0476588);
}

double nnTrainedchi110_ECAL::synapse0x3a37230() {
   return (neuron0x3a68e90()*-0.0791231);
}

double nnTrainedchi110_ECAL::synapse0x3a37270() {
   return (neuron0x3a691d0()*-0.174772);
}

double nnTrainedchi110_ECAL::synapse0x3a372b0() {
   return (neuron0x3a69510()*0.117336);
}

double nnTrainedchi110_ECAL::synapse0x3a37630() {
   return (neuron0x3a34500()*-0.851949);
}

double nnTrainedchi110_ECAL::synapse0x3a37670() {
   return (neuron0x3a349b0()*-0.906702);
}

double nnTrainedchi110_ECAL::synapse0x3a376b0() {
   return (neuron0x3a34fc0()*-0.822358);
}

double nnTrainedchi110_ECAL::synapse0x3a376f0() {
   return (neuron0x3a35580()*0.0333758);
}

double nnTrainedchi110_ECAL::synapse0x3a37730() {
   return (neuron0x3a35c50()*0.639846);
}

double nnTrainedchi110_ECAL::synapse0x3a37770() {
   return (neuron0x3a36210()*-0.977074);
}

double nnTrainedchi110_ECAL::synapse0x3a377b0() {
   return (neuron0x3a367d0()*-0.178401);
}

double nnTrainedchi110_ECAL::synapse0x3a377f0() {
   return (neuron0x3a64b60()*-1.63927);
}

double nnTrainedchi110_ECAL::synapse0x3a37b70() {
   return (neuron0x3a34500()*-0.122813);
}

double nnTrainedchi110_ECAL::synapse0x3a37bb0() {
   return (neuron0x3a349b0()*0.0394281);
}

double nnTrainedchi110_ECAL::synapse0x3a37bf0() {
   return (neuron0x3a34fc0()*0.520076);
}

double nnTrainedchi110_ECAL::synapse0x3a37c30() {
   return (neuron0x3a35580()*-1.56548);
}

double nnTrainedchi110_ECAL::synapse0x3a37c70() {
   return (neuron0x3a35c50()*-0.490874);
}

double nnTrainedchi110_ECAL::synapse0x3a37cb0() {
   return (neuron0x3a36210()*0.311967);
}

double nnTrainedchi110_ECAL::synapse0x3a37cf0() {
   return (neuron0x3a367d0()*-0.400148);
}

double nnTrainedchi110_ECAL::synapse0x3a37d30() {
   return (neuron0x3a64b60()*0.514724);
}

double nnTrainedchi110_ECAL::synapse0x3a380b0() {
   return (neuron0x3a34500()*0.435936);
}

double nnTrainedchi110_ECAL::synapse0x3a380f0() {
   return (neuron0x3a349b0()*1.14284);
}

double nnTrainedchi110_ECAL::synapse0x3a38130() {
   return (neuron0x3a34fc0()*-0.0181104);
}

double nnTrainedchi110_ECAL::synapse0x3a38170() {
   return (neuron0x3a35580()*-0.489993);
}

double nnTrainedchi110_ECAL::synapse0x3a381b0() {
   return (neuron0x3a35c50()*0.485888);
}

double nnTrainedchi110_ECAL::synapse0x3a381f0() {
   return (neuron0x3a36210()*0.286355);
}

double nnTrainedchi110_ECAL::synapse0x3a38230() {
   return (neuron0x3a367d0()*1.22009);
}

double nnTrainedchi110_ECAL::synapse0x3a38270() {
   return (neuron0x3a64b60()*0.230879);
}

double nnTrainedchi110_ECAL::synapse0x3a385f0() {
   return (neuron0x3a34500()*0.996685);
}

double nnTrainedchi110_ECAL::synapse0x3a38630() {
   return (neuron0x3a349b0()*-0.442638);
}

double nnTrainedchi110_ECAL::synapse0x3a38670() {
   return (neuron0x3a34fc0()*1.17714);
}

double nnTrainedchi110_ECAL::synapse0x3a386b0() {
   return (neuron0x3a35580()*1.14998);
}

double nnTrainedchi110_ECAL::synapse0x3a386f0() {
   return (neuron0x3a35c50()*-0.28114);
}

double nnTrainedchi110_ECAL::synapse0x3a38730() {
   return (neuron0x3a36210()*1.25437);
}

double nnTrainedchi110_ECAL::synapse0x3a38770() {
   return (neuron0x3a367d0()*0.634543);
}

double nnTrainedchi110_ECAL::synapse0x3a387b0() {
   return (neuron0x3a64b60()*0.882706);
}

double nnTrainedchi110_ECAL::synapse0x3a38b30() {
   return (neuron0x3a34500()*0.899722);
}

double nnTrainedchi110_ECAL::synapse0x3a38b70() {
   return (neuron0x3a349b0()*-1.79912);
}

double nnTrainedchi110_ECAL::synapse0x3a38bb0() {
   return (neuron0x3a34fc0()*3.19024);
}

double nnTrainedchi110_ECAL::synapse0x3a38bf0() {
   return (neuron0x3a35580()*2.59141);
}

double nnTrainedchi110_ECAL::synapse0x3a38c30() {
   return (neuron0x3a35c50()*0.816543);
}

double nnTrainedchi110_ECAL::synapse0x3a38c70() {
   return (neuron0x3a36210()*3.36822);
}

double nnTrainedchi110_ECAL::synapse0x3a38cb0() {
   return (neuron0x3a367d0()*-4.04418);
}

double nnTrainedchi110_ECAL::synapse0x3a38cf0() {
   return (neuron0x3a64b60()*8.20168);
}

double nnTrainedchi110_ECAL::synapse0x3a39070() {
   return (neuron0x3a372f0()*0.22828);
}

double nnTrainedchi110_ECAL::synapse0x3a390b0() {
   return (neuron0x3a37830()*-0.331248);
}

double nnTrainedchi110_ECAL::synapse0x3a390f0() {
   return (neuron0x3a37d70()*0.331996);
}

double nnTrainedchi110_ECAL::synapse0x3a39130() {
   return (neuron0x3a382b0()*-0.111267);
}

double nnTrainedchi110_ECAL::synapse0x3a39170() {
   return (neuron0x3a387f0()*1.16886);
}

