#include <iostream>
#include <sstream>
#include <vector>
#include <string>

// In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest number.
// Examples
// highAndLow("1 2 3 4 5");  // return "5 1"
// highAndLow("1 2 -3 4 5"); // return "5 -3"
// highAndLow("1 9 3 4 -5"); // return "9 -5"
// Notes
// All numbers are valid Int32, no need to validate them.
// There will always be at least one number in the input string.
// Output string must be two numbers separated by a single space, and highest number is first.

std::string highAndLow(const std::string& numbers) {

    std::istringstream iss(numbers);
    std::string Answere; // Строка для хранения чисел
    int Number;
    int MaxNumber = std::stoi(numbers);
    int MinNumber = MaxNumber;
    // Читаем числа из потока
    while (iss >> Number) {
        MaxNumber = Number > MaxNumber ? Number : MaxNumber;
        MinNumber = Number < MinNumber ? Number : MinNumber;
    }
    Answere += std::to_string(MaxNumber);
    Answere.push_back(32);
    Answere += std::to_string(MinNumber);
    return Answere;
}



int main() {

    std::string str = "-1";

    std::cout << highAndLow(str) << std::endl;
    return 0;
}