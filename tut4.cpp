#include <iostream>

using namespace std;

int glo = 5;

void sum()
{
    int a;
    cout << glo;
}

int main()
{
    int glo = 9;
    glo = 59;
    // int a = 5;
    // int b = 6;
    float pi = 3.14;
    int a = 15, b = 16;

    // true means in bool is 1
    bool is_true = true;
    cout << is_true;

    // char me only one value rakhe in single quote me
    char c = 'u';
    sum();
    cout << glo;

    // false means in bool is  0
    bool is_false = false;
    cout << is_false;

    // \n use for line break.
    // cout << "This is tutorial 4. \nHare is the value of a is " << a << " &  value of b is " << b;
    // cout << "\nValue of pie is : " << pi;
    // cout << "\nValue of c is  : " << c;
    return 0;
}
