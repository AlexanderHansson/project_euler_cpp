#include <iostream>

int main() {
    size_t squaresum = 0;
    size_t sum = 0;
    for (size_t i = 1; i <= 100; i++) {
        squaresum += (i*i);
        sum += i;
    }
    size_t sumsquare = sum*sum;
    size_t diff = sumsquare - squaresum;
    std::cout << sumsquare << "-" << squaresum << "=" << diff << std::endl;
    return 0;
}
