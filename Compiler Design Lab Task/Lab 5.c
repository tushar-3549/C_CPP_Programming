// Write a C program to test whether a given identifier is valid or not

#include <stdio.h>
int main()
{
    char s[50];
    gets(s);
    int flag = 0;
    int len = strlen(s);
    if((s[0] >= 'A' && s[0] <= 'Z') || (s[0] >= 'a' && s[0] <= 'z') || s[0] == '_')
    {
        for(int i = 1; i < len; i++)
        {
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || s[i] == '_')
            {
                flag = 1;
            }
        }
    }
    if(flag)
        printf("Valid Identifier\n");
    else
        printf("Invalid Identifier\n");

    return 0;
}
