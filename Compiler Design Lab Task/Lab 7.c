#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf("Enter any Operator : ");
    gets(s);
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == '+' && s[i+1] == '+' || s[i] == '-' && s[i+1] == '-')
        {
            printf("Unary Operator\n");
            break;
        }
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' )
        {
            printf("Arithmetic Operator\n");
            break;
        }
        else if(s[i] == '<' || (s[i] == '<' && s[i+1] == '=') || s[i] == '>' || (s[i] == '>' && s[i+1] == '=') ||
                (s[i] == '=' && s[i+1] == '=') || (s[i] == '!' && s[i+1] == '=')
                )
        {
            printf("Relational Operator\n");
            break;
        }
        else if( (s[i] == '&' && s[i+1] == '&') || (s[i] == '|' && s[i+1] == '|') || s[i] == '!' )
        {
            printf("Logical Operator\n");
            break;
        }
        else if(s[i] == '&' || s[i] == '|' || (s[i] == '<' && s[i+1] == '<') || (s[i] == '>' && s[i+1] == '>') || s[i] == '^')
        {
            printf("Bitwise Operator\n");
            break;
        }
        else if(s[i] == '=' || (s[i] == '+' && s[i+1] == '=') || (s[i] == '-' && s[i+1] == '=') || (s[i] == '*' && s[i+1] == '=')
                || (s[i] == '%' && s[i+1] == '='))
        {
            printf("Assignment Operator\n");
            break;
        }
        else if(s[i] == '?' && s[i+1] == ':')
        {
            printf("Ternary or Conditional Operator\n");
            break;
        }
    }
    return 0;
}
