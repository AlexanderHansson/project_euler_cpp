#include <iostream>

bool divisible(size_t num) {
    for (int i = 1; i <= 20; i++) {
        if (num % i != 0)
            return false;
    }
    return true;
}


int main() {
    size_t i = 1;
    while (!divisible(i)) {
        i++;
    }
    std::cout << i << std::endl;
    return 0;
}
