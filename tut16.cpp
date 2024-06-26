#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// Call by values in C++
void swap(int a, int b)
{                 // temp  a   b
    int temp = a; //   4    4   5
    a = b;        //    4    5   5
    b = temp;     //     4    5   4
}

// Call by reference using pointers
void swapPointer(int *a, int *b)
{                  // temp  a   b
    int temp = *a; //   4    4   5
    *a = *b;       //    4    5   5
    *b = temp;     //     4    5   4
}

// Call by reference using C++ reference veriable
void swapReferenceVar(int &a, int &b)
{                 // temp  a   b
    int temp = a; //   4    4   5
    a = b;        //    4    5   5
    b = temp;     //     4    5   4
}

// Return by reference in C++
int &swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return b;
}

int main()
{
    int x = 4, y = 5;
    // cout<<"The Sum of a and b is : " <<sum(x,y)<<endl;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swap(x, y); // This will not swap of a and b
    swapPointer(&x, &y); //----> This will show swap of a and b using pointer reference
    // swapReferenceVar(x, y); //---> This will show swap of a and b using reference variable
    // swapReference(x,y) = 344;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    return 0;
}