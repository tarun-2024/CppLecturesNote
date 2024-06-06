#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printNumber()
    {
        cout << "Complex Number you have entered " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int x, int y) // This is Parameterized as it takes 2 parameter .
{
    a = x;
    b = y;
}

int main()
{
    // This is implicit call
    Complex c1(3, 4);
    c1.printNumber();

    // This is explicit call
    Complex c2 = Complex(4, 5);
    c2.printNumber();

    return 0;
}