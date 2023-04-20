cmake_minimum_required(VERSION 3.26)
project(Cpp LANGUAGES CXX)
project(src CXX)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(MyProjectOptions)

include(StructureOnly)
structure_only(
  DIRECTORIES
  src
  test
)