// There are two types of header file
// 1. System Header file: It comes with the compiler
#include <iostream>
// 2. User defined header file: It is written by the programmer
// # include"this.h" --- This Will produce an error if this.h is not present in the current directory
//  Refrence of header file :- en.cpprefrence.com

int glo = 4;

using namespace std;

int main()
{
    cout << endl;
    int a = 4, b = 5;
    cout << "Operator in c++" << endl;
    // "endl" or "/n" is use for line break
    cout << "Following are the types of operator in c++" << endl;
    cout << endl;

    // *********Arithmetic operators********
    cout << "1. Arithmetic Operators" << endl;
    cout << "The value of a+b : " << a + b << endl;
    cout << "The value of a-b : " << a - b << endl;
    cout << "The value of a*b : " << a * b << endl;
    cout << "The value of a/b : " << a / b << endl;
    /* Integer ka out put integer hi hota hai isliye iska answer 0 hai orignal answer 0.8 hona chiye iska interger value 0 hai */
    cout << "The value of a%b : " << a % b << endl;
    // How modulo funtion works
    /*If y completely divides x, the result of the expression is 0.
    If x is not completely divisible by y, then the result will be the remainder in the range [0, y-1]
    (x % y) < (x / 2) ………if (x >= y)
    (x % y) = x ……… if (x < y)
    If y is 0, then division by zero is a compile-time error.*/
    cout << "The value of a++ : " << a++ << endl;
    // First 'a' print as it is and then after excution of code value of 'a' will be 4+1 = 5.
    cout << "The value of a-- : " << a-- << endl;
    // Jo privous value(5) tha 'a' ka wo print karo and after execution of code value of 'a' will be 5-1 = 4.
    cout << "The value of ++a : " << ++a << endl;
    // Jo privous value(4) tha 'a' ka usme +1 ka increment karo and then print new value of 'a' will be  1+4= 5.
    cout << "The value of --a : " << --a << endl;
    // Jo privous value(5) tha 'a' ka usme -1 ka decrement karo and then print new value of 'a' will be 5-1 = 4
    // Increment(++) and Decrement(--)
    cout << endl;

    // Assignment Operators -->  used to assign values to variables
    cout << "2. Assignment Operators" << endl;
    int e = 9, f = 10;
    char d = 'u';
    cout << "These are Assignment operators e=9 , f =10 , d =u" << endl;
    cout << endl;

    // Print Sum of square of first n natural number.
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int sum;
    for (int i = 1; i <= n; i++)
    {
        // sum +=(i*i); ---->This is also valid shortcut
        sum = sum + (i * i);
    }
    cout << sum << endl;

    // Comperison Operators --> It returns Only True(1) and False(0)
    cout << "3. Comperison Operators" << endl;
    cout << "The value of a == b is :" << (a == b) << endl;
    cout << "The value of a != b is :" << (a != b) << endl;
    cout << "The value of a > b is :" << (a > b) << endl;
    cout << "The value of a >= b is :" << (a >= b) << endl;
    cout << "The value of a <= b is :" << (a <= b) << endl;
    cout << endl;

    // Logical Operators --> It Returns only Ture(1) and False(0)
    cout << "4. Logical Operators" << endl;
    cout << "The value of this logical 'and(&&)' operator((a==b) && (a<b)) is  :" << ((a == b) && (a < b)) << endl;
    //  Logical 'and(&&)' operator return only 1 & 0. If both statement are true then return 1 otherwise 0.

    cout << "The value of this logical 'or(||)' operator((a==b) || (a<b)) is  :" << ((a == b) || (a < b)) << endl;
    // Logical 'or(||)' operator return only 1 & 0. If any one of them is true then return 1 otherwise 0.

    cout << "The value of this logical 'not(!)' operator(!(a<b)) is  :" << (!(a < b)) << endl;
    // Logical 'not(!) operator return only 1 & 0. If statement is true it returns 0 and statement is false it returns 1.
    // It opposite to other logical operator like 'and' ,'or'

    return 0;
}