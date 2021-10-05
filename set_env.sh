#!/bin/bash
#####################################################################################
# setting the environment
#####################################################################################

# ********* WARNING ******** FOLLOWING LINE, THAT IS "base_output_root_dir" MUST BE #
# ********* edited, this is where you would like to store all your analysis files   #
base_output_root_dir="/pnfs/dune/persistent/users/anath/EXTMUID_ANALYSIS/ROOT/";    #
# ********* AND THE FOLLOWING FILE MUST CONTAIN ABSOLUTE PATHS TO THE EDEPSIM ROOT  #  
# ********* files that you are going to analyze, this file containing the path list #  
# ********* must be kept within the "input" directory located at home of this pack. #  
file_list="atanus_common_inputs_ActiveIron.txt";
# **********************************************************************************#

echo -e "  \e[32mSetting up the environment variables...\e[0m";
sleep 1;
# unsetting precious set up if any..................................................#
echo -e "\e[33m  Unsetting any previous path settings (if any) first..."
echo "  unset script_path";
unset script_path
echo "  unset script_dir";
unset script_dir
echo "  unset source_dir";
unset source_dir
echo -e "  unset build_dir\e[0m";
unset build_dir
echo -e "  unset log_dir\e[0m";
unset log_dir
#...................................................................................#

sleep 1;
if [[ $0 != $BASH_SOURCE ]] 
then
    if [[ "${script_path}" != "dune" ]]
    then
        script_path="$(readlink -f $BASH_SOURCE)";
        script_dir="$(dirname $script_path)";
        source_dir="${script_dir}/source";
        build_dir="${script_dir}/build";
        log_dir="${script_dir}/logs";
    fi
    echo -e "\e[33m  Creating the directory: ${log_dir} if it didn't already exist...";
    log_dir="${log_dir}"; 
    mkdir -p "${log_dir}"

    echo -e "\e[33m  Creating the directory: ${nn_input_dir} if it didn't already exist...";
    nn_input_dir="${base_output_root_dir}NNINPUT/"; 
    mkdir -p "${nn_input_dir}"

    echo "  Creating the directory: ${nn_output_dir} if it didn't exist already...";
    nn_output_dir="${base_output_root_dir}NNOUTPUT/";
    mkdir -p ${nn_output_dir};

    echo "  Creating the ROOT file backup directory: ${backup_output_dir}, if it didn't exist already...";
    backup_output_dir="${base_output_root_dir}BACKUP_OUTPUT/";
    mkdir -p ${backup_output_dir};
    echo -e "  Done!\e[0m"
else
    echo -e "  \e[31mPlease source the script, do not run it!";
    echo -e "  Exiting...\e[0m"
fi
echo -e "\e[33m  Exiting...\e[0m"
#####################################################################################
