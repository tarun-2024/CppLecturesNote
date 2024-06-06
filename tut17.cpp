#include <iostream>
using namespace std;
//                                   *****Inline function********
// for full definition refer to notes
inline int product(int a, int b)
{
    return a * b;
}
// ***Static variable****
// Details of static variable in upcoming lecture--->tut24.cpp
int sum(int a, int b)
{
    static int c = 0; // This executes only once
    c = c + 1;        // Next time this function is run , the value of c will be retained
    return (a + b) * c;
}
//                                 ********Defaulet Arugement*********
float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

//                   ******Constant Argument********
int strlen(const int p = 33)
{
    return p;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b is " << endl;
    cin >> a;
    cin >> b;
    cout << "The product of a and b is : " << product(a, b) << endl;
    int money = 10000;
    cout << "If you have " << money << " Rs in your account , you will receive " << moneyReceived(money) << " Rs after one year " << endl;
    cout << "For VIP: If you have " << money << " Rs in your account , you will receive " << moneyReceived(money, 1.10) << " Rs after one year " << endl;

    // Example of static variable
    // cout<<"The value  of a and b is : "<<sum(a,b)<<endl;
    // cout<<"The value of a and b is : "<<sum(a,b)<<endl;
    // cout<<"The value of a and b is : "<<sum(a,b)<<endl;
    // cout<<"The value of a and b is : "<<sum(a,b)<<endl;
    // cout<<"The value of a and b is : "<<sum(a,b)<<endl;
    return 0;
}