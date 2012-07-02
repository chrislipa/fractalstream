# Install script for directory: /Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/examples

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/examples/BrainF/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/examples/Fibonacci/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/examples/HowToUseJIT/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/examples/Kaleidoscope/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/examples/ModuleMaker/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/examples/ExceptionDemo/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/examples/ParallelJIT/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

