#ifndef EULER_PRIMES_HPP_
#define EULER_PRIMES_HPP_
#include <vector>
namespace euler_primes {
    /* returns a sorted vector of all primes below number */
    std::vector<std::size_t> get_primes(std::size_t number);

    /* returns a sorted vector of all prime factors of number */
    std::vector<std::size_t> prime_factorize(std::size_t number);
}
#endif
