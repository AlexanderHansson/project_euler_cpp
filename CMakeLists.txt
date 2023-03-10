cmake_minimum_required (VERSION 3.24.2)
project(euler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -g")
set(INSTALL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/install)
set(PROBLEMS_INSTALL_DIR ${INSTALL_DIR}/problems)

IF(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
     SET(CMAKE_INSTALL_PREFIX ${INSTALL_DIR}/googletest CACHE PATH override FORCE)
ENDIF(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)

#---------- shared resources ---------------
set(SHARED_LIB euler_shared)
add_subdirectory(shared)

# ------------------Test--------------------
add_subdirectory(test)

#-----------------Problems------------------
add_subdirectory(problems)
