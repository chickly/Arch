# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/liu/Code/Cpp/_deps/_project_options-src"
  "/home/liu/Code/Cpp/_deps/_project_options-build"
  "/home/liu/Code/Cpp/_deps/_project_options-subbuild/_project_options-populate-prefix"
  "/home/liu/Code/Cpp/_deps/_project_options-subbuild/_project_options-populate-prefix/tmp"
  "/home/liu/Code/Cpp/_deps/_project_options-subbuild/_project_options-populate-prefix/src/_project_options-populate-stamp"
  "/home/liu/Code/Cpp/_deps/_project_options-subbuild/_project_options-populate-prefix/src"
  "/home/liu/Code/Cpp/_deps/_project_options-subbuild/_project_options-populate-prefix/src/_project_options-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/liu/Code/Cpp/_deps/_project_options-subbuild/_project_options-populate-prefix/src/_project_options-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/liu/Code/Cpp/_deps/_project_options-subbuild/_project_options-populate-prefix/src/_project_options-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
