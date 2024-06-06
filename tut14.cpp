#include <iostream>
using namespace std;
struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
};
// typedef struct employees
// {
//     /* data */
//     int eid;
//     char favchar;
//     float Salary;

// } eps;
// // ab humlog struct employees ke jagha 'eps' ka use kar sakte hai typedef ko use karne ke baad

union money
{
    int rice;    // int = 4 bytes
    char car;    // char = 1 bytes
    float pound; // float = 4 bytes
    // iss pura union ka memory allocation (4) highest memory jis data type ka hoga wo hoga
};

int main()
{
    //                                       *********Structure************
    /* struct_name traun/subodh/rajeev ---> agar app 'typedef' ka use karte hai to app struct employee ko hata ke
    koi  short form  rakh sakte hai like anythinkg. ex- ep tarun/ep subodh /ep rajeev */

    struct employee tarun;
    // according to typedef we can use ep tarun;
    struct employee subodh;
    struct employee rajeev;

    tarun.eId = 1;
    tarun.favChar = 'a';
    tarun.salary = 1112223;
    cout << "The value of : " << tarun.eId << endl;
    cout << "The value of : " << tarun.favChar << endl;
    cout << "The value of : " << tarun.salary << endl;

    //                                         **************Unions**************

    union money m1;
    m1.car = 1;
    m1.pound = 1.2;
    cout << m1.pound << endl;
    cout << m1.car << endl;
    // At a time only one data type use kar sakte ho agar uske upper koi data type hai to wo overwrite ho jayega
    // last wala data type hi use hoga;

    //                                        **********Enum**********
    // enum means kisi string ko integer number allocate karna hai from [0,n+1]

    enum meal
    {
        breakfast,
        lunch,
        dinner
    };

    cout << breakfast << endl
         << lunch << endl
         << dinner << endl;

    return 0;
}