#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EXTMUID/SOURCES/july_28_working_NN_version/nnTrainednotL2_chi110_EXTMUID.h"
#include <cmath>

double nnTrainednotL2_chi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4) {
   input0 = (in0 - 2.01767)/9.48174;
   input1 = (in1 - 2.48146)/1.02845;
   input2 = (in2 - 2.61984)/12.8363;
   input3 = (in3 - 29080.6)/168024;
   input4 = (in4 - -0.0291359)/0.16836;
   switch(index) {
     case 0:
         return neuron0x4e44960();
     default:
         return 0.;
   }
}

double nnTrainednotL2_chi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 2.01767)/9.48174;
   input1 = (input[1] - 2.48146)/1.02845;
   input2 = (input[2] - 2.61984)/12.8363;
   input3 = (input[3] - 29080.6)/168024;
   input4 = (input[4] - -0.0291359)/0.16836;
   switch(index) {
     case 0:
         return neuron0x4e44960();
     default:
         return 0.;
   }
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x40ff080() {
   return input0;
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x4b5ffb0() {
   return input1;
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x4b602f0() {
   return input2;
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x4b60630() {
   return input3;
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x4b60b30() {
   return input4;
}

double nnTrainednotL2_chi110_EXTMUID::input0x4b60e70() {
   double input = -1.12592;
   input += synapse0x443ef50();
   input += synapse0x4e46d20();
   input += synapse0x4982dc0();
   input += synapse0x4965320();
   input += synapse0x4e60ff0();
   return input;
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x4b60e70() {
   double input = input0x4b60e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110_EXTMUID::input0x4b61120() {
   double input = -4.22049;
   input += synapse0x4a73550();
   input += synapse0x4513b40();
   input += synapse0x4e85730();
   input += synapse0x4e4f5e0();
   input += synapse0x452dd00();
   return input;
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x4b61120() {
   double input = input0x4b61120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110_EXTMUID::input0x4b61460() {
   double input = -0.955085;
   input += synapse0x49cc530();
   input += synapse0x4e61b40();
   input += synapse0x4b561d0();
   input += synapse0x49e1ca0();
   input += synapse0x40ff2a0();
   return input;
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x4b61460() {
   double input = input0x4b61460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110_EXTMUID::input0x4b617a0() {
   double input = -2.60536;
   input += synapse0x4b61ae0();
   input += synapse0x4b61b20();
   input += synapse0x4e56ff0();
   input += synapse0x56c2000();
   input += synapse0x4e66840();
   return input;
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x4b617a0() {
   double input = input0x4b617a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110_EXTMUID::input0x4b61c70() {
   double input = -1.3463;
   input += synapse0x4e43490();
   input += synapse0x4e434d0();
   input += synapse0x4e43510();
   input += synapse0x4e43550();
   input += synapse0x4e43590();
   return input;
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x4b61c70() {
   double input = input0x4b61c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110_EXTMUID::input0x4e435d0() {
   double input = -3.19139;
   input += synapse0x4e43910();
   input += synapse0x4e43950();
   input += synapse0x4e43990();
   input += synapse0x4e439d0();
   input += synapse0x4e43a10();
   return input;
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x4e435d0() {
   double input = input0x4e435d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110_EXTMUID::input0x4e43a50() {
   double input = 2.8618;
   input += synapse0x4e43d90();
   input += synapse0x4e43dd0();
   input += synapse0x4e43e10();
   input += synapse0x56a3b60();
   input += synapse0x450e270();
   return input;
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x4e43a50() {
   double input = input0x4e43a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110_EXTMUID::input0x4e44060() {
   double input = 2.63195;
   input += synapse0x4e443a0();
   input += synapse0x4e443e0();
   input += synapse0x4e44420();
   input += synapse0x4e44460();
   input += synapse0x4e444a0();
   return input;
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x4e44060() {
   double input = input0x4e44060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110_EXTMUID::input0x4e444e0() {
   double input = 0.180828;
   input += synapse0x4e44820();
   input += synapse0x4e44860();
   input += synapse0x4e448a0();
   input += synapse0x4e448e0();
   input += synapse0x4e44920();
   return input;
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x4e444e0() {
   double input = input0x4e444e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL2_chi110_EXTMUID::input0x4e44960() {
   double input = 1.64259;
   input += synapse0x4e44ca0();
   input += synapse0x4e44ce0();
   input += synapse0x4e44d20();
   input += synapse0x4e44d60();
   return input;
}

double nnTrainednotL2_chi110_EXTMUID::neuron0x4e44960() {
   double input = input0x4e44960();
   return (input * 1)+0;
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x443ef50() {
   return (neuron0x40ff080()*-3.55477);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e46d20() {
   return (neuron0x4b5ffb0()*-2.2773);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4982dc0() {
   return (neuron0x4b602f0()*5.45511);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4965320() {
   return (neuron0x4b60630()*-1.93791);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e60ff0() {
   return (neuron0x4b60b30()*2.02025);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4a73550() {
   return (neuron0x40ff080()*-0.0583478);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4513b40() {
   return (neuron0x4b5ffb0()*-2.96878);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e85730() {
   return (neuron0x4b602f0()*0.0784485);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e4f5e0() {
   return (neuron0x4b60630()*0.949782);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x452dd00() {
   return (neuron0x4b60b30()*-1.33392);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x49cc530() {
   return (neuron0x40ff080()*8.45035);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e61b40() {
   return (neuron0x4b5ffb0()*-0.670168);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4b561d0() {
   return (neuron0x4b602f0()*-7.35916);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x49e1ca0() {
   return (neuron0x4b60630()*-0.977115);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x40ff2a0() {
   return (neuron0x4b60b30()*0.958652);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4b61ae0() {
   return (neuron0x40ff080()*0.0221908);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4b61b20() {
   return (neuron0x4b5ffb0()*-4.35721);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e56ff0() {
   return (neuron0x4b602f0()*-4.15584);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x56c2000() {
   return (neuron0x4b60630()*0.515286);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e66840() {
   return (neuron0x4b60b30()*-0.567954);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e43490() {
   return (neuron0x40ff080()*-2.83489);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e434d0() {
   return (neuron0x4b5ffb0()*0.918856);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e43510() {
   return (neuron0x4b602f0()*-2.27418);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e43550() {
   return (neuron0x4b60630()*-0.908377);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e43590() {
   return (neuron0x4b60b30()*0.861567);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e43910() {
   return (neuron0x4b60e70()*1.16993);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e43950() {
   return (neuron0x4b61120()*4.36201);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e43990() {
   return (neuron0x4b61460()*-1.39051);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e439d0() {
   return (neuron0x4b617a0()*0.505986);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e43a10() {
   return (neuron0x4b61c70()*-0.897115);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e43d90() {
   return (neuron0x4b60e70()*-1.07682);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e43dd0() {
   return (neuron0x4b61120()*3.03846);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e43e10() {
   return (neuron0x4b61460()*4.44392);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x56a3b60() {
   return (neuron0x4b617a0()*-1.7871);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x450e270() {
   return (neuron0x4b61c70()*-5.27225);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e443a0() {
   return (neuron0x4b60e70()*8.2022);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e443e0() {
   return (neuron0x4b61120()*1.33);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e44420() {
   return (neuron0x4b61460()*-2.83339);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e44460() {
   return (neuron0x4b617a0()*-7.84299);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e444a0() {
   return (neuron0x4b61c70()*-4.12622);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e44820() {
   return (neuron0x4b60e70()*-0.301982);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e44860() {
   return (neuron0x4b61120()*0.895452);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e448a0() {
   return (neuron0x4b61460()*1.23038);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e448e0() {
   return (neuron0x4b617a0()*1.43362);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e44920() {
   return (neuron0x4b61c70()*0.558931);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e44ca0() {
   return (neuron0x4e435d0()*-6.07623);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e44ce0() {
   return (neuron0x4e43a50()*6.07426);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e44d20() {
   return (neuron0x4e44060()*-5.27598);
}

double nnTrainednotL2_chi110_EXTMUID::synapse0x4e44d60() {
   return (neuron0x4e444e0()*-1.64406);
}

