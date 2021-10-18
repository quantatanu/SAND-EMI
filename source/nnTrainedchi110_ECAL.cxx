#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_ECAL.h"
#include <cmath>

double nnTrainedchi110_ECAL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9) {
   input0 = (in0 - 52.6851)/83.9021;
   input1 = (in1 - 8.07706)/4.7971;
   input2 = (in2 - 0.675967)/0.256234;
   input3 = (in3 - 3.17182e-310)/1;
   input4 = (in4 - 0)/1;
   input5 = (in5 - 0.999733)/0.00183103;
   input6 = (in6 - 6.93712e-310)/1;
   input7 = (in7 - 6.9384e-310)/1;
   input8 = (in8 - 6.71208e-314)/1;
   input9 = (in9 - 2.1285)/1.38749;
   switch(index) {
     case 0:
         return neuron0x40450f0();
     default:
         return 0.;
   }
}

double nnTrainedchi110_ECAL::Value(int index, double* input) {
   input0 = (input[0] - 52.6851)/83.9021;
   input1 = (input[1] - 8.07706)/4.7971;
   input2 = (input[2] - 0.675967)/0.256234;
   input3 = (input[3] - 3.17182e-310)/1;
   input4 = (input[4] - 0)/1;
   input5 = (input[5] - 0.999733)/0.00183103;
   input6 = (input[6] - 6.93712e-310)/1;
   input7 = (input[7] - 6.9384e-310)/1;
   input8 = (input[8] - 6.71208e-314)/1;
   input9 = (input[9] - 2.1285)/1.38749;
   switch(index) {
     case 0:
         return neuron0x40450f0();
     default:
         return 0.;
   }
}

double nnTrainedchi110_ECAL::neuron0x4047150() {
   return input0;
}

double nnTrainedchi110_ECAL::neuron0x3e97820() {
   return input1;
}

double nnTrainedchi110_ECAL::neuron0x3e97b60() {
   return input2;
}

double nnTrainedchi110_ECAL::neuron0x3e97ea0() {
   return input3;
}

double nnTrainedchi110_ECAL::neuron0x3e981e0() {
   return input4;
}

double nnTrainedchi110_ECAL::neuron0x3e9b2f0() {
   return input5;
}

double nnTrainedchi110_ECAL::neuron0x3e9b630() {
   return input6;
}

double nnTrainedchi110_ECAL::neuron0x3e9b970() {
   return input7;
}

double nnTrainedchi110_ECAL::neuron0x3e9bcb0() {
   return input8;
}

double nnTrainedchi110_ECAL::neuron0x3e9bff0() {
   return input9;
}

