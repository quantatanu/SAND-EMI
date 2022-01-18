#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EXTMUID/SOURCES/july_28_2021_working_NN_version/nnTrainednotL4_chi110_ECAL.h"
#include <cmath>

double nnTrainednotL4_chi110_ECAL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7) {
   input0 = (in0 - 102.338)/72.7074;
   input1 = (in1 - 6.40956)/4.17559;
   input2 = (in2 - 3.22316e-310)/1;
   input3 = (in3 - 6.93678e-310)/1;
   input4 = (in4 - 7.4399e-314)/1;
   input5 = (in5 - 0.999709)/0.00181047;
   input6 = (in6 - 298.365)/166.052;
   input7 = (in7 - 171.916)/114.17;
   switch(index) {
     case 0:
         return neuron0x3a76d60();
     default:
         return 0.;
   }
}

double nnTrainednotL4_chi110_ECAL::Value(int index, double* input) {
   input0 = (input[0] - 102.338)/72.7074;
   input1 = (input[1] - 6.40956)/4.17559;
   input2 = (input[2] - 3.22316e-310)/1;
   input3 = (input[3] - 6.93678e-310)/1;
   input4 = (input[4] - 7.4399e-314)/1;
   input5 = (input[5] - 0.999709)/0.00181047;
   input6 = (input[6] - 298.365)/166.052;
   input7 = (input[7] - 171.916)/114.17;
   switch(index) {
     case 0:
         return neuron0x3a76d60();
     default:
         return 0.;
   }
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a719f0() {
   return input0;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a71ca0() {
   return input1;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3853bc0() {
   return input2;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3853f00() {
   return input3;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a72640() {
   return input4;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a72980() {
   return input5;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a72cc0() {
   return input6;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a73000() {
   return input7;
}

double nnTrainednotL4_chi110_ECAL::input0x3a73340() {
   double input = 5.59775;
   input += synapse0x3851740();
   input += synapse0x3853970();
   input += synapse0x3a735f0();
   input += synapse0x3a73630();
   input += synapse0x3a73670();
   input += synapse0x3a736b0();
   input += synapse0x3a736f0();
   input += synapse0x3a73730();
   return input;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a73340() {
   double input = input0x3a73340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110_ECAL::input0x3a73770() {
   double input = 0.810378;
   input += synapse0x3a73ab0();
   input += synapse0x3a73af0();
   input += synapse0x3a73b30();
   input += synapse0x3a73b70();
   input += synapse0x3a73bb0();
   input += synapse0x3a73bf0();
   input += synapse0x3a73c30();
   input += synapse0x3a73c70();
   return input;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a73770() {
   double input = input0x3a73770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110_ECAL::input0x3a73cb0() {
   double input = -0.434601;
   input += synapse0x3a73ff0();
   input += synapse0x3851110();
   input += synapse0x3851150();
   input += synapse0x3a71fe0();
   input += synapse0x3a72020();
   input += synapse0x3a72060();
   input += synapse0x3a74140();
   input += synapse0x3a74180();
   return input;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a73cb0() {
   double input = input0x3a73cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110_ECAL::input0x3a741c0() {
   double input = 4.0051;
   input += synapse0x3a74500();
   input += synapse0x3a74540();
   input += synapse0x3a74580();
   input += synapse0x3a745c0();
   input += synapse0x3a74600();
   input += synapse0x3a74640();
   input += synapse0x3a74680();
   input += synapse0x3a746c0();
   return input;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a741c0() {
   double input = input0x3a741c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110_ECAL::input0x3a74700() {
   double input = 0.0600069;
   input += synapse0x3a74a40();
   input += synapse0x3a74030();
   input += synapse0x3a74070();
   input += synapse0x3a740b0();
   input += synapse0x3a740f0();
   input += synapse0x3a74c90();
   input += synapse0x3a74cd0();
   input += synapse0x3a74d10();
   return input;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a74700() {
   double input = input0x3a74700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110_ECAL::input0x3a74d50() {
   double input = 1.90473;
   input += synapse0x3a75090();
   input += synapse0x3a750d0();
   input += synapse0x3a75110();
   input += synapse0x3a75150();
   input += synapse0x3a75190();
   input += synapse0x3a751d0();
   input += synapse0x3a75210();
   input += synapse0x3a75250();
   return input;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a74d50() {
   double input = input0x3a74d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110_ECAL::input0x3a75290() {
   double input = -2.53135;
   input += synapse0x3a755d0();
   input += synapse0x3a75610();
   input += synapse0x3a75650();
   input += synapse0x3a75690();
   input += synapse0x3a756d0();
   input += synapse0x3a75710();
   input += synapse0x3a75750();
   input += synapse0x3a75790();
   return input;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a75290() {
   double input = input0x3a75290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110_ECAL::input0x3a757d0() {
   double input = 5.75954;
   input += synapse0x3a75b10();
   input += synapse0x3a75b50();
   input += synapse0x3a75b90();
   input += synapse0x3a75bd0();
   input += synapse0x3a75c10();
   input += synapse0x3a75c50();
   input += synapse0x3a75c90();
   return input;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a757d0() {
   double input = input0x3a757d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110_ECAL::input0x3a75cd0() {
   double input = -1.54117;
   input += synapse0x3850f60();
   input += synapse0x3850fa0();
   input += synapse0x3a83680();
   input += synapse0x3a71800();
   input += synapse0x3a71840();
   input += synapse0x3a71880();
   input += synapse0x3a74a80();
   return input;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a75cd0() {
   double input = input0x3a75cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110_ECAL::input0x3a74ac0() {
   double input = 11.686;
   input += synapse0x3a74c50();
   input += synapse0x3a766e0();
   input += synapse0x3a76720();
   input += synapse0x3a76760();
   input += synapse0x3a767a0();
   input += synapse0x3a767e0();
   input += synapse0x3a76820();
   return input;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a74ac0() {
   double input = input0x3a74ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110_ECAL::input0x3a76860() {
   double input = 0.455698;
   input += synapse0x3a76ba0();
   input += synapse0x3a76be0();
   input += synapse0x3a76c20();
   input += synapse0x3a76c60();
   input += synapse0x3a76ca0();
   input += synapse0x3a76ce0();
   input += synapse0x3a76d20();
   return input;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a76860() {
   double input = input0x3a76860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110_ECAL::input0x3a76d60() {
   double input = 0.137966;
   input += synapse0x3a770a0();
   input += synapse0x3a770e0();
   input += synapse0x3a77120();
   input += synapse0x3a77160();
   return input;
}

double nnTrainednotL4_chi110_ECAL::neuron0x3a76d60() {
   double input = input0x3a76d60();
   return (input * 1)+0;
}

double nnTrainednotL4_chi110_ECAL::synapse0x3851740() {
   return (neuron0x3a719f0()*-1.07);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3853970() {
   return (neuron0x3a71ca0()*4.24128);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a735f0() {
   return (neuron0x3853bc0()*0.450614);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a73630() {
   return (neuron0x3853f00()*0.0282219);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a73670() {
   return (neuron0x3a72640()*-0.290144);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a736b0() {
   return (neuron0x3a72980()*0.209334);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a736f0() {
   return (neuron0x3a72cc0()*1.28259);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a73730() {
   return (neuron0x3a73000()*-5.468);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a73ab0() {
   return (neuron0x3a719f0()*-0.954948);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a73af0() {
   return (neuron0x3a71ca0()*-2.70433);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a73b30() {
   return (neuron0x3853bc0()*-0.32401);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a73b70() {
   return (neuron0x3853f00()*-0.435543);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a73bb0() {
   return (neuron0x3a72640()*-0.214209);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a73bf0() {
   return (neuron0x3a72980()*0.665586);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a73c30() {
   return (neuron0x3a72cc0()*3.5746);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a73c70() {
   return (neuron0x3a73000()*1.96188);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a73ff0() {
   return (neuron0x3a719f0()*-0.902503);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3851110() {
   return (neuron0x3a71ca0()*-1.49091);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3851150() {
   return (neuron0x3853bc0()*0.369739);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a71fe0() {
   return (neuron0x3853f00()*-0.0683771);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a72020() {
   return (neuron0x3a72640()*0.421711);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a72060() {
   return (neuron0x3a72980()*2.24151);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74140() {
   return (neuron0x3a72cc0()*1.72412);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74180() {
   return (neuron0x3a73000()*-0.454877);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74500() {
   return (neuron0x3a719f0()*-8.56128);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74540() {
   return (neuron0x3a71ca0()*-2.1);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74580() {
   return (neuron0x3853bc0()*0.164916);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a745c0() {
   return (neuron0x3853f00()*-0.434352);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74600() {
   return (neuron0x3a72640()*0.204613);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74640() {
   return (neuron0x3a72980()*-0.257566);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74680() {
   return (neuron0x3a72cc0()*-0.127035);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a746c0() {
   return (neuron0x3a73000()*1.2402);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74a40() {
   return (neuron0x3a719f0()*-4.32269);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74030() {
   return (neuron0x3a71ca0()*-6.01134);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74070() {
   return (neuron0x3853bc0()*0.103407);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a740b0() {
   return (neuron0x3853f00()*0.498685);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a740f0() {
   return (neuron0x3a72640()*-0.101912);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74c90() {
   return (neuron0x3a72980()*-0.41091);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74cd0() {
   return (neuron0x3a72cc0()*7.64353);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74d10() {
   return (neuron0x3a73000()*1.75739);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75090() {
   return (neuron0x3a719f0()*-4.24161);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a750d0() {
   return (neuron0x3a71ca0()*0.448197);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75110() {
   return (neuron0x3853bc0()*-0.454295);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75150() {
   return (neuron0x3853f00()*-0.34715);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75190() {
   return (neuron0x3a72640()*0.414537);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a751d0() {
   return (neuron0x3a72980()*1.88443);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75210() {
   return (neuron0x3a72cc0()*-5.09472);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75250() {
   return (neuron0x3a73000()*4.92972);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a755d0() {
   return (neuron0x3a719f0()*-0.138833);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75610() {
   return (neuron0x3a71ca0()*-6.5131);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75650() {
   return (neuron0x3853bc0()*-0.328386);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75690() {
   return (neuron0x3853f00()*-0.456997);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a756d0() {
   return (neuron0x3a72640()*-0.283897);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75710() {
   return (neuron0x3a72980()*-0.422524);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75750() {
   return (neuron0x3a72cc0()*0.422893);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75790() {
   return (neuron0x3a73000()*5.96141);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75b10() {
   return (neuron0x3a73340()*-1.47092);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75b50() {
   return (neuron0x3a73770()*-7.74672);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75b90() {
   return (neuron0x3a73cb0()*-3.49465);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75bd0() {
   return (neuron0x3a741c0()*2.02626);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75c10() {
   return (neuron0x3a74700()*3.9793);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75c50() {
   return (neuron0x3a74d50()*2.84832);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a75c90() {
   return (neuron0x3a75290()*4.20391);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3850f60() {
   return (neuron0x3a73340()*-2.22493);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3850fa0() {
   return (neuron0x3a73770()*1.8711);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a83680() {
   return (neuron0x3a73cb0()*0.520556);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a71800() {
   return (neuron0x3a741c0()*-2.15985);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a71840() {
   return (neuron0x3a74700()*-3.03562);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a71880() {
   return (neuron0x3a74d50()*-3.28796);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74a80() {
   return (neuron0x3a75290()*-0.816302);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a74c50() {
   return (neuron0x3a73340()*-7.40994);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a766e0() {
   return (neuron0x3a73770()*-6.83713);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a76720() {
   return (neuron0x3a73cb0()*-6.63711);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a76760() {
   return (neuron0x3a741c0()*-1.51668);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a767a0() {
   return (neuron0x3a74700()*-4.43838);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a767e0() {
   return (neuron0x3a74d50()*0.944379);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a76820() {
   return (neuron0x3a75290()*-1.78607);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a76ba0() {
   return (neuron0x3a73340()*1.1755);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a76be0() {
   return (neuron0x3a73770()*0.555613);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a76c20() {
   return (neuron0x3a73cb0()*1.28886);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a76c60() {
   return (neuron0x3a741c0()*1.11978);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a76ca0() {
   return (neuron0x3a74700()*2.75097);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a76ce0() {
   return (neuron0x3a74d50()*-0.593905);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a76d20() {
   return (neuron0x3a75290()*1.64001);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a770a0() {
   return (neuron0x3a757d0()*1.12643);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a770e0() {
   return (neuron0x3a75cd0()*1.39201);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a77120() {
   return (neuron0x3a74ac0()*-1.07058);
}

double nnTrainednotL4_chi110_ECAL::synapse0x3a77160() {
   return (neuron0x3a76860()*-0.272475);
}

