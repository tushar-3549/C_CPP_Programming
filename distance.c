#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,dis;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    dis = sqrt( (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1) );
    printf("%.2f\n",dis);
    return 0;
}
