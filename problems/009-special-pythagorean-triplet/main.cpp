#include <iostream>

bool is_triplet(size_t a, size_t b, size_t c) {
    return (c*c) == (a*a + b*b);
}

int main() {
    // assume a < b
    for (size_t a = 1; a < 1000; a++) {
        for (size_t b = a; (b+a) < 1000; b++) {
            size_t c = 1000 - a - b;
            if (is_triplet(a,b,c)) {
                std::cout << a << "+" << b << "+" << c << "=" << a+b+c << std::endl;
                std::cout << a << "*" << b << "*" << c << "=" << a*b*c << std::endl;
            }
        }
    }
}
