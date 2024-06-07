#include <iostream>
using namespace std;
class Number
{
    int a;
    int z;

public:
    Number()
    {
        a = 0; // By default 0 hi hota hia ;
    }
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        cout << "Copy Constructor called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    Number x, y, z(33) , z2;
    x.display();
    y.display();
    z.display();
    Number z1(z); // Copy constructor Invoked.
    z1.display();

    z2 = z; //Copy constructor not invoked.Because assignment operator use karte hia to copy constructor invoked nahi hota hia 
    z2.display();

    Number z3 = z;
    z3.display(); // Copy constructor invoked.
    return 0;
}