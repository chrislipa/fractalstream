# Install script for directory: /Users/lipa/fractalstream/external/llvm-proj/llvm-3.1

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/include/" FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.td$" REGEX "/[^/]*\\.inc$" REGEX "/license\\.txt$" REGEX "/\\.svn$" EXCLUDE)
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/Users/lipa/fractalstream/external/llvm-proj/include/" FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.gen$" REGEX "/[^/]*\\.inc$" REGEX "/cmakefiles$" EXCLUDE REGEX "/\\.svn$" EXCLUDE)
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/lib/Support/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/lib/TableGen/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/utils/TableGen/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/include/llvm/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/lib/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/utils/FileCheck/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/utils/FileUpdate/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/utils/count/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/utils/not/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/utils/llvm-lit/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/utils/yaml-bench/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/projects/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/tools/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/runtime/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/examples/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/test/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/utils/unittest/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/unittests/cmake_install.cmake")
  INCLUDE("/Users/lipa/fractalstream/external/llvm-proj/cmake/modules/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/Users/lipa/fractalstream/external/llvm-proj/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/Users/lipa/fractalstream/external/llvm-proj/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
