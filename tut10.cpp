#include <iostream>

using namespace std;

int main()
{

    /*Loops in C++
    -->There are three types of loop
    1. For Loop
    2. While Loop
    3. Do while loop
    */
    //                         *****For Loop****
    //  How to print 1 to 100
    // M-1 Basic tarika
    //     int i = 1 ;
    //    cout<<i<<endl;---> line 18 and 19 ko  bar bar copy paste karo then print ho jayega 1 to 100
    //         i++;

    // M-2(Reconmended method)

    // Syntex for 'For Loop'-->
    // for(Initialization; condition; updation){
    //     loop body(C++ code)
    // }

    for (int i = 0; i <= 100; i++)
    {
        /* code */
        cout << i << endl;
    }

    // Example of infinite loop
    // for (int i = 0; 20 <= 40; i++)
    // {
    //     cout<<i<<endl;

    // }

    //                    ******While Loop********
    // Syntex for 'while loop'-->
    // while(condition){
    //     C++ statements
    // }

    int j = 1;
    while (j <= 40)
    {
        cout << j << endl;
        j++;
    }
    //  Infinite loop in 'while loop'

    // int k = 1;
    // while (50<100)

    // {
    //     cout<<k<<endl;
    //     k++;
    // }

    //                ******do while loop******
    // syntex for 'do while loop'
    //  do{

    // }while(condition);

    int a = 1;
    do
    {
        cout << a << endl;
        a++;

    } while (a <= 1000);

    // if condition false v hoga to code ek bar run karega

    int z = 1;
    do
    {
        cout << z << endl;
    } while (false);

    return 0;
}