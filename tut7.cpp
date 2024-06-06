#include <iostream>

using namespace std;

int c = 45;

int main()
{

     //                                  ******************Built in data types******************

     /*int a , b , c ;
     cout<<"Enter the value of a :"<<endl;
     cin>>a;
     cout<<"Enter the value of b :"<<endl;
     cin>>b;

       c = a+b;
     cout<<"The sum is :"<<c<<endl;
     cout<<"The Globle c is :"<<::c;
     // "::"--> This is scope resolution for globle veriable print karne ke liye hota hia */

     //                          *************************Float,double and long double literls*********************

     float d = 34.4F;
     // agar kisi value ko dekhaana ho ki ye float ho to uske last me F/f laga dete hai. Because see line no-29
     long double e = 34.4L;
     // agar kisi value ko dekhaana ho ki ye long double hai to uske last me L/l laga dete hai.because see line no-29

     // double veriable
     // By default decimal ko double me count kiya jata hai jissse uska size 8 bytes hota hia.ex- line no 29

     cout << "The size of 34.4 is :" << sizeof(34.4) << endl;
     cout << "The size of 34.4F is :" << sizeof(34.4F) << endl;
     cout << "The size of 34.4f is :" << sizeof(34.4f) << endl;
     cout << "The size of 34.4L is :" << sizeof(34.4L) << endl;
     cout << "The size of 34.4l is :" << sizeof(34.4l) << endl;

     cout << "The value of d is :" << d << endl
          << "The value of e is :" << e << endl;

     //                                           *******************Reference Veriable*******************
     // Subodh--->Murgi--->DD1--->Shivham

     float x = 3.4;
     float &y = x;
     float &z = x;
     // These are referenc veriable(y,z) of x. Reference veriable ko use karne ke liye '&' ka use hota hai

     cout << x << endl
          << y << endl
          << z << endl;

     //                             ******************Typecasting*******************
     // Converting to one data type to otehr data type.

     int a = 44;
     float b = 3.3;
     cout << "The value of a is :" << (float)a << endl;
     cout << "The value of a is :" << float(a) << endl;
     // Ye dono tarike se covert kar sakte hai data type ko

     cout << "The value of b is :" << (int)b << endl;
     cout << "The value of b is :" << int(b) << endl;

     int c = int(b);

     cout << "The expresion is" << a + b << endl;
     cout << "The expresion is" << a + (int)b << endl;
     cout << "The expresion is" << a + int(b) << endl;
     

     return 0;
}