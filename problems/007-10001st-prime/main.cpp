#include <iostream>
#include <vector>
#include <euler/primes.hpp>

int main() {
    std::vector<std::size_t> primes = euler_primes::n_first_primes(10001);
    std::cout << primes[10000] << std::endl;
    return 0;
}
