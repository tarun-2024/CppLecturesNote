#include <iostream>

using namespace std;

int main()
{

    int num1, num2;
    cout << "Enter The value of Num1: "; /*'<<' is called Insertion operator*/
    cin >> num1;                         /*'>>' is called Extraction operator */

    cout << "Enter The value of Num2: ";
    cin >> num2;

    cout << "The sum is: " << num1 + num2;
}