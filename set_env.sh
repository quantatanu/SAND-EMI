#!/bin/bash
#####################################################################################
# setting the environment
#####################################################################################
unset script_path
unset script_dir
unset source_dir
unset build_dir
#[[ $0 != $BASH_SOURCE ]] && exe_msg="Script is being sourced" || exe_msg="Script is being run"
if [[ "${script_path}" != "dune" ]]
then
    script_path="$(readlink -f $BASH_SOURCE)";
    script_dir="$(dirname $script_path)";
    source_dir="${script_dir}/source";
    build_dir="${script_dir}/build";
fi
base_output_root_dir="/pnfs/dune/persistent/users/anath/EXTMUID_ANALYSIS/ROOT/";
file_list="atanus_common_inputs_ActiveIron.txt";
nn_input_dir="${base_output_root_dir}NNINPUT/";
nn_output_dir="${base_output_root_dir}NNOUTPUT/";
backup_output_dir="${base_output_root_dir}BACKUP_OUTPUT/";
#####################################################################################
