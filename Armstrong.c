#include<stdio.h>
int main()
{
    int num,r,temp,sum=0,i;
    printf("Enter any Integer Number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
       r=temp%10;
       sum=sum+r*r*r;
       temp=temp/10;
    }
    if(sum==num)
    {

        printf("%d is a armstrong number",num);
    }
    else
    {

        printf("%d is not a armstrong number",num);
    }
    return 0;

}
