#include <iostream>
#include <vector>
#include <cmath>

size_t n_divisors(size_t num) {
    size_t sqr = sqrt(num);
    size_t count = 0;
    for (size_t i = 1; i < sqr; i++) {
        if (num % i == 0) {
            //std::cout << i << " " << num/i << " ";
            count+=2;
        }
    }
    if (num % sqr == 0) {
        count++;
        //std::cout << sqr;
    }

    //std::cout << std::endl;

    std::cout << num << " has " << count << " divisors" << std::endl;
    return count;

}

int main() {
    size_t n = 0;
    size_t i = 0;
    while (n_divisors(n+=++i) < 500);
    std::cout << n << std::endl;
    return 0;
}
