#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter You age" << endl;
    cin >> age;

    //                       ***********Selection controal structure--> If else-if else ladder*********

    if ((age < 18) && (age >= 1))
    {

        cout << "You cannot come to my party" << endl;
    }
    else if (age < 1)
    {
        cout << "You are not yet to born " << endl;
    }

    else if (age == 18)
    {
        cout << "You are a kid and you will get a kid pass to the party " << endl;
    }
    else if ((age > 18) && (age <= 30))
    {
        cout << "You can join the party" << endl;
    }

    else
    {

        cout << "You are old you cannot come ot the party " << endl;
    }

    //                            ************Selection controal structure: Switch Case statement*********

    switch (age)
    {
    case 18:

        cout << "You are 18 year old" << endl;

        break;
    case 22:

        cout << "You are 22 year old" << endl;

        break;
    case 40:

        cout << "You are 40 year old" << endl;

        break;

    default:

        cout << "You are not in special case" << endl;
        break;

        // 'break' means switch case ko  tod ke bhar wala next intruction print and read karo
        // agar break nahi hoga to sab case ka cout print ho jayega
    }

    cout << "Done with switch case statement" << endl;

    return 0;
}