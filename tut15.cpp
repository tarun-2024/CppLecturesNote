#include <iostream>
using namespace std;

//                              ********Function***********
//***Function Prototype***
// Syntex--> type funtion_name(arguement)

// int sum(int a, int b); //---> Acceptable
// int sum(int a, b); //--->Not Acceptable
int sum(int, int); //---->Acceptable
// void g(void); //---->Accepetable
void g(); //---->Accepetable

int main()
{
    int num1, num2;
    cout << "Enter first no : " << endl;
    cin >> num1;
    cout << "Enter second no : " << endl;
    cin >> num2;
    // num1 and num2 are actual parameters
    cout << "Sum of num1 and num2 : " << sum(num1, num2);
    g();

    return 0;
}

int sum(int a, int b)
{   //---> a and b are formal parameters
    // Formal parameter a and b will be taking values from actual parameter num1 and num2.
    int c = a + b;
    return c;
}

void g()
{
    cout << "\nHello Good Moring" << endl;
}