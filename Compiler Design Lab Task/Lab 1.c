#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%[^\n]s", s);
    int l = strlen(s);
    for(int i = 0; i < l; i++)
    {
        if(s[i] == '=' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i]
                == '%')
            printf("%c Operator\n",s[i]);
        else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            printf("%c Identifier\n",s[i]);
    }
    return 0;
}
