#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char Input[51];
        int right_shift;
        scanf("%s",&Input);
        scanf("%d",&right_shift);
        int j, length=strlen(Input);
        for(j=0;j<length;j++)
        {
            char c = Input[j]-right_shift;
            if(c < 65)
            {
                c = c + 26;//A=65;Z=90;
            }
            printf("%c",c);
        }
        printf("\n");

    }
    return 0;
}
