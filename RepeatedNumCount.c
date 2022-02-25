#include<stdio.h>
int main()
{
    int i,arr[7],count=0,freq[50],j,c;
    for(i=0; i<7; i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(i=0; i<7; i++)
    {
        c=1;
        for(j=i+1; j<7; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=c;
        }
    }
    for(i=0; i<7; i++)
    {
        if(freq[i]!=0)
        {
            printf("%d  %d\n",arr[i],freq[i]);
        }
    }
    return 0;

}
