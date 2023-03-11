#include <iostream>
#include <euler/number.hpp>

size_t max = 0;

int main() {
    std::cout << "hello" << std::endl;
    for (size_t a = 100; a < 1000; a++) {
        for (size_t b = a; b < 1000; b++) {
            size_t prod = a*b;
            if (euler::is_palindrome(prod)) {
                max = prod > max ? prod:max;
                if (max == prod) {
                    std::cout << a << "*" << b << "=" << prod << std::endl;
                }
            }
        }
    }
    std::cout << max << std::endl;
    return 0;
}
