# Install script for directory: /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/acipher/cmake_install.cmake")
  include("/home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/aes/cmake_install.cmake")
  include("/home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/hello_world/cmake_install.cmake")
  include("/home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/hotp/cmake_install.cmake")
  include("/home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/plugins/cmake_install.cmake")
  include("/home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/random/cmake_install.cmake")
  include("/home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/secure_storage/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
