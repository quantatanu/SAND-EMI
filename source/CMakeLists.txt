cmake_minimum_required(VERSION 3.0)
find_package(EDepSim)
find_package(ROOT REQUIRED COMPONENTS Geom EG)
set(CMAKE_BUILD_TYPE Debug)

#add_executable(runMuID_EXTMUID_alone muID_inEXTMUID_alone_nodraw.C)
#target_link_libraries(runMuID_EXTMUID_alone PUBLIC EDepSim::edepsim_io ${ROOT_LIBRARIES})


add_executable(runMuID_EXTMUID_NN muID_inEXTMUID_alone_nodraw_NN.C)
target_link_libraries(runMuID_EXTMUID_NN PUBLIC EDepSim::edepsim_io ${ROOT_LIBRARIES})



add_executable(runMuID_ECAL_NN muID_inECAL_alone_nodraw.C)
target_link_libraries(runMuID_ECAL_NN PUBLIC EDepSim::edepsim_io ${ROOT_LIBRARIES})


#add_executable(runNN_EXTMUID runNN_EXTMUID.cpp)
#target_link_libraries(runNN_EXTMUID PUBLIC EDepSim::edepsim_io ${ROOT_LIBRARIES})
