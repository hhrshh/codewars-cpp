#include <iostream>
#include <sstream> 
#include <iomanip> 


//Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence,
// which is the number of times you must multiply the digits in num until you reach a single digit.
//For example(Input-- > Output) :
// 39 -- > 3 (because 3 * 9 = 27, 2 * 7 = 14, 1 * 4 = 4 and 4 has only one digit, there are 3 multiplications)
// 999 -- > 4 (because 9 * 9 * 9 = 729, 7 * 2 * 9 = 126, 1 * 2 * 6 = 12, and finally 1 * 2 = 2,
// there are 4 multiplications)
// 4 -- > 0 (because 4 is already a one - digit number, there is no multiplication)


int persistence(long long n) {
    if (!n)
        return 0;
    if (n < 10)
        return 0;
    int mul;
    int i;

    for (i = 0; n > 9; n = mul) {
        for (mul = 1; n != 0; n /= 10)
            mul *= n % 10;
        ++i;
    }
    return i;
}


int main() {

    long long n = 444;
    std::cout << persistence(n) << std::endl;
    return 0;
}