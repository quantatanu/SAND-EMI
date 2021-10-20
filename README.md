# SAND-EMI
This packaged is a modification of Bing Guo's [ecal muon identification code](https://github.com/bingguo1/muIdentification), it is the muon identification code for **E**xternal **M**uon **I**dentification of the SAND detector of the DUNE **N**ear **D**etector.

## VERSION DESCRIPTION
name: `development/beta_00.02_ecal_enabled` in this version we are going to start trying the following:
> There are two executables here, `run_ecal.sh` and `run_emi.sh`, instructions on how to run them are given at the end in the **How to run** section.
> In this version we have an option to check whether ecal ID affects the EMI or not! For this:
> > we first run the `run_ecal.sh` script with usual params, that is: 
> > `source run_ecal.sh startN NFiles` (an extra option of `-yall` will run the whole package without y/n interruption)
> > this will now generate the usual log inside the `$log_dir` with the common `time stamp` but will also generate 2 more files: 
> > > 1. File containing the list of paths to the edep root files analyzed (let's say `${log_dir}20211020011522_run_ecal_file_list.log`)
> > > 2. Flie containing the list of file index and events that passed the ecal cut (provided in the `nn_config.sh` file as `$ecal_cut`. This file (let's say: `20211020011522_run_ecal_passed.log`) will look like this:
> > >    006 3450
> > >    006 3467
> > >    ...
> > >    009 23
> > >    ...
> > >    where the first column contains the file indices like `044` coming from a typical file name `/blah/blah/.../blah/STT_FHC_044_gsim045_5e17.192819.edep.root` from the `STT_FHC_044` part.
> > Then first one should run the `run_emi.sh` in normal mode but on the same list of files that has been analyzed by the `run_ecal.sh` script: that is 
> > > `source run_emi.sh 0 $(cat ${log_dir}/20211020011522_run_emi_file_list.log | wc -l)`
> > The above files then should be passed as an argument to the `run_emi.sh` script as:
> > > `source run_emi.sh 0 $(cat ${log_dir}/20211020011522_run_emi_file_list.log | wc -l) -p ${log_dir}/20211020011522_run_ecal_file_list.log -m ${log_dir}/20211020011522_run_ecal_passed.log -yall`
> > > in this case, the evnts listed in `*ecal_passed.log` file will be skipped. Results should be compared with the results of the previous normal step to see if they change significantly.





## Installation
**NOTE: ** always work from the top (package home) directory, run everything from here.
### step - 1
Setting the path variables are crucial, therefore, one needs to first edit the `set_env.sh` script. This script has a path variable `base_output_root_dir` that needs to be edited, this is the location where you would like to store all your analysis files.
Another variable is the `file_list` that contains list full absolute paths to the EDEPSIM root files that you are going to analyze using this package, an example list file will look like this:

> <sub><sup>
> /pnfs/dune/persistent/.../SENSDET_ECAL_AND_TRAPE_INTTRK_TRAPEZOIDAL_EXTMUID_2Layers_ActiveIRON_EXTMUID/STT_FHC_001_gsim002_5e17.192819.edep.root
> /pnfs/dune/persistent/.../SENSDET_ECAL_AND_TRAPE_INTTRK_TRAPEZOIDAL_EXTMUID_2Layers_ActiveIRON_EXTMUID/STT_FHC_002_gsim003_5e17.192819.edep.root
> /pnfs/dune/persistent/.../SENSDET_ECAL_AND_TRAPE_INTTRK_TRAPEZOIDAL_EXTMUID_2Layers_ActiveIRON_EXTMUID/STT_FHC_003_gsim004_5e17.192819.edep.root
> /pnfs/dune/persistent/.../SENSDET_ECAL_AND_TRAPE_INTTRK_TRAPEZOIDAL_EXTMUID_2Layers_ActiveIRON_EXTMUID/STT_FHC_011_gsim012_5e17.192819.edep.root
> /pnfs/dune/persistent/.../SENSDET_ECAL_AND_TRAPE_INTTRK_TRAPEZOIDAL_EXTMUID_2Layers_ActiveIRON_EXTMUID/STT_FHC_012_gsim013_5e17.192819.edep.root
> </sup></sub>

We also have a file named `nn_config.sh` this contains the two NN cut values, one for the ECAL and the other for the EMI, initially you can set them to 0.5, but then after a training when you obtain a different cut as an output, you need to update that value.
Once the editing of those variables are done, you can source this script: 
``
source set_env.sh
``
### step - 2
To build the package, source the `install.sh` script from the top (package home) directory.

## Running the code

> 




