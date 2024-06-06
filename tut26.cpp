#include <iostream>
using namespace std;

//                   ***************Friend Function *************
class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend Complex sumcomplex(Complex o1, Complex o2);
    void printNumebr()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumcomplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(2, 3);
    c1.printNumebr();
    c2.setNumber(3, 4);
    c2.printNumebr();

    sum = sumcomplex(c1, c2);
    sum.printNumebr();

    return 0;
}