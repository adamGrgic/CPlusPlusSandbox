#include <iostream>
#include "Calculator.h"
using namespace std;
int main()
{
    string x = {""};
    cout << "Hello World!\n";
    cout << "What's your name?" << endl;
    cin >> x;
    cout << "the name you entered is: " << x;


    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
        << endl;

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);
        cout << "Result " << "of " << x << oper << y << " is: " << result << endl;
    }

    return 0;
}