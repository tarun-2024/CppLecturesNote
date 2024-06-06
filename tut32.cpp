#include <iostream>
using namespace std;
class simple
{
    int data1, data2, data3;

public:
    simple(int a, int b = 9, int c = 18)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};
void simple::printData()
{
    cout << "The value of data1, data2 and data3 is " << data1 << " , " << data2 << " and " << data3 << endl;
}

int main()
{
    simple s(3) ,s2(3,4), s3(4,4,5);
    s.printData();
    s2.printData();
    s3.printData();

    return 0;
}