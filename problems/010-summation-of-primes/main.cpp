#include <iostream>
#include <euler/primes.hpp>
#include <vector>
#include <numeric>
int main() {
    std::vector<size_t> primes = euler_primes::get_primes(2000000);
    size_t sum = std::accumulate(primes.begin(), primes.end(), 0);
    std::cout << sum << std::endl;
}
