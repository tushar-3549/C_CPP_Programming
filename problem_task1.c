#include<stdio.h>
int main()
{
    int i,marks[4];

    for(i=0;i<=4;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<=4;i++)
    {
        if(marks[i]%2==0)
        {
            printf("marks[%d]=odd number\n",marks[i]);
        }
    }
    return 0;

}
