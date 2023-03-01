
#include <iostream>
constexpr int limit = 1000;

int main(void) {
    size_t sum = 0;
    for (size_t i = 0; i < limit; i++) {
        if (i%3==0 || i%5==0) {
            sum+=i;
        }
    }
    std::cout << "sum: " << sum << std::endl;
    return 0;

}


