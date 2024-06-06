#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        //                      *****Break in loop *******

        // ****is break me 50 print hoga

        // cout<<i<<endl;
        // if(i==50){

        //     break;
        // }

        //**** is break me 50 print nahi hoga

        if (i == 50)
        {
            break;
        }
        cout << i << endl;
    }

    //                     ********Continue in loop ***********

    for (int j = 1; j <= 100; j++)
    {

        // ****is continue in loop me 50 print ho ga
        // cout<<j<<endl;
        // if(j==50){
        //     continue;
        // }

        // *****is continue in loop me 50 print nahi hoga
        if (j == 50)
        {
            continue;
        }
        cout << j << endl;
    }

    return 0;
}
