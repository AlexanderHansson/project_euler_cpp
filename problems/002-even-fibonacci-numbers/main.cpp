
#include <iostream>
constexpr size_t limit = 4000000;

int main(void) {
    size_t a = 1;
    size_t b = 1;
    size_t even_sum = 0;
    while (a < limit) {
        std::cout << a << " ";
        if (a%2 == 0) {
            even_sum+=a;
        }
        size_t t = a;
        a = a + b;
        b = t;
    }
    std::cout << std::endl;
    std::cout << "even sum: " << even_sum << std::endl;
    return 0;

}


