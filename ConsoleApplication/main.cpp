#include <iostream>
#include "Calculator.h"
using namespace std;
int main()
{
    string x = {""};
    Calculator c;
    cout << "Hello World!\n";
    cout << "What's your name?" << endl;
    cin >> x;
    cout << "the name you entered is: " << x << endl;

    int z;
    int y;
    cout << "What are the two numbers you would like to add?" << endl;
    cin >> z;

    cout << "The number you have chosen first is :" << z << endl;
    cout << "What will be your second number?" << endl;

    cin >> y;


    cout << "The 2 numbers you chose to add are " << z << " and " << y << endl;

    int w = c.AddInt(z, y);
    cout << "after calculating your numbers, your result is: " << w;

    return 0;
}