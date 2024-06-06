#include <iostream>
using namespace std;
// Forward Decelaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex, complex);
    int sumImaginaryComplex(complex, complex);
};

class complex
{
    int a, b;

    //                    ********Member friend function**********

    // Individually declaring function as friends

    // friend int calculator::sumRealComplex(complex, complex);
    // friend int calculator::sumImaginaryComplex(complex, complex);

    //                     ************Friend class **********
    // Declaring the entire calculator class as friend

    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumImaginaryComplex(complex o1, complex o2)
{

    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(2, 3);
    o1.printNumber();
    o2.setNumber(3, 4);
    o2.printNumber();
    calculator cal, cal2;
    int sum = cal.sumRealComplex(o1, o2);
    int sum1 = cal.sumImaginaryComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << sum << endl;
    cout << "The sum of imaginary part of o1 and o2 is " << sum1 << endl;
    cout << "The sum of o1 and o2 is " << sum << " + " << sum1 << "i" << endl;

    return 0;
}