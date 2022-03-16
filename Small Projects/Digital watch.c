#include<stdio.h>

#include<stdlib.h>

#include <unistd.h>

//#include<conio.h>
#define CYCLE 60

/*#ifdef _WIN32
#define sleep(x) Sleep(x*1000)
#else
#include<unistd.h>//(sleep() for mac) But whole process both mac and windows found out internetwork
#endif*/

int main()
{
    int hour,minite,second;
    printf("Enter Hour Minite Second: ");
    scanf("%d%d%d",&hour,&minite,&second);
    //clrscr();

    int h=0,m=0,s=0;
    while(1)
    {
        sleep(1);
        system("cls");
        printf("%.2d:%.2d:%.2d\n",h,m,s);
        if(h == hour && m == minite && s == second)
        {
            break;
        }
        /*else
        {
            clrscr();
        }*/
        s++;
        //sleep(1);
        if(s==CYCLE)
        {
            m++;
            s=0;
        }
        if(m==CYCLE)
        {
            h++;
            m=0;
        }
    }
    return 0;

}
