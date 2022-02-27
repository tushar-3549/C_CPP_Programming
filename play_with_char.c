#include<stdio.h>
#include<string.h>

void swap(char *a, char *b) {
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    printf("a = %d, b = %d\n", a, b);
}

int main()
{
    int n;
    scanf("%d",&n);
    char str[50][50],sol[50][50];
    for(int i=0; i<n; i++)
    {
        scanf("%s",str[i]);
    }
    //int max=0;
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
        int j=max-1;
        while(gap--)
        {
            str[i][j]=' ';
            j--;
        }
        str[i][max]='\0';
    }

    for(int i = 0; i < n; i++) {
        for(j = 0; j < max; j++) {
            //printf("%c\n", str[i][j]);
            if(str[i][j] == ' ') {
                for(int k = i + 1; k < n; k++) {
                    if(str[k][j] != ' ') {
                        printf("k = %d, i = %d\n", &str[k][j], &str[i][j]);
                        swap(&str[k][j], &str[i][j]);
                        break;
                    }
                }
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%s|\n",str[i]);
    }
    return 0;
}
/*
avasge
ssfse_
afsee_
fsgr__
ere___


avasge
_ssfse
_afsee
__fsgr
___ere
*/
/*
1. n=3
input:

abcde
dg
tywq
->
output:

abcde
dgwq
ty
2. n=4
input :

xycd
ab__
gf
ijk
->
output :

xycd
abk
gf
ij
*/
/*n = 4

abcd
efg
ijklmn
opwr

->
abcdmn
efgl
ijkr
opw
*/
