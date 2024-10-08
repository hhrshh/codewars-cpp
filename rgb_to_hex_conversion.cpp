#include <iostream>
#include <sstream> 
#include <iomanip> 


// The rgb function is incomplete
// Complete it so that passing in RGB decimal values will result in a hexadecimal representation being returned.
// Valid decimal values for RGB are 0 - 255. 
// Any values that fall out of that range must be rounded to the closest valid value.
//
// Note: Your answer should always be 6 characters long, the shorthand with 3 will not work here.
//
// Examples(input -- > output) :
//    255, 255, 255 -- > "FFFFFF"
//    255, 255, 300 -- > "FFFFFF"
//    0, 0, 0       -- > "000000"
//    148, 0, 211   -- > "9400D3"

std::string rgb_to_hex(int r, int g, int b) {

    r = std::max(0, std::min(255, r));
    g = std::max(0, std::min(255, g));
    b = std::max(0, std::min(255, b));

    std::stringstream hex;

    hex << std::setw(2) << std::setfill('0') << std::uppercase << std::hex << r;
    hex << std::setw(2) << std::setfill('0') << std::uppercase << std::hex << g;
    hex << std::setw(2) << std::setfill('0') << std::uppercase << std::hex << b;

    return hex.str();
}


int main() {

    int r = -20;
    int g = 300;
    int b = 300;
    std::cout << rgb_to_hex(r, g, b) << std::endl;
    return 0;
}