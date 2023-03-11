#include <euler/number.hpp>
using std::size_t;
std::deque<size_t> euler::to_digits(size_t number) {
    std::deque<size_t> digits;
    while (number > 0) {
        digits.push_front(number%10);
        number/=10;
    }
    return digits;
}

bool euler::is_palindrome(size_t number) {
    std::deque<size_t> digits = euler::to_digits(number);
    size_t limit = digits.size() / 2;
    for (size_t i = 0; i < limit; i++) {
        if (digits[i] != digits[digits.size()-i-1]) {
            return false;
        }
    }
    return true;
}
