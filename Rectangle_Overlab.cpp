#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x,y;
};
bool isOverlap(point l1,point r1,point l2,point r2)
{
    if (l1.x == r1.x || l1.y == r1.y || l2.x == r2.x || l2.y == r2.y)
    {
        return false;
    }
    if(l1.x >= r2.x || l2.x >= r1.x)
    {
        return false;
    }
    if (r1.y >= l2.y || r2.y >= l1.y)
        return false;
    return true;
}
int main()
{
    point l1= {0,10},r1= {10,0},l2= {5,5},r2= {15,0};
    if(isOverlap(l1,r1,l2,r2))
    {
        cout << "Rectangles are Overlap" << endl;
    }
    else
    {
        cout << "Rectangles are not Overlap" << endl;
    }
    return 0;
}
