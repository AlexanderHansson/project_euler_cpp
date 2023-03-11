cmake_minimum_required (VERSION 3.24.2)
get_filename_component(name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${name})
add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE ${SHARED_LIB})

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${PROBLEMS_INSTALL_DIR})
