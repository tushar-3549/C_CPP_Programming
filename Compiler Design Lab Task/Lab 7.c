//      Q. Write a C program for implementing the functionalities of
//         predictive parser for the mini language.
/*     G: { E-> TE’, 
            E’ -> +TE’ | 0, 
            T-> FT’, 
            T’-> *FT’|0,
            F-> (E) | id}
*/

#include <stdio.h>
#include <string.h>
void E();
void T();
void Eds();
void Tds();
void F();
char s[100];
int i, error;
int main()
{
    printf("Enter the Input : ");
    gets(s); // a+a*a , (a*a+a)
    E();
    int len = strlen(s);
    if(i == len && error == 0)
        printf("String is Accepted\n");
    else
        printf("String is Rejected\n");

}
void E()
{
    T();
    Eds();
}
void T()
{
    F();
    Tds();
}
void Eds()
{
    if(s[i] == '+')
    {
        i++;
        T();
        Eds();
    }
}
void Tds()
{
    if(s[i] == '*')
    {
        i++;
        F();
        Tds();
    }
}
void F()
{
    if(s[i] == 'a')
    {
        i++;
    }
    else if(s[i] == '(')
    {
        i++;
        E();
        if(s[i] == ')')
        {
            i++;
        }
    }
    else
        error = 1;
}
