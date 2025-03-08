// CSC 134
// M3HW1-Gold
// Sebastian Camacho
// 03/08/2025

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    std::string response;

    // Sample run prompt
    std::cout << "Hello I'm a C++ Program!" << endl;
    std::cout << "Do you like me? Please type yes or no" << endl;

    std::cin >> response;

    // sample run repsonse
    if (response == "yes") {
        std::cout << "That's great! I'm sure we'll get along" << endl;
    }else if (response == "no") {
        std::cout << "Well, maybe you will learn to like me later" << endl;
    }else {
        std::cout << "If you're not sure... that's ok" << endl;
    }

    return 0;
}