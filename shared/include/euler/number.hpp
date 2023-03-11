#ifndef EULER_NUMBER_HPP_
#define EULER_NUMBER_HPP_
#include <deque>
using std::size_t;
namespace euler {
    /* returns a list of all the digits in number */
    std::deque<size_t> to_digits(size_t number);

    /* return true if number is a palindrome */
    bool is_palindrome(size_t number);
}
#endif
