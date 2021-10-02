# SAND-EMI
This packaged is a modification of Bing Guo's [ecal muon identification code](https://github.com/bingguo1/muIdentification), it is the muon identification code for **E**xternal **M**uon **I**dentification of the SAND detector of the DUNE **N**ear **D**etector.


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

Once the editing those two variables are done, you can source this script: 
``
source set_env.sh
``
### step - 2
To build the package, source the `install.sh` script from the top (package home) directory.

## Running the code
Just `source run_emi.sh N` will suffice. Where `N` is the number of files (from the top) listed in the `file_list` file that you want to analyze.

