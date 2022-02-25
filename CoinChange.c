#include<stdio.h>
#define MAX 20
void findMin(int n,int coin[],int tk)
{
    int ans[MAX]={0};
    int i,k=0;
    for(int i=n-1;i>=0;i--)
    {
         while(tk>=coin[i])
         {
              tk -= coin[i];
              ans[k++]=coin[i];
         }
    }
    for(int i=0;i<k;i++)
    {
        printf("You will give him %d note of %d taka",k,ans[i]);
    }
}
int main()
{
    int n;
    printf("Total Currency I have : ");
    scanf("%d",&n);
    int coin[n];
    printf("Currency I have : ");
    for(int i=0;i<n;i++)
        scanf("%d",&coin[i]);
    int tk;
    printf("My friend's amount: ");
    scanf("%d",&tk);
    findMin(n,coin,tk);
    return 0;
}
