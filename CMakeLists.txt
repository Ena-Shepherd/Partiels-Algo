# /*

#  Author: Yannis STEFANELLI

#  Creation Date: 06-03-2023 14:11:18

#  Description :

# */

cmake_minimum_required(VERSION 3.11)

# Executable name
set(PROJECT_NAME
    out
)

project(${PROJECT_NAME} CXX)

# Source files
file(GLOB SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})