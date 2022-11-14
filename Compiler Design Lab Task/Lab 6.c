#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void main()
{
    int x = 0, n, i = 0,j = 0;
    void *pointer, *address[5];
    char ch, arr1[15], arr2[15], c;
    printf("Input the Expression Terminating with $ symbol: ");

    while((c = getchar()) != '$')
    {
        arr2[i] = c;
        i++;
    }
    n = i - 1;
    printf("Given Expression : ");
    for(int i = 0; i <= n; i++)
        printf("%c", arr2[i]);

    printf("\n \t \t \tSymbol Table Display\n");
    printf(" \t \t \t---------------------\n");
    printf("Symbol \t  Address \t  Type\n");
    while(j <= n)
    {
        c = arr2[j];
        if(isalpha(toascii(c)))
        {
            pointer = malloc(c);
            address[x] = pointer;
            arr2[x] = c;
            printf("\n%c \t %d \t Identifier\n",c, pointer);
            x++;
            j++;
        }
        else
        {
            ch = c;
            if(ch=='+'||ch=='-'||ch=='*'||ch=='=')
            {
                pointer = malloc(ch);
                address[x] = pointer;
                arr2[x] = ch;
                printf("\n %c \t %d \t Operator\n",ch, pointer);
                x++;
                j++;
            }
        }
    }
    return 0;
}
