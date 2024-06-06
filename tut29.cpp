#include <iostream>
using namespace std;
class Complex
{
    //                     **********Constructors*********
    /*
    => Creating a constructor
    ---->Constructor is a special member funtion with the same name as of the class.
    ---->It is used to initialize the objects of its calss.
    ---->It is automatically invoked when objects is created.
    */
    int a, b;

public:
    Complex(void); // Constructor Deceleration
    void printNumber()
    {
        cout << "Complex Number you have entered " << a << " + " << b << "i" << endl;
    }
};
// Defining Constructor
Complex::Complex(void) // ---->This is default constructor as it takes no parameters.
{
    a = 10;
    b = 20;
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();

    return 0;
}