#include<stdio.h>
#include<string.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    char str[50][50],sol[50][50];
    for(int i=0; i<n; i++)
    {
        scanf("%s",str[i]);
    }
    int max=0,i,j;
    for(int i=0; i<n; i++)
    {
        if(strlen(str[i])>max)
        {
            max=strlen(str[i]);
        }
    }
    for(int i=0; i<n; i++)
    {
        int gap = max - strlen(str[i]);
        int j=0;
        while(gap--)
        {
            sol[i][j]=' ';
            j++;
        }
    }
    for(int i=0; i<n; i++)
    {
        int gap=max-strlen(str[i]);
        int j=gap;
        for(int k=0;k<strlen(str[i]);k++)
        {
            sol[i][j]=str[i][k];
            j++;
        }
        str[i][max]='\0';
    }

    for(int i=0; i<n; i++)
    {
        printf("%s\n",sol[i]);
    }
    return 0;
}
