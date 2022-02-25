#include<stdio.h>
int main()
{
    int upper,lower;
    printf("Enter the uppercase Letter:");
    scanf("%c",&upper);

    lower=tolower(upper);
    printf("The lowercase letter is:%c",lower);
    return 0;
}
