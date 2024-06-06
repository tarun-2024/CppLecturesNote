#include <iostream>
using namespace std;

class employee
{
    static int count;
    int eId;

public:
    void setData()
    {
        cout << "Enter the eId " << endl;
        cin >> eId;
        count++;
    }
    void getData()
    {
        cout << "The eId of this employee is " << eId << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        // cout<<eId<<endl; ---> This will throw an error because static data fnx only accept static data member and static data fxn.
        cout << "This is object number " << count << endl;
    }
};

// Initialising of static data member
int employee ::count; // Default value is 0.

int main()
{
    employee tarun, subodh, rajeev;
    tarun.setData();
    tarun.getData();
    // also accessing by calss name with scope resolution operator.
    employee::getCount();

    subodh.setData();
    subodh.getData();
    tarun.getCount();

    rajeev.setData();
    rajeev.getData();
    rajeev.getCount();

    return 0;
}