// Write a C program to identify whether a given line is a comment or not.
#include <stdio.h>
int main()
{
    char s[50];
    printf("Enter a string : ");
    gets(s);
    int n = strlen(s);
    if(s[0] == '/')
    {
        if(s[1] == '/')
            printf("Single Line Comment\n");
        else if(s[1] == '*')
        {
            for(int i = 2; i <= n; i++)
            {
                if(s[i] == '*' && s[i+1] == '/')
                {
                    printf("Multiple Line Comment\n");
                    break;
                }
                else
                    continue;
            }
        }
    }
    else
        printf("There are no comment here !\n");
    return 0;
}
