# Install script for directory: /Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools

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
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-config/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/opt/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-as/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-dis/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-mc/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llc/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-ranlib/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-ar/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-nm/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-size/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-ld/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-cov/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-prof/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-link/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/lli/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-extract/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-diff/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/macho-dump/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-objdump/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-readobj/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-rtdyld/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-dwarfdump/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/bugpoint/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/bugpoint-passes/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-bcanalyzer/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-stub/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/llvm-stress/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/lto/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

