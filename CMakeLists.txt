cmake_minimum_required(VERSION 3.10)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(PrisonerDilemma)

add_subdirectory("src/Strategy")
add_subdirectory("src/Competition")

add_executable(PrisonerDilemma "src/main.cxx" )
target_include_directories(PrisonerDilemma PRIVATE "src/Strategy" "src/Competition")
target_link_libraries(PrisonerDilemma PRIVATE Strategy Competition)
