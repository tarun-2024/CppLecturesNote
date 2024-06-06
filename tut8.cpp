#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int y = 4;
    cout << "The value of 'y' was : " << y << endl;
    y = 5;
    cout << "The Value of y is : " << y << endl;
    //                           ***************Constants in C++****************

    const int b = 4;
    // const mean tum ab iska vlaue change nahi kar sakte ho ex-pi ka value koi galti se change na kar de isliye isko use kar te hai
    cout << "The value of b : " << b;
    // b = 5;
    // const lagane ke baad b ka vlaue change nahi hoga error aayega jab run karege to

    //                                   **************Manipulators**********

    //  Commenly 2 manipulators we have learn in basic
    // 1.endl
    // 2.setw(give the range of setw) isko add karne ke liye ek header file <iomanip> add karna hota hai .

    int a = 6, x = 22, c = 883, d = 4444;
    cout << "The value of a without setw is : " << a << endl;
    cout << "The value of x without setw is : " << x << endl;
    cout << "The value of c without setw is : " << c << endl;
    cout << "The value of d without setw is : " << d << endl;

    cout << "The value of a with setw is : " << setw(4) << a << endl;
    cout << "The value of x with setw is : " << setw(4) << x << endl;
    cout << "The value of c with setw is : " << setw(4) << c << endl;
    cout << "The value of d with setw is : " << setw(4) << d << endl;

    //                                     ******Operator Precedence and associativity*********
    // Precedence and associativity ko dekhne ke liye en.cppreference.com me jao
    // Go and read notes
    int e = 3, f = 5;
    // int g = (e*5)+f;
    float g = ((((e * 5) + f) + 33) - 55);
    cout << g << endl;
    cout << sizeof(g);

    return 0;
}