file(GLOB SOURCES "*.cxx" "*.hxx")
add_library(Competition SHARED ${SOURCES})
target_include_directories(Competition PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Competition PRIVATE Strategy)