// Write a C program to recognize strings under 'a*', 'a*b+', 'abb'.

#include <stdio.h>
int main()
{
    char s[50];
    gets(s);
    int len = strlen(s);
    int state = 0;
    for(int i = 0; i < len; i++)
    {
        if(state == 0 && s[i] == 'a')
            state = 0;
        else if(state == 0 || state == 1 && s[i] == 'b')
            state = 1;
        else if(state == 1 && s[i] == 'a')
        {
            state = 2;
            break;
        }
        else if(s[i] != 'a' || s[i] != 'b')
        {
            state = 2;
            break;
        }
    }
    if(state == 0 || state == 1)
        printf("Recognized as a*, a*b+, abb\n");
    else
        printf("Not recognized as a*, a*b+, abb\n");

    return 0;
}
