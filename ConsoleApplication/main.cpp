#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>
#include "Calculator.h"
using namespace std;

//double applyOperator(double a, double b, const std::string& op) {
//    if (op == "+") {
//        return a + b;
//    }
//    else if (op == "-") {
//        return a - b;
//    }
//    else if (op == "*") {
//        return a * b;
//    }
//    else if (op == "/") {
//        if (b != 0) {
//            return a / b;
//        }
//        else {
//            throw std::invalid_argument("Division by zero");
//        }
//    }
//    else {
//        throw std::invalid_argument("Invalid operator");
//    }
//}

string calculateValue(string mathOperator, int value1, int value2) {
    
    if (mathOperator.size() == 0) {
        return "no operator given";
    }

    if (mathOperator == "+") 
    {
        return to_string(value1 + value2);
    }
    else if (mathOperator == "-") 
    {
        return to_string(value1 - value2);
    }
    else if (mathOperator == "*")
    {
        return to_string(value1 * value2);
    }
    else if (mathOperator == "/")
    {
        return to_string(value1 / value2);
    }
    else {
        return "operator " + mathOperator + " did not match any of our accepted values. Please fix this.";
    }


}


int main()
{
    string x;
    Calculator c;

    // CALCULATOR APPLICATION

    // Create a CLI tool that can run any equation you give it
    // Start with the basic operators 
    // -------------------------------------------------------
    // Add
    // Subtract 
    // Multiply 
    // Divide 
    // 
    // -------------------------------------------------------
    // Example Equation 
    // (5 + 6)*10 = ??
    // 
    // The idea is use traditional order of operations (PEMDAS)
    //
    // Advanced Example
    // (6+11)^7 * (6^10) - 67 = ??
    //
    // More advanced algebraic expressions could be cool but I think this is a good place to start 
    //
    // -------------------------------------------------------
    // Initialize calculator 
    //
    // Welcome to your C++ calculator application 
    //
    // Ask user for input 
    //
    // Ex: 5 + 6
    //
    //
    // parse input
    // divide into array of chars? 
    //
    // char[]
    // [5][+][6]
    //
    // use switch statement to evaluate each char
    // switch(i)
    //
    // case i is a number  (or i is the first char?)
    // 
    // 
    // 

    // hmm... instead add state to the reading 
    // 1. look for number or value
    // 2. find operator 
    // 3. look for another number or value

    string z;
    
    cout << "Welcome to the C++ Calculator!" << endl;
    cout << "Please enter your calculation: " << endl;

    //char t = '5';

    //if (isdigit(t)) {
    //    int num = t - '0'; // Convert char to int
    //    cout << "The character " << t << " can be converted to the integer " << num << endl;
    //}
    //else {
    //    cout << "The character " << t << " cannot be converted to an integer." << endl;
    //}

    
    cin >> z;
    vector<char> inputEval(z.begin(), z.end());


    // parse user input

    // split string into char(s)

    string tmpNumString{};
    string currentCalculation{ "0" };
    char _operator{'z'};
    

    for (int i = 0; i <= inputEval.size() -1; i++) {
        cout << "parsed char: " << inputEval[i] << endl;

        if (isdigit(inputEval[i]))
        {
            if (_operator != 'z') {
                currentCalculation = calculateValue(string(1, _operator), stoi(currentCalculation), stoi(tmpNumString));
                _operator = 'z';

            }
            else {
                tmpNumString += inputEval[i];
                if 
            }
            /*if (i == inputEval.size() -1)
            {
                cout << "final iteration" << endl;
                currentCalculation = calculateValue(string(1, inputEval[i]), stoi(currentCalculation), stoi(tmpNumString));
            }*/
        }

        else if (inputEval[i] == '+' || inputEval[i] == '-' || inputEval[i] == '*' || inputEval[i] == '/' || inputEval[i] == '%' && tmpNumString.size() > 0)
        {
            _operator = inputEval[i];
            /*currentCalculation = calculateValue(string(1, inputEval[i]), stoi(currentCalculation), stoi(tmpNumString));*/
            /*tmpNumString = "";*/
        }


    }

    cout << "your calculation is: " << currentCalculation << endl;
    /*int num = 12345;

    if (num == 0) {
        std::cout << "Number of digits: 1\n";
    }
    else {
        int digits = std::floor(log10(std::abs(num))) + 1;
        std::cout << "Number of digits: " << digits << "\n";
    }*/



      




    return 0;
}