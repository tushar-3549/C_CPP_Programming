#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define pi  3.1415926535

int length_square(pair<int,int>X,pair<int,int>Y)
{
    int dif_X = X.first - Y.first;
    int dif_Y = X.second - Y.second;
    return dif_X*dif_X + dif_Y*dif_Y;
}

int printAngle(pair<int,int>A, pair<int,int>B, pair<int,int>C)
{
    int aa = length_square(B,C);
    int bb = length_square(A,C);
    int cc = length_square(A,B);

    float a = sqrt(aa);
    float b = sqrt(bb);
    float c = sqrt(cc);

    float alpha = acos((bb + cc - aa)/(2*b*c));
    float betta = acos((aa + cc - bb)/(2*a*c));
    float gamma = acos((aa + bb - cc)/(2*a*b));

    alpha = alpha * 180 / pi;
    betta = betta * 180 / pi;
    gamma = gamma * 180 / pi;

    cout << "Alpha : "<< alpha << endl;
    cout << "Betta : "<< betta << endl;
    cout << "Gamma : "<< gamma << endl;

}

int main()
{
    pair<int,int>A = make_pair(0,0);
    pair<int,int>B = make_pair(0,1);
    pair<int,int>C = make_pair(1,0);

    printAngle(A,B,C);
    return 0;
}
