#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>
#include "Calculator.h"
using namespace std;
int main()
{
    string x = {""};
    Calculator c;

    vector<string> userOptions;

    userOptions.push_back("Addition");
    userOptions.push_back("Subtraction");
    userOptions.push_back("Division");
    userOptions.push_back("Multiplication");
    
    cout << "Welcome to the calculator. I am your mathematical wizard. What can I help you with? Type a number that corresponds with the operation you want to use." << endl;

    for (const auto& option : userOptions) {
        std::cout << option << std::endl;
    }

    std::getline(std::cin, x);

    cout << "You chose " << x << " as an option." << endl;


    std::string z;
    std::cout << "Enter a number you would like to use in this operation";
    std::getline(std::cin, z);

    std::cout << "The number you have chosen is " << z << "!\n";


    return 0;
}