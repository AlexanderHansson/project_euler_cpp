#include <euler/primes.hpp>
#include <cmath>
using std::size_t;

/* checks if x is divisible by any element in the list primes
   ASSUMES that the list primes is sorted */
bool check_divisibility(size_t x, std::vector<size_t>& primes) {
    size_t root = sqrt(x);
    for (size_t p : primes) {
        // list is ordered and x wont
        // be divisible by something larger
        // than its root
        if (p > root) {
            break;
        }
        if (x % p == 0) {
            return true;
        }
    }
    return false;
}

std::vector<size_t> euler_primes::get_primes(size_t number) {
    std::vector<size_t> primes;
    for (size_t i = 2; i < number; i++) {
        if (!check_divisibility(i, primes)) {
            primes.push_back(i);
        }
    }
    return primes;
}

std::vector<size_t> euler_primes::prime_factorize(size_t number) {
    std::vector<size_t> primes = get_primes(sqrt(number));
    std::vector<size_t> factors;
    for (size_t p : primes) {
        while (number % p == 0) {
            factors.push_back(p);
            number/=p;
        }
        if (number == 1) {
            break;
        }
    }
    return factors;
}
