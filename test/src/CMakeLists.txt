enable_testing()

add_executable(utest_primes utest_primes.cpp)

target_link_libraries(
    utest_primes
    ${SHARED_LIB}
    gtest
)
include(GoogleTest)
gtest_discover_tests(utest_primes)

install(TARGETS utest_primes RUNTIME DESTINATION ${UTEST_INSTALL_DIR})

