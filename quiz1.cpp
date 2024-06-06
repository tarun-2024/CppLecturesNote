#include <iostream>
#include <math.h>

using namespace std;

class point
{
    int x, y;

public:
    point(int, int);
    friend void distance(point, point);
};
point::point(int a, int b)
{
    x = a;
    y = b;
}
void distance(point p1, point p2)
{
    int x1 = (p2.x - p1.x) * (p2.x - p1.x);
    int y1 = (p2.y - p1.y) * (p2.y - p2.y);
    float z = sqrt(x1+ y1);
    cout<<z<<endl;
}

int main()
{
    point p1(5, 1), p2(3, 2);
    distance(p1, p2);

    return 0;
}
