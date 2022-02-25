#include<stdio.h>
#include<process.h>
#include<windows.h>
#include<conio.h>

void gotoxy(int x,int y)
{

    COORD coord;
    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}
void mainnenu()
{
    printf("\n                **************************************************************************\n");
    printf("                                    WELCOME TO RESTAURANT MANAGEMENT SYSTEM\n");
    printf("                  **************************************************************************\n\n\n");
    printf("\t\t\t\t\t\t\t\n Restaurant Menu : \n");
    printf("\t\t\t\t\t\t\t1. Barger           BDT : 90.00 TK \n");
    printf("\t\t\t\t\t\t\t2. Pizza            BDT : 1800.00 TK \n");
    printf("\t\t\t\t\t\t\t3. Coffee           BDT : 30.00 TK \n\n");
    printf("\t\t\t\t\t\t\t4.Cancel :\n");

}
int order()
{
    printf("Press 1 to order Barger!! Press 2 to order Pizza!! Press 3 to order Coffee!! Press 4 to cancel");
    printf("Press you want to Order : ");
    int choice,quantity=1;
    char again[50];
    int pay,total=0;
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("You choice Barger .\n");
        printf("How many Barger you to want to order : ");
        scanf("%d",&quantity);
        total=total+(quantity*90);
        printf("\nTotal Amount is : %d\n",total);
        printf("You want to buy again ? ");
        printf("\nPress Y for [YES] and N for [NO] : ");
        scanf("%s",&again);
        if(again=="Y")
        {

            order();
        }
        else
        {
            printf("\nEnter Payment : ");
            scanf("%d",&pay);
            if(pay<total)
            {
                printf("Not Enough Payment\n");

            }
            else
            {
                total=pay-total;
                printf("Customer's Return Amount is : %d\n",total);
            }
        }

    }
    //.............
}
int main()
{
    int r,q;
    gotoxy(32,36);
    printf("  Loading......\n");

    gotoxy(32,38);
    for(r=1; r<=20; r++)
    {
        for(q=0; q<=100000000; q++);

        printf("%c",177);
    }
    mainnenu();
    order();

    return 0;

}
