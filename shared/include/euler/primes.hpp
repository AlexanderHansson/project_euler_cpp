#ifndef EULER_PRIMES_HPP_
#define EULER_PRIMES_HPP_
#include <vector>
namespace euler_primes {
    /* returns a sorted vector of all primes up to number (including) */
    std::vector<std::size_t> get_primes(std::size_t number);

    /* returns a sorted vector of the n first primes */
    std::vector<std::size_t> n_first_primes(std::size_t n);

    /* returns true if number is a prime, otherwise false */
    bool is_prime(std::size_t number);

    /* returns a sorted vector of all prime factors of number */
    std::vector<std::size_t> prime_factorize(std::size_t number);
}
#endif
