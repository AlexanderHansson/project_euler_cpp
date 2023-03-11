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

bool euler_primes::is_prime(size_t number) {
    if (number < 2) {
        return false;
    }
    std::vector<size_t> primes = get_primes(sqrt(number));
    return !check_divisibility(number, primes);
}

std::vector<size_t> euler_primes::get_primes(size_t number) {
    std::vector<size_t> primes;
    for (size_t i = 2; i <= number; i++) {
        if (!check_divisibility(i, primes)) {
            primes.push_back(i);
        }
    }
    return primes;
}

std::vector<size_t> euler_primes::n_first_primes(size_t n) {
    std::vector<size_t> primes;
    size_t n_primes;
    size_t i = 2;
    while (n_primes < n) {
        if (!check_divisibility(i, primes)) {
            primes.push_back(i);
            n_primes++;
        }
        i++;
    }
    return primes;
}

std::vector<size_t> euler_primes::prime_factorize(size_t number) {
    std::vector<size_t> primes;
    std::vector<size_t> factors;
    size_t x = 2;
    while (number > 1) {
        if (!check_divisibility(x, primes)) {
            // x is prime
            primes.push_back(x);
            while (number % x == 0) {
                factors.push_back(x);
                number/=x;
            }
        }
        x+=1;
    }
    return factors;
}
