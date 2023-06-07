#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void getPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
    friend void getDistance(Point p1, Point p2);
};
void getDistance(Point p1, Point p2)
{
    int distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    cout<<"The distance between two points ("<<p1.x<<","<<p1.y<<")"<<" and ("<<p2.x<<","<<p2.y<<") is: "<<distance<<" units."<<endl;
}
int main()
{
    Point p(1, 0);
    p.getPoint();
    Point q(70, 0);
    q.getPoint();
    getDistance(p,q);
    return 0;
}