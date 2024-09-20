#include <iostream>
#include <sstream>
#include <vector>
#include <string>

//Build a function that returns an array of integers fr
//
//Example : n = 5 -- > [5, 4, 3, 2, 1]
//
//Fundamentals

std::vector<int> reverseSeq(int n) {
    std::vector<int> vector(n);
    int i = n;
    for (auto& x : vector)
        x += i--;
    return vector;
}


int main() {
    int n = 10;
    std::vector<int> result = reverseSeq(n);

    // Выводим результат
    for (int num : result)
        std::cout << num << " ";
    return 0;
}