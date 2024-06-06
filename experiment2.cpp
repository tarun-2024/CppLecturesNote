#include <iostream>
using namespace std;
class Time
{
private:
    int h, m;

public:
    void getData()
    {
        cout << "Enter the hour and minute" << endl;
        cin >> h >> m;
    }
    void setData()
    {
        cout << "The hour is " << h << " & minute is " << m << endl;
    }
    void sum(Time t1, Time t2)
    {
        h = (t1.m + t2.m) / 60;
        m = (t1.m + t2.m) % 60;
        h = h + (t1.h + t2.h);
    }
};

int main()
{
    Time t1, t2, t3;
    t1.getData();
    t1.setData();
    t2.getData();
    t2.setData();
    t3.sum(t1, t2);
    t3.setData();

    return 0;
}