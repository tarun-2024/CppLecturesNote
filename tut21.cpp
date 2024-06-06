#include <iostream>
#include <iomanip>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1); // Decleration
    void getdata()
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
        cout << "The value of c is : " << c << endl;
        cout << "The value of d is : " << d << endl;
        cout << "The value of e is : " << e << endl;
    }
};
void employee::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{ //                   ******************* OOPs - Class and object******************8

    //  C++ ---> Initially called "C with Classes" by stroustroup
    // Classes --> Extension of structrue in C;
    // Structure had limitaion
    //          -- Members  are public
    //          -- No method
    // Classes have
    //          -- Structure + More
    //          -- Can have method and properties
    //          -- Can make few members as private and few as public
    // Structure  in c++ have already builtin typedef.
    // You can declare object along with the class decleration like this:
    /*  class employee
    {
            class defination;
    } tarun, subodh, rajeev;
    */
    //    tarun.salary= 33 make no sense if salary is private


    employee tarun;
    // tarun.a = 22; --> This will throw an error because a is private 
    tarun.d = 33;
    tarun.e = 44;
    tarun.setdata(2, 3, 4);
    tarun.getdata();
    return 0;
}