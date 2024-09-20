#include <iostream>
#include <map>
#include <string>

//The main idea is to count all the occurring characters in a string.If you have a string like aba,
// then the result should be{ 'a': 2, 'b' : 1 }.
//What if the string is empty ? Then the result should be empty object literal, {}.

std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> answMap;
    for (unsigned i = 0; i < string.size(); ++i)
        answMap[string[i]] += 1;
    return answMap;
}


int main() {
    std::string str = "aaa";
    for (const auto& pair : count(str)) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    return 0;
}