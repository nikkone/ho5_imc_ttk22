cmake_minimum_required (VERSION 3.1 FATAL_ERROR)
project (ho5_imc)

# The version number.
set (ho5_imc_VERSION_MAJOR 1)
set (ho5_imc_VERSION_MINOR 0)
 
 
# add the binary tree to the search path
include_directories("${PROJECT_SOURCE_DIR}")

# List sources related with CPP IMC bindings
file(GLOB_RECURSE IMC_SOURCES "${PROJECT_SOURCE_DIR}/IMC/*.cpp")
file(GLOB_RECURSE IMC_HEADERS "${PROJECT_SOURCE_DIR}/IMC/*.hpp")


# add the executable
add_library(imc ${IMC_HEADERS} ${IMC_SOURCES})

# Create udp library
add_library(udp UDP/DatagramSocket.cpp)

add_executable(ho5_imc ho5_imc.cpp)
target_link_libraries(ho5_imc imc udp)
