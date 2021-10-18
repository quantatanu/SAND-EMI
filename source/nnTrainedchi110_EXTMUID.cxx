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
         return neuron0x3a51c50();
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
         return neuron0x3a51c50();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x3af42a0() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x3af45e0() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x3af0920() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x3af0c60() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x3af1630() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x3af1970() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x3af1cb0() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x3a57ff0() {
   double input = 0.277649;
   input += synapse0x3a58f60();
   input += synapse0x3a58fa0();
   input += synapse0x3a582a0();
   input += synapse0x3a582e0();
   input += synapse0x3a58320();
   input += synapse0x3a58360();
   input += synapse0x3a583a0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3a57ff0() {
   double input = input0x3a57ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3a583e0() {
   double input = 0.216143;
   input += synapse0x3a58720();
   input += synapse0x3a58760();
   input += synapse0x3a587a0();
   input += synapse0x3a587e0();
   input += synapse0x3a58820();
   input += synapse0x3a58860();
   input += synapse0x3a588a0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3a583e0() {
   double input = input0x3a583e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3a588e0() {
   double input = 0.226057;
   input += synapse0x3a58c20();
   input += synapse0x3a58c60();
   input += synapse0x3a58ca0();
   input += synapse0x3aef6e0();
   input += synapse0x3aef720();
   input += synapse0x3af0fa0();
   input += synapse0x3af0fe0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3a588e0() {
   double input = input0x3a588e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3a512d0() {
   double input = 0.450624;
   input += synapse0x3a51610();
   input += synapse0x3a51650();
   input += synapse0x3a51690();
   input += synapse0x3a516d0();
   input += synapse0x3a51710();
   input += synapse0x3a51750();
   input += synapse0x3a51790();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3a512d0() {
   double input = input0x3a512d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3a517d0() {
   double input = -2.54182e-05;
   input += synapse0x3a51b10();
   input += synapse0x3a51b50();
   input += synapse0x3a51b90();
   input += synapse0x3a51bd0();
   input += synapse0x3a51c10();
   input += synapse0x3af1020();
   input += synapse0x3af1ff0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3a517d0() {
   double input = input0x3a517d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3a58ce0() {
   double input = -1.47899;
   input += synapse0x3a51ef0();
   input += synapse0x3a51f30();
   input += synapse0x3a51f70();
   input += synapse0x3a51fb0();
   input += synapse0x3a51ff0();
   input += synapse0x3a52030();
   input += synapse0x3a52070();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3a58ce0() {
   double input = input0x3a58ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3a520b0() {
   double input = 0.856042;
   input += synapse0x3a523f0();
   input += synapse0x3a52430();
   input += synapse0x3a52470();
   input += synapse0x3a524b0();
   input += synapse0x3a524f0();
   input += synapse0x3a52530();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3a520b0() {
   double input = input0x3a520b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3a52570() {
   double input = 0.0571867;
   input += synapse0x3a528b0();
   input += synapse0x3a528f0();
   input += synapse0x3a52930();
   input += synapse0x3a52970();
   input += synapse0x3a529b0();
   input += synapse0x3a529f0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3a52570() {
   double input = input0x3a52570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3a52a30() {
   double input = 0.262815;
   input += synapse0x3a52d70();
   input += synapse0x3a52db0();
   input += synapse0x3a52df0();
   input += synapse0x3a52e30();
   input += synapse0x3a52e70();
   input += synapse0x3a52eb0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3a52a30() {
   double input = input0x3a52a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3a52ef0() {
   double input = -0.293599;
   input += synapse0x3aef530();
   input += synapse0x3aef570();
   input += synapse0x3a53340();
   input += synapse0x3a53380();
   input += synapse0x3a533c0();
   input += synapse0x3a57520();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3a52ef0() {
   double input = input0x3a52ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3a51c50() {
   double input = -0.407753;
   input += synapse0x3af4130();
   input += synapse0x3af4170();
   input += synapse0x3af3fe0();
   input += synapse0x3af15e0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3a51c50() {
   double input = input0x3a51c50();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x3a58f60() {
   return (neuron0x3af42a0()*0.0567444);
}

double nnTrainedchi110_EXTMUID::synapse0x3a58fa0() {
   return (neuron0x3af45e0()*-0.528507);
}

double nnTrainedchi110_EXTMUID::synapse0x3a582a0() {
   return (neuron0x3af0920()*-0.586383);
}

double nnTrainedchi110_EXTMUID::synapse0x3a582e0() {
   return (neuron0x3af0c60()*0.269626);
}

double nnTrainedchi110_EXTMUID::synapse0x3a58320() {
   return (neuron0x3af1630()*-0.638262);
}

double nnTrainedchi110_EXTMUID::synapse0x3a58360() {
   return (neuron0x3af1970()*0.00882285);
}

double nnTrainedchi110_EXTMUID::synapse0x3a583a0() {
   return (neuron0x3af1cb0()*-0.384815);
}

double nnTrainedchi110_EXTMUID::synapse0x3a58720() {
   return (neuron0x3af42a0()*-0.141937);
}

double nnTrainedchi110_EXTMUID::synapse0x3a58760() {
   return (neuron0x3af45e0()*0.300275);
}

double nnTrainedchi110_EXTMUID::synapse0x3a587a0() {
   return (neuron0x3af0920()*0.130931);
}

double nnTrainedchi110_EXTMUID::synapse0x3a587e0() {
   return (neuron0x3af0c60()*-0.309591);
}

double nnTrainedchi110_EXTMUID::synapse0x3a58820() {
   return (neuron0x3af1630()*0.382821);
}

double nnTrainedchi110_EXTMUID::synapse0x3a58860() {
   return (neuron0x3af1970()*-1.8102);
}

double nnTrainedchi110_EXTMUID::synapse0x3a588a0() {
   return (neuron0x3af1cb0()*-1.71543);
}

double nnTrainedchi110_EXTMUID::synapse0x3a58c20() {
   return (neuron0x3af42a0()*0.143305);
}

double nnTrainedchi110_EXTMUID::synapse0x3a58c60() {
   return (neuron0x3af45e0()*-0.210959);
}

double nnTrainedchi110_EXTMUID::synapse0x3a58ca0() {
   return (neuron0x3af0920()*-0.00389736);
}

double nnTrainedchi110_EXTMUID::synapse0x3aef6e0() {
   return (neuron0x3af0c60()*-0.125468);
}

double nnTrainedchi110_EXTMUID::synapse0x3aef720() {
   return (neuron0x3af1630()*0.126434);
}

double nnTrainedchi110_EXTMUID::synapse0x3af0fa0() {
   return (neuron0x3af1970()*-0.223292);
}

double nnTrainedchi110_EXTMUID::synapse0x3af0fe0() {
   return (neuron0x3af1cb0()*-0.0241146);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51610() {
   return (neuron0x3af42a0()*-0.0131253);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51650() {
   return (neuron0x3af45e0()*-0.454327);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51690() {
   return (neuron0x3af0920()*0.119167);
}

double nnTrainedchi110_EXTMUID::synapse0x3a516d0() {
   return (neuron0x3af0c60()*-0.154214);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51710() {
   return (neuron0x3af1630()*0.204566);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51750() {
   return (neuron0x3af1970()*-0.161883);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51790() {
   return (neuron0x3af1cb0()*-0.181188);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51b10() {
   return (neuron0x3af42a0()*0.205635);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51b50() {
   return (neuron0x3af45e0()*0.576233);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51b90() {
   return (neuron0x3af0920()*-0.245378);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51bd0() {
   return (neuron0x3af0c60()*-0.164374);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51c10() {
   return (neuron0x3af1630()*0.412925);
}

double nnTrainedchi110_EXTMUID::synapse0x3af1020() {
   return (neuron0x3af1970()*0.606665);
}

double nnTrainedchi110_EXTMUID::synapse0x3af1ff0() {
   return (neuron0x3af1cb0()*0.399018);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51ef0() {
   return (neuron0x3af42a0()*-0.409227);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51f30() {
   return (neuron0x3af45e0()*-0.036483);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51f70() {
   return (neuron0x3af0920()*0.375992);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51fb0() {
   return (neuron0x3af0c60()*-0.0153999);
}

double nnTrainedchi110_EXTMUID::synapse0x3a51ff0() {
   return (neuron0x3af1630()*-0.0134245);
}

double nnTrainedchi110_EXTMUID::synapse0x3a52030() {
   return (neuron0x3af1970()*0.262445);
}

double nnTrainedchi110_EXTMUID::synapse0x3a52070() {
   return (neuron0x3af1cb0()*0.131401);
}

double nnTrainedchi110_EXTMUID::synapse0x3a523f0() {
   return (neuron0x3a57ff0()*1.39646);
}

double nnTrainedchi110_EXTMUID::synapse0x3a52430() {
   return (neuron0x3a583e0()*-0.25332);
}

double nnTrainedchi110_EXTMUID::synapse0x3a52470() {
   return (neuron0x3a588e0()*1.30854);
}

double nnTrainedchi110_EXTMUID::synapse0x3a524b0() {
   return (neuron0x3a512d0()*1.57994);
}

double nnTrainedchi110_EXTMUID::synapse0x3a524f0() {
   return (neuron0x3a517d0()*0.0838375);
}

double nnTrainedchi110_EXTMUID::synapse0x3a52530() {
   return (neuron0x3a58ce0()*-1.71643);
}

double nnTrainedchi110_EXTMUID::synapse0x3a528b0() {
   return (neuron0x3a57ff0()*0.945451);
}

double nnTrainedchi110_EXTMUID::synapse0x3a528f0() {
   return (neuron0x3a583e0()*0.423265);
}

double nnTrainedchi110_EXTMUID::synapse0x3a52930() {
   return (neuron0x3a588e0()*0.93457);
}

double nnTrainedchi110_EXTMUID::synapse0x3a52970() {
   return (neuron0x3a512d0()*0.611284);
}

double nnTrainedchi110_EXTMUID::synapse0x3a529b0() {
   return (neuron0x3a517d0()*-0.709986);
}

double nnTrainedchi110_EXTMUID::synapse0x3a529f0() {
   return (neuron0x3a58ce0()*-0.560687);
}

double nnTrainedchi110_EXTMUID::synapse0x3a52d70() {
   return (neuron0x3a57ff0()*0.0535071);
}

double nnTrainedchi110_EXTMUID::synapse0x3a52db0() {
   return (neuron0x3a583e0()*1.0561);
}

double nnTrainedchi110_EXTMUID::synapse0x3a52df0() {
   return (neuron0x3a588e0()*-0.268951);
}

double nnTrainedchi110_EXTMUID::synapse0x3a52e30() {
   return (neuron0x3a512d0()*-0.342406);
}

double nnTrainedchi110_EXTMUID::synapse0x3a52e70() {
   return (neuron0x3a517d0()*-0.701948);
}

double nnTrainedchi110_EXTMUID::synapse0x3a52eb0() {
   return (neuron0x3a58ce0()*0.528294);
}

double nnTrainedchi110_EXTMUID::synapse0x3aef530() {
   return (neuron0x3a57ff0()*0.0662712);
}

double nnTrainedchi110_EXTMUID::synapse0x3aef570() {
   return (neuron0x3a583e0()*-1.2329);
}

double nnTrainedchi110_EXTMUID::synapse0x3a53340() {
   return (neuron0x3a588e0()*0.465572);
}

double nnTrainedchi110_EXTMUID::synapse0x3a53380() {
   return (neuron0x3a512d0()*0.091214);
}

double nnTrainedchi110_EXTMUID::synapse0x3a533c0() {
   return (neuron0x3a517d0()*1.11275);
}

double nnTrainedchi110_EXTMUID::synapse0x3a57520() {
   return (neuron0x3a58ce0()*-1.13021);
}

double nnTrainedchi110_EXTMUID::synapse0x3af4130() {
   return (neuron0x3a520b0()*2.06611);
}

double nnTrainedchi110_EXTMUID::synapse0x3af4170() {
   return (neuron0x3a52570()*-0.0439775);
}

double nnTrainedchi110_EXTMUID::synapse0x3af3fe0() {
   return (neuron0x3a52a30()*-2.4);
}

double nnTrainedchi110_EXTMUID::synapse0x3af15e0() {
   return (neuron0x3a52ef0()*2.25885);
}

