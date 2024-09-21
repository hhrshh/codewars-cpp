#include <iostream>
#include <string>

//Finish the solution so that it takes an input n(integer) and returns a string
// that is the decimal representation of the number grouped by commas after every 3 digits.
//
//Assume: 0 <= n < 2147483647
//
//    Examples
//    1  ->           "1"
//    10  ->          "10"
//    100  ->         "100"
//    1000  ->       "1,000"
//    10000  ->      "10,000"
//    100000  ->     "100,000"
//    1000000  ->   "1,000,000"
//    35235235  ->  "35,235,235"

std::string group_by_commas(int n) {
    std::string number;
    if (!n)
        return number += '0';
    for (int i = 1; n != 0; n /= 10, ++i) {
        number += std::to_string(n % 10);
        if (i == 3 && n >= 10) {
            number += ",";
            i = 0;
        }
    }
    std::reverse(number.begin(), number.end());
    return number;
}


int main() {

    int n = 0;
    std::cout << group_by_commas(n) << std::endl;
    return 0;
}