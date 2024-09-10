file(GLOB SOURCES "*.cxx" "*.hxx")
add_library(Strategy SHARED ${SOURCES})
target_include_directories(Strategy PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(Strategy PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)