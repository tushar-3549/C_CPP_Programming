#include<stdio.h>
float area(float r)
{
    float w,pi;
    pi=3.1416;
    w=pi*r*r;
    return w;
}
int main()
{
    float r,result;
    scanf("%f",&r);
    result=area(r);
    printf("%.2f",result);
    return 0;
}
