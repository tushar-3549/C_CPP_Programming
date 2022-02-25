#include<stdio.h>
int main()
{
int i,value;
 int num[]={1,2,3,4,5};
printf("Enter the search number:");
scanf("%d",&value);
int pos=-1;
for(i=0;i<5;i++)
{
    if(value==num[i])
    {
        pos=i+1;
        break;
    }
}
    if(pos==-1)
    {
        printf("Number is not found\n");
    }
    else{
        printf("The Number is found at %d position ",pos);
    }


return 0;
}
