#include <iostream>
using namespace std;
class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << val2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;


}

int main()
{
    c1 o1;
    o1.indata(45);
    o1.display();

    c2 o2;
    o2.indata(44);
    o2.display();

    exchange(o1, o2);
    cout<<"The value of o1 after exchanging becomes: ";
    o1.display();
    cout<<"The value of o2 after exchanging becomes: ";
    o2.display();
    

    return 0;
}