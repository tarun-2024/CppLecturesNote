#include <iostream>
using namespace std;

int main()
{

    //                                                  *****Pointers*******
    // What is pointer--> Pointer is a data type which holds the addrese of other data types

    int a = 3;
    int *b = &a;
    // '&'--> Ampercent is 'address of' operator

    cout << "The address of a is : " << &a << endl;
    cout << "The address of a is : " << b << endl;

    // '*'--> Star is a dereferencing operator
    cout << "The value of address b is : " << *b << endl;

    //                       ****Pointer to Pointer******

    int **c = &b;
    cout << "The address of b is : " << &b << endl;
    cout << "The address of b is : " << c << endl;
    cout << "The value at address c is : " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is : " << **c << endl;

    return 0;
}