double nnTrainedchi110_ECAL::input0x40408c0() {
   double input = -3.14071;
   input += synapse0x4047110();
   input += synapse0x3e985c0();
   input += synapse0x4040b70();
   input += synapse0x4040bb0();
   input += synapse0x4040bf0();
   input += synapse0x4040c30();
   input += synapse0x4040c70();
   input += synapse0x4040cb0();
   input += synapse0x4040cf0();
   input += synapse0x4040d30();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x40408c0() {
   double input = input0x40408c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4040d70() {
   double input = -0.748562;
   input += synapse0x40410b0();
   input += synapse0x40410f0();
   input += synapse0x4041130();
   input += synapse0x4041170();
   input += synapse0x40411b0();
   input += synapse0x40411f0();
   input += synapse0x4041230();
   input += synapse0x3e98400();
   input += synapse0x3e959f0();
   input += synapse0x3e95a30();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4040d70() {
   double input = input0x4040d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4041380() {
   double input = -1.02352;
   input += synapse0x40416c0();
   input += synapse0x4041700();
   input += synapse0x4041740();
   input += synapse0x4041780();
   input += synapse0x40417c0();
   input += synapse0x4041800();
   input += synapse0x4041840();
   input += synapse0x4041880();
   input += synapse0x40418c0();
   input += synapse0x4041900();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4041380() {
   double input = input0x4041380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4041940() {
   double input = 0.645255;
   input += synapse0x4041c80();
   input += synapse0x4041cc0();
   input += synapse0x4041d00();
   input += synapse0x4041270();
   input += synapse0x40412b0();
   input += synapse0x40412f0();
   input += synapse0x4041330();
   input += synapse0x4041f50();
   input += synapse0x4041f90();
   input += synapse0x4041fd0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4041940() {
   double input = input0x4041940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4042010() {
   double input = 1.49726;
   input += synapse0x4042350();
   input += synapse0x4042390();
   input += synapse0x40423d0();
   input += synapse0x4042410();
   input += synapse0x4042450();
   input += synapse0x4042490();
   input += synapse0x40424d0();
   input += synapse0x4042510();
   input += synapse0x4042550();
   input += synapse0x4042590();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4042010() {
   double input = input0x4042010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x40425d0() {
   double input = -0.788664;
   input += synapse0x4042910();
   input += synapse0x4042950();
   input += synapse0x4042990();
   input += synapse0x40429d0();
   input += synapse0x4042a10();
   input += synapse0x4042a50();
   input += synapse0x4042a90();
   input += synapse0x4042ad0();
   input += synapse0x4042b10();
   input += synapse0x4042b50();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x40425d0() {
   double input = input0x40425d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4042b90() {
   double input = 3.70879;
   input += synapse0x3e95840();
   input += synapse0x3e95880();
   input += synapse0x4042fe0();
   input += synapse0x4043020();
   input += synapse0x4043060();
   input += synapse0x4047370();
   input += synapse0x3e990a0();
   input += synapse0x3e9cd90();
   input += synapse0x3e98450();
   input += synapse0x3e992b0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4042b90() {
   double input = input0x4042b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x3e97640() {
   double input = 1.12675;
   input += synapse0x3e977d0();
   input += synapse0x4041ef0();
   input += synapse0x40434b0();
   input += synapse0x40434f0();
   input += synapse0x4043530();
   input += synapse0x4043570();
   input += synapse0x40435b0();
   input += synapse0x40435f0();
   input += synapse0x4043630();
   input += synapse0x4043670();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x3e97640() {
   double input = input0x3e97640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x40436b0() {
   double input = 1.11232;
   input += synapse0x40439f0();
   input += synapse0x4043a30();
   input += synapse0x4043a70();
   input += synapse0x4043ab0();
   input += synapse0x4043af0();
   input += synapse0x4043b30();
   input += synapse0x4043b70();
   input += synapse0x4043bb0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x40436b0() {
   double input = input0x40436b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4043bf0() {
   double input = 0.699863;
   input += synapse0x4043f30();
   input += synapse0x4043f70();
   input += synapse0x4043fb0();
   input += synapse0x4043ff0();
   input += synapse0x4044030();
   input += synapse0x4044070();
   input += synapse0x40440b0();
   input += synapse0x40440f0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4043bf0() {
   double input = input0x4043bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4044130() {
   double input = 0.0595065;
   input += synapse0x4044470();
   input += synapse0x40444b0();
   input += synapse0x40444f0();
   input += synapse0x4044530();
   input += synapse0x4044570();
   input += synapse0x40445b0();
   input += synapse0x40445f0();
   input += synapse0x4044630();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4044130() {
   double input = input0x4044130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4044670() {
   double input = 1.34752;
   input += synapse0x40449b0();
   input += synapse0x40449f0();
   input += synapse0x4044a30();
   input += synapse0x4044a70();
   input += synapse0x4044ab0();
   input += synapse0x4044af0();
   input += synapse0x4044b30();
   input += synapse0x4044b70();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4044670() {
   double input = input0x4044670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x4044bb0() {
   double input = 0.671018;
   input += synapse0x4044ef0();
   input += synapse0x4044f30();
   input += synapse0x4044f70();
   input += synapse0x4044fb0();
   input += synapse0x4044ff0();
   input += synapse0x4045030();
   input += synapse0x4045070();
   input += synapse0x40450b0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x4044bb0() {
   double input = input0x4044bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x40450f0() {
   double input = 0.693531;
   input += synapse0x4045430();
   input += synapse0x4045470();
   input += synapse0x40454b0();
   input += synapse0x40454f0();
   input += synapse0x4045530();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x40450f0() {
   double input = input0x40450f0();
   return (input * 1)+0;
}

double nnTrainedchi110_ECAL::synapse0x4047110() {
   return (neuron0x4047150()*2.3025);
}

double nnTrainedchi110_ECAL::synapse0x3e985c0() {
   return (neuron0x3e97820()*0.949529);
}

double nnTrainedchi110_ECAL::synapse0x4040b70() {
   return (neuron0x3e97b60()*0.880597);
}

double nnTrainedchi110_ECAL::synapse0x4040bb0() {
   return (neuron0x3e97ea0()*0.0176989);
}

double nnTrainedchi110_ECAL::synapse0x4040bf0() {
   return (neuron0x3e981e0()*-0.242524);
}

double nnTrainedchi110_ECAL::synapse0x4040c30() {
   return (neuron0x3e9b2f0()*-1.82955);
}

double nnTrainedchi110_ECAL::synapse0x4040c70() {
   return (neuron0x3e9b630()*-0.453487);
}

double nnTrainedchi110_ECAL::synapse0x4040cb0() {
   return (neuron0x3e9b970()*0.0263705);
}

double nnTrainedchi110_ECAL::synapse0x4040cf0() {
   return (neuron0x3e9bcb0()*-0.160599);
}

double nnTrainedchi110_ECAL::synapse0x4040d30() {
   return (neuron0x3e9bff0()*1.78506);
}

double nnTrainedchi110_ECAL::synapse0x40410b0() {
   return (neuron0x4047150()*1.2283);
}

double nnTrainedchi110_ECAL::synapse0x40410f0() {
   return (neuron0x3e97820()*0.538183);
}

double nnTrainedchi110_ECAL::synapse0x4041130() {
   return (neuron0x3e97b60()*1.06245);
}

double nnTrainedchi110_ECAL::synapse0x4041170() {
   return (neuron0x3e97ea0()*0.175737);
}

double nnTrainedchi110_ECAL::synapse0x40411b0() {
   return (neuron0x3e981e0()*-0.199508);
}

double nnTrainedchi110_ECAL::synapse0x40411f0() {
   return (neuron0x3e9b2f0()*0.386606);
}

double nnTrainedchi110_ECAL::synapse0x4041230() {
   return (neuron0x3e9b630()*-0.117266);
}

double nnTrainedchi110_ECAL::synapse0x3e98400() {
   return (neuron0x3e9b970()*0.345377);
}

double nnTrainedchi110_ECAL::synapse0x3e959f0() {
   return (neuron0x3e9bcb0()*0.320056);
}

double nnTrainedchi110_ECAL::synapse0x3e95a30() {
   return (neuron0x3e9bff0()*0.495648);
}

double nnTrainedchi110_ECAL::synapse0x40416c0() {
   return (neuron0x4047150()*2.02404);
}

double nnTrainedchi110_ECAL::synapse0x4041700() {
   return (neuron0x3e97820()*1.6762);
}

double nnTrainedchi110_ECAL::synapse0x4041740() {
   return (neuron0x3e97b60()*0.472442);
}

double nnTrainedchi110_ECAL::synapse0x4041780() {
   return (neuron0x3e97ea0()*-0.0134171);
}

double nnTrainedchi110_ECAL::synapse0x40417c0() {
   return (neuron0x3e981e0()*0.469532);
}

double nnTrainedchi110_ECAL::synapse0x4041800() {
   return (neuron0x3e9b2f0()*-0.506704);
}

double nnTrainedchi110_ECAL::synapse0x4041840() {
   return (neuron0x3e9b630()*-0.175889);
}

double nnTrainedchi110_ECAL::synapse0x4041880() {
   return (neuron0x3e9b970()*0.451064);
}

double nnTrainedchi110_ECAL::synapse0x40418c0() {
   return (neuron0x3e9bcb0()*0.197139);
}

double nnTrainedchi110_ECAL::synapse0x4041900() {
   return (neuron0x3e9bff0()*2.352);
}

double nnTrainedchi110_ECAL::synapse0x4041c80() {
   return (neuron0x4047150()*-2.19862);
}

double nnTrainedchi110_ECAL::synapse0x4041cc0() {
   return (neuron0x3e97820()*-0.225224);
}

double nnTrainedchi110_ECAL::synapse0x4041d00() {
   return (neuron0x3e97b60()*-0.582875);
}

double nnTrainedchi110_ECAL::synapse0x4041270() {
   return (neuron0x3e97ea0()*0.370592);
}

double nnTrainedchi110_ECAL::synapse0x40412b0() {
   return (neuron0x3e981e0()*-0.428437);
}

double nnTrainedchi110_ECAL::synapse0x40412f0() {
   return (neuron0x3e9b2f0()*0.304269);
}

double nnTrainedchi110_ECAL::synapse0x4041330() {
   return (neuron0x3e9b630()*-0.00796035);
}

double nnTrainedchi110_ECAL::synapse0x4041f50() {
   return (neuron0x3e9b970()*-0.216094);
}

double nnTrainedchi110_ECAL::synapse0x4041f90() {
   return (neuron0x3e9bcb0()*-0.316605);
}

double nnTrainedchi110_ECAL::synapse0x4041fd0() {
   return (neuron0x3e9bff0()*-1.19658);
}

double nnTrainedchi110_ECAL::synapse0x4042350() {
   return (neuron0x4047150()*-0.731295);
}

double nnTrainedchi110_ECAL::synapse0x4042390() {
   return (neuron0x3e97820()*-0.247224);
}

double nnTrainedchi110_ECAL::synapse0x40423d0() {
   return (neuron0x3e97b60()*0.0399804);
}

double nnTrainedchi110_ECAL::synapse0x4042410() {
   return (neuron0x3e97ea0()*-0.453945);
}

double nnTrainedchi110_ECAL::synapse0x4042450() {
   return (neuron0x3e981e0()*0.44277);
}

double nnTrainedchi110_ECAL::synapse0x4042490() {
   return (neuron0x3e9b2f0()*0.852337);
}

double nnTrainedchi110_ECAL::synapse0x40424d0() {
   return (neuron0x3e9b630()*0.133213);
}

double nnTrainedchi110_ECAL::synapse0x4042510() {
   return (neuron0x3e9b970()*-0.343927);
}

double nnTrainedchi110_ECAL::synapse0x4042550() {
   return (neuron0x3e9bcb0()*0.205884);
}

double nnTrainedchi110_ECAL::synapse0x4042590() {
   return (neuron0x3e9bff0()*-1.59647);
}

double nnTrainedchi110_ECAL::synapse0x4042910() {
   return (neuron0x4047150()*0.982921);
}

double nnTrainedchi110_ECAL::synapse0x4042950() {
   return (neuron0x3e97820()*0.114884);
}

double nnTrainedchi110_ECAL::synapse0x4042990() {
   return (neuron0x3e97b60()*1.90854);
}

double nnTrainedchi110_ECAL::synapse0x40429d0() {
   return (neuron0x3e97ea0()*-0.192661);
}

double nnTrainedchi110_ECAL::synapse0x4042a10() {
   return (neuron0x3e981e0()*-0.171495);
}

double nnTrainedchi110_ECAL::synapse0x4042a50() {
   return (neuron0x3e9b2f0()*0.317627);
}

double nnTrainedchi110_ECAL::synapse0x4042a90() {
   return (neuron0x3e9b630()*-0.401858);
}

double nnTrainedchi110_ECAL::synapse0x4042ad0() {
   return (neuron0x3e9b970()*0.390163);
}

double nnTrainedchi110_ECAL::synapse0x4042b10() {
   return (neuron0x3e9bcb0()*-0.0768773);
}

double nnTrainedchi110_ECAL::synapse0x4042b50() {
   return (neuron0x3e9bff0()*-0.374609);
}

double nnTrainedchi110_ECAL::synapse0x3e95840() {
   return (neuron0x4047150()*-1.97958);
}

double nnTrainedchi110_ECAL::synapse0x3e95880() {
   return (neuron0x3e97820()*-0.236784);
}

double nnTrainedchi110_ECAL::synapse0x4042fe0() {
   return (neuron0x3e97b60()*-3.55582);
}

double nnTrainedchi110_ECAL::synapse0x4043020() {
   return (neuron0x3e97ea0()*0.0940554);
}

double nnTrainedchi110_ECAL::synapse0x4043060() {
   return (neuron0x3e981e0()*0.460727);
}

double nnTrainedchi110_ECAL::synapse0x4047370() {
   return (neuron0x3e9b2f0()*-0.159809);
}

double nnTrainedchi110_ECAL::synapse0x3e990a0() {
   return (neuron0x3e9b630()*-0.38462);
}

double nnTrainedchi110_ECAL::synapse0x3e9cd90() {
   return (neuron0x3e9b970()*-0.356925);
}

double nnTrainedchi110_ECAL::synapse0x3e98450() {
   return (neuron0x3e9bcb0()*0.171255);
}

double nnTrainedchi110_ECAL::synapse0x3e992b0() {
   return (neuron0x3e9bff0()*0.135132);
}

double nnTrainedchi110_ECAL::synapse0x3e977d0() {
   return (neuron0x4047150()*-1.46022);
}

double nnTrainedchi110_ECAL::synapse0x4041ef0() {
   return (neuron0x3e97820()*-0.2695);
}

double nnTrainedchi110_ECAL::synapse0x40434b0() {
   return (neuron0x3e97b60()*-0.54259);
}

double nnTrainedchi110_ECAL::synapse0x40434f0() {
   return (neuron0x3e97ea0()*-0.430571);
}

double nnTrainedchi110_ECAL::synapse0x4043530() {
   return (neuron0x3e981e0()*-0.268466);
}

double nnTrainedchi110_ECAL::synapse0x4043570() {
   return (neuron0x3e9b2f0()*0.493683);
}

double nnTrainedchi110_ECAL::synapse0x40435b0() {
   return (neuron0x3e9b630()*0.244345);
}

double nnTrainedchi110_ECAL::synapse0x40435f0() {
   return (neuron0x3e9b970()*0.289237);
}

double nnTrainedchi110_ECAL::synapse0x4043630() {
   return (neuron0x3e9bcb0()*-0.0207106);
}

double nnTrainedchi110_ECAL::synapse0x4043670() {
   return (neuron0x3e9bff0()*-0.517523);
}

double nnTrainedchi110_ECAL::synapse0x40439f0() {
   return (neuron0x40408c0()*-0.918966);
}

double nnTrainedchi110_ECAL::synapse0x4043a30() {
   return (neuron0x4040d70()*-1.02176);
}

double nnTrainedchi110_ECAL::synapse0x4043a70() {
   return (neuron0x4041380()*0.844203);
}

double nnTrainedchi110_ECAL::synapse0x4043ab0() {
   return (neuron0x4041940()*0.0133666);
}

double nnTrainedchi110_ECAL::synapse0x4043af0() {
   return (neuron0x4042010()*0.402826);
}

double nnTrainedchi110_ECAL::synapse0x4043b30() {
   return (neuron0x40425d0()*-0.571308);
}

double nnTrainedchi110_ECAL::synapse0x4043b70() {
   return (neuron0x4042b90()*2.06959);
}

double nnTrainedchi110_ECAL::synapse0x4043bb0() {
   return (neuron0x3e97640()*1.41351);
}

double nnTrainedchi110_ECAL::synapse0x4043f30() {
   return (neuron0x40408c0()*-3.14734);
}

double nnTrainedchi110_ECAL::synapse0x4043f70() {
   return (neuron0x4040d70()*-0.641852);
}

double nnTrainedchi110_ECAL::synapse0x4043fb0() {
   return (neuron0x4041380()*2.00005);
}

double nnTrainedchi110_ECAL::synapse0x4043ff0() {
   return (neuron0x4041940()*0.078819);
}

double nnTrainedchi110_ECAL::synapse0x4044030() {
   return (neuron0x4042010()*0.933353);
}

double nnTrainedchi110_ECAL::synapse0x4044070() {
   return (neuron0x40425d0()*-2.1925);
}

double nnTrainedchi110_ECAL::synapse0x40440b0() {
   return (neuron0x4042b90()*5.05649);
}

double nnTrainedchi110_ECAL::synapse0x40440f0() {
   return (neuron0x3e97640()*1.29396);
}

double nnTrainedchi110_ECAL::synapse0x4044470() {
   return (neuron0x40408c0()*-0.908506);
}

double nnTrainedchi110_ECAL::synapse0x40444b0() {
   return (neuron0x4040d70()*-0.521433);
}

double nnTrainedchi110_ECAL::synapse0x40444f0() {
   return (neuron0x4041380()*1.20538);
}

double nnTrainedchi110_ECAL::synapse0x4044530() {
   return (neuron0x4041940()*-0.0707835);
}

double nnTrainedchi110_ECAL::synapse0x4044570() {
   return (neuron0x4042010()*1.08319);
}

double nnTrainedchi110_ECAL::synapse0x40445b0() {
   return (neuron0x40425d0()*-0.264357);
}

double nnTrainedchi110_ECAL::synapse0x40445f0() {
   return (neuron0x4042b90()*1.75763);
}

double nnTrainedchi110_ECAL::synapse0x4044630() {
   return (neuron0x3e97640()*-0.133394);
}

double nnTrainedchi110_ECAL::synapse0x40449b0() {
   return (neuron0x40408c0()*-0.434429);
}

double nnTrainedchi110_ECAL::synapse0x40449f0() {
   return (neuron0x4040d70()*-0.58394);
}

double nnTrainedchi110_ECAL::synapse0x4044a30() {
   return (neuron0x4041380()*0.707603);
}

double nnTrainedchi110_ECAL::synapse0x4044a70() {
   return (neuron0x4041940()*-0.898231);
}

double nnTrainedchi110_ECAL::synapse0x4044ab0() {
   return (neuron0x4042010()*0.189307);
}

double nnTrainedchi110_ECAL::synapse0x4044af0() {
   return (neuron0x40425d0()*-0.298602);
}

double nnTrainedchi110_ECAL::synapse0x4044b30() {
   return (neuron0x4042b90()*0.876304);
}

double nnTrainedchi110_ECAL::synapse0x4044b70() {
   return (neuron0x3e97640()*0.267677);
}

double nnTrainedchi110_ECAL::synapse0x4044ef0() {
   return (neuron0x40408c0()*-0.314167);
}

double nnTrainedchi110_ECAL::synapse0x4044f30() {
   return (neuron0x4040d70()*0.486413);
}

double nnTrainedchi110_ECAL::synapse0x4044f70() {
   return (neuron0x4041380()*-0.387222);
}

double nnTrainedchi110_ECAL::synapse0x4044fb0() {
   return (neuron0x4041940()*0.478714);
}

double nnTrainedchi110_ECAL::synapse0x4044ff0() {
   return (neuron0x4042010()*-0.98008);
}

double nnTrainedchi110_ECAL::synapse0x4045030() {
   return (neuron0x40425d0()*0.279246);
}

double nnTrainedchi110_ECAL::synapse0x4045070() {
   return (neuron0x4042b90()*-0.427486);
}

double nnTrainedchi110_ECAL::synapse0x40450b0() {
   return (neuron0x3e97640()*0.0937011);
}

double nnTrainedchi110_ECAL::synapse0x4045430() {
   return (neuron0x40436b0()*-1.26166);
}

double nnTrainedchi110_ECAL::synapse0x4045470() {
   return (neuron0x4043bf0()*1.66771);
}

double nnTrainedchi110_ECAL::synapse0x40454b0() {
   return (neuron0x4044130()*0.375433);
}

double nnTrainedchi110_ECAL::synapse0x40454f0() {
   return (neuron0x4044670()*-0.407959);
}

double nnTrainedchi110_ECAL::synapse0x4045530() {
   return (neuron0x4044bb0()*-0.229488);
}

