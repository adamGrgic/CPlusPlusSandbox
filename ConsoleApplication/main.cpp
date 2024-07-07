#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>
#include "Calculator.h"
using namespace std;


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



void calculateInput() {
    string z;
    cin >> z;
    vector<char> inputEval(z.begin(), z.end());
    string tmpNumString{};
    string currentCalculation{ "0" };
    char _operator{ 0 };

    // ok now we need to consider how to handle order of operations (PEMDAS)
    // find paranethesis
    // if ( or ) found then extract the contents

    // find exponents
    // if found calculate those values

    // ... etc


    // create queue of operations? 
    // | op1  |  op2  |  op3  |  op4  |
    // => empty queue 
    // 
    // 

    // maybe before the below content (starting at loop through expression), we should format the content inside to be easier to work with 
    // split expression string into a vector<string>? 
    // 1. find all numbers and make them complete (and then mark them as int, decimal, float, etc)  
    // 2. 
    // 
    // expression queue
    // => [  expr1  ][ operator ][ expr2 ]...
    // [ item: { type: number...float, expression1 ( + ... *, "(" ), expression2 ")", etc; value: 5, 55.6, *, %, etc } 
    // 
    // 
    // 
    // loop through expression
    // if we find ( , mark the index at which its found, then search for the closing )
    // create a new operation in the queue
    // operation: P, range: [x] to [y]
    // => 1. check if theres another ( ) inside current ( ) 
    // => if. if there is another ( ) , jump into that parenthesis and do things there
    //       II. repeat this same method (recursion) to create order of operations for the content inside the parenthesis 
    //         if. exponent is found (^ operator) 
    //             => find the number before it and the number after it   
    // => 1b. 
    //      if there is none, move on to the next operation (e)
    //      
    // 
    // => 2. 
    // 
    // 
    // 
    // => 
    // 


    for (int i = 0; i <= inputEval.size() - 1; i++) {
        cout << "parsed char: " << inputEval[i] << endl;

        if (isdigit(inputEval[i]))
        {
            if (_operator == 0)
            {
                currentCalculation = inputEval[i];
                _operator = 'z';
            }

            else if (_operator != 'z') {
                if (inputEval.size() - 1 != i) {
                    if (isdigit(inputEval[i + 1])) {
                        tmpNumString += inputEval[i];
                    }

                    else {
                        tmpNumString += inputEval[i];
                        currentCalculation = calculateValue(string(1, _operator), stoi(currentCalculation), stoi(tmpNumString));
                        _operator = 'z';
                        tmpNumString = "";
                    }
                }
                else {
                    tmpNumString += inputEval[i];
                    currentCalculation = calculateValue(string(1, _operator), stoi(currentCalculation), stoi(tmpNumString));
                    _operator = 'z';
                    tmpNumString = "";
                }


            }
            else {
                tmpNumString += inputEval[i];
                // need to figure out what to do when there's no operator selected 
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

    cout << "Your calculation is: " << currentCalculation << endl;
}

void initializeCalculator() {

    cout << "Please enter an expression to calculate." << endl;
    calculateInput();
    initializeCalculator();

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
    

    // keep
    /*initializeCalculator();*/


    // next set of instructions after getting rudimentary arithmetic down 
    // maybe before the below content (starting at loop through expression), we should format the content inside to be easier to work with 
    // split expression string into a vector<string>? 
    // 1. find all numbers and make them complete (and then mark them as int, decimal, float, etc)  
    // 2. 
    // 
    // expression queue
    // => [  expr1  ][ operator ][ expr2 ]...
    // [ item: { type: number...float, expression1 ( + ... *, "(" ), expression2 ")", etc; value: 5, 55.6, *, %, etc } 


    vector<string> y;
    cin >> z;


    // creating an easily digestible list
    for (auto& c : z) {
        cout << c << endl;

        // if c is a number
        // add to tmp num string
        // 

        // if c is not a num (an operator)
        // check what operator 

        // if +, -, /, *
        // add tmp num to list (maybe do this everytime its an operator?)
        //      determine if int, decimal, double, etc. 
        // then add operator to list 
        // set operator to z (resting operator)
        // 
        // (somewhere above) - create priority variable (int) = 0;
        // this will be used to determine priority of parenthetical operations
        // 
        // if (
        // set operator to p
        //      p means search for closing parenthesis
        //  search for closing parenthesis 
        //      (maybe) set variable openingP = 1, which tracks the amount of opening parenthesis we are currently on
        //      create for loop that starts at position of opening parenthesis and keeps looping until closing parenthesis is found
        //      if another opening parenthesis is found, dive into this parentheticalk operation
        //          evaluate expression in parenthesis
        //         ... if more parenthesis are found do the same thing over and over 
        //      
        //          


        
        // at end, record previous action



    }








    // for reference -- add to notion
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