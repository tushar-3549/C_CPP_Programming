#include<stdio.h>
int main()
{
    int n;
    printf("How many Numbers you want to insert? ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int t;
    printf("Test Case :");
    scanf("%d",&t);
    while(t--)
    {
        int item;
        printf("Enter Data You want to search : ");
        scanf("%d",&item);
        int left=0;
        int right=n-1;
        int middle;
        while(left<=right)
        {
            middle=(left+right)/2;
            if(a[middle]==item)
            {
                printf("Item found at:%d index\n",middle);
                return 0;
            }
            else if(a[middle]<item)
            {
                left=middle+1;
            }
            else
            {
                right=middle-1;
            }
        }
        printf("Item not Found\n");
    }

    return 0;

}














//Runtime complexity:0(logN)
//Space Complexity : 0(1)
