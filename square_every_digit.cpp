#include <iostream>
#include <sstream>
#include <vector>
#include <string>

//Welcome.In this kata, you are asked to square every digit of a number and concatenate them.
//For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1. (81 - 1 - 1 - 81)
//Example #2: An input of 765 will / should return 493625 because 72 is 49, 62 is 36, and 52 is 25. (49 - 36 - 25)
//Note : The function accepts an integer and returns an integer.
//Happy Coding!

int square_digits(int num) {
    int res = 0;
    for (int i = 1, pow = 0; num != 0; num /= 10, pow > 9 ? i *= 100 : i *= 10) {
        pow = num % 10;
        pow *= pow;
        res += pow * i;
    }
    return res;
}


int main() {
    int n = 414;

    std::cout << square_digits(n) << std::endl;
    return 0;
}