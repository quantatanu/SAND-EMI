#!/bin/bash
# This script builds the package in the build directory, you must run it from the home directory

echo -e "\e[96mBuilding the EMI package...\e[0m";
if [[ "${script_dir}" != *"dune"* ]]
then
    # setting environmental variables 
    echo -e "\e[31mPlease set the environment vars first by sourcing set_env.sh in the main dir."
    echo -e "Exiting...\e[0m";
    return 1
fi

if [[ "$(pwd)" != *"${script_dir}"* ]]
then
    echo -e "\e[31mError: must be run from \"${script_dir}\", instead you are in $(pwd)";
    echo -e "Exiting...\e[0m";
else
    cd $build_dir;
    echo -e "\e[96mBuild dir : ${build_dir}";
    echo "Source dir: ${source_dir}";
    sleep 1;

    echo "cmake ${source_dir}; make;"
    sleep 1;   
    cmake ${source_dir}; make;   
    cd ${script_dir};
    echo "Done!";
    echo -e "Exiting...\e[0m" 
fi
