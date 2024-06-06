#include <iostream>

using namespace std;

class Y;

class X
{
    int data;
    friend void add(X, Y);

public:
    void setValue(int value)
    {
        data = value;
    }
};

class Y
{
    int sum;
    friend void add(X, Y);

public:
    void setValue(int value)
    {
        sum = value;
    }
};

void add(X a1, Y b1)
{
    cout << "The sum data X and Y objects gives me " << a1.data + b1.sum << endl;
}

int main()
{
    X a1;
    a1.setValue(5);

    Y b1;
    b1.setValue(4);

    add(a1, b1);

    return 0;
}