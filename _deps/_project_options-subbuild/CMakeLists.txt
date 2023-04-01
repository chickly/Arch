# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.25.2)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(_project_options-populate NONE)



include(ExternalProject)
ExternalProject_Add(_project_options-populate
                     "UPDATE_DISCONNECTED" "False" "DOWNLOAD_EXTRACT_TIMESTAMP" "TRUE" "URL" "https://gitee.com/FeignClaims/vscode-llvm-cpp-starter/raw/master/project_options.zip"
                    SOURCE_DIR          "/home/liu/Code/Cpp/_deps/_project_options-src"
                    BINARY_DIR          "/home/liu/Code/Cpp/_deps/_project_options-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
                    USES_TERMINAL_PATCH     YES
)


