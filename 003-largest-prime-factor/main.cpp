
#include <euler/primes.hpp>
#include <iostream>

constexpr static size_t num = 600851475143;

int main() {
    std::vector<size_t> prime_factors = euler_primes::prime_factorize(num);
    std::cout << num << " = ";
    for (size_t p: prime_factors) {
        std::cout << p << " * ";
    }
    std::cout << std::endl;
    return 0;
}
