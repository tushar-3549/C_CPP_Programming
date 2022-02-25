#include<stdio.h>
int main()
{
    int arr[8]= {10, 20, 10, 42, 55, 20, 25, 20};
    int k,i,j;
    printf("You have to search : ");
    scanf("%d",&k);
    int count=0;
    for(i=0; i<8; i++)
    {
        for(j=i+1; j<8; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("%d is found %d times in your list\n",k,count);
    return 0;
}
