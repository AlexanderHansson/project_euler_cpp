cmake_minimum_required (VERSION 3.24.2)

set(SHARED_LIB euler_shared)

file(GLOB SHARED_SRC
    "src/*.cpp"
)

add_library(${SHARED_LIB} STATIC ${SHARED_SRC})

target_include_directories(${SHARED_LIB}
    PUBLIC
    "include"
)
