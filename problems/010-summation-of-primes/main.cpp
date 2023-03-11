#include <iostream>
#include <euler/primes.hpp>
#include <vector>

int main() {
    std::vector<size_t> primes = euler_primes::get_primes(2000000);
    size_t sum = 0;
    for (size_t p : primes) {
        sum+=p;
    }
    std::cout << sum << std::endl;
}
