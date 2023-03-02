cmake_minimum_required (VERSION 3.24.2)
project(euler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -g")
set(INSTALL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/install)

#---------- shared resources ----------------
set(SHARED_LIB euler_shared)

file(GLOB SHARED_SRC
    "shared/src/*.cpp"
)

add_library(${SHARED_LIB} STATIC ${SHARED_SRC})

target_include_directories(${SHARED_LIB}
    PUBLIC
    "shared/include"
)
# -------------------------------------------

add_subdirectory(001-multiples-of-3-or-5)
add_subdirectory(002-even-fibonacci-numbers)
add_subdirectory(003-largest-prime-factor)
