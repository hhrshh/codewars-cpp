#include <iostream>
#include <string>


// Trolls are attacking your comment section!
// A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.
// Your task is to write a function that takes a string and return a new string with all vowels removed.
// For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".
// Note: for this kata y isn't considered a vowel.


std::string disemvowel(const std::string& str) {
    std::string new_str;
    for(int i = 0, j = 0 ; i < str.length(); ++i) {
        if(!(str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u' ||
           str.at(i) == 'A' || str.at(i) == 'E' || str.at(i) == 'I' || str.at(i) == 'O' || str.at(i) == 'U')) {
            new_str +=  str.at(i);
        }
    }
    return new_str;
}

int main() {

    std::string str = "Hellow wordik!";

    std::cout << disemvowel(str) << std::endl;
    return 0;
}