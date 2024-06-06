#include <iostream>
using namespace std;

int main()
{
    //                                                     **********Arrays*******
    int marks[4] = {23, 34, 56, 64};
    int mathMarks[4];
    mathMarks[0] = 23;
    mathMarks[1] = 26;
    mathMarks[2] = 25;
    mathMarks[3] = 24;
    cout << "These are mathMarks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    cout << "These are marks" << endl;

    // You can change the value of array
    marks[2] = 55;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    //                                      *****Loop in arrays*********
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is : " << marks[i] << endl;
    }

    //    Pointers and Arrays

    int *p = marks;
    // cout<<*p++<<endl;
    // cout<<*++p<<endl;
    cout << "The value of *p is : " << *p << endl;
    cout << "The value of *(p+1) is : " << *(p + 1) << endl;
    cout << "The value of *(p+2) is : " << *(p + 2) << endl;
    cout << "The value of *(p+3) is : " << *(p + 3) << endl;

    return 0;
}