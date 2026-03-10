#include <iostream>
#include <sstream> 
#include <iomanip> 
#include <vector>
#include <map>
#include <stack>

std::string interpreter(const std::string& code, const std::string& tape)
{
    std::string result = tape;
    std::map<int, int>goTo;
    std::stack<int> stackBrackets;

    for (size_t i = 0; i < code.size(); ++i)
    {
        if (code[i] == '[')
            stackBrackets.push(i);
        else if (code[i] == ']')
        {
            goTo.insert({ stackBrackets.top(), i}); // --> [key] jump
            goTo.insert({i, stackBrackets.top()});  // <-- [key] jump
            stackBrackets.pop();
        }
    }

    for (int i = 0, s = 0; i < code.size(); ++i)
    {
        switch (code[i]) 
        {
            case '>': if (++s >= result.size()) return result; break;   // ++
            case '<': if (--s < 0) return result; break;                // --
            case '*': result[s] ^= 1; break;                            // >>
            case '[': if (result[s] == '0') i = goTo[i]; break;         // -->
            case ']': if (result[s] == '1') i = goTo[i]; break;         // <--
        }
    }

    return result;
}

int main()
{

    std::string code1 = "[>[*>*>]<]";
    std::string tape1 = "0100";         // 0000

    std::string code2 = "[*>*>*>*>*]";
    std::string tape2 = "111100101010"; //  000001010010

    std::string result1 = interpreter(code1, tape1);
    std::string result2 = interpreter(code2, tape2);

    std::cout << result1 << " " << result2 << std::endl;



    return 0;
}
