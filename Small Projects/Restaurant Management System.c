
//Project Name : Restaurant Management System
// Name : Md Tushar Ahmed 
// ID : 201-15-3549

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
int pay,total=0;
void mainmenu()
{
    printf("\n                **************************************************************************\n");
    printf("                                    WELCOME TO RESTAURANT MANAGEMENT SYSTEM\n");
    printf("                  **************************************************************************\n\n\n");
    printf("\t\t\t\t\t\t\t\n Restaurant Menu : \n");
    printf("\t\t\t\t\t\t\t1. Burger           BDT : 90.00 TK \n");
    printf("\t\t\t\t\t\t\t2. Pizza            BDT : 180.00 TK \n");
    printf("\t\t\t\t\t\t\t3. Coffee           BDT : 30.00 TK \n\n");
    printf("\t\t\t\t\t\t\t4.Cancel :\n");

}

int order()
{
    printf("Press 1 to order Burger!! Press 2 to order Pizza!! Press 3 to order Coffee!! Press 4 to cancel");
    printf("Press you want to Order : ");
    int choice,quantity=1;
    char again[50];
    char y[]="Y";
    //int pay,total=0;
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("You choice Burger .\n");
        printf("How many Burger you to want to order : ");
        scanf("%d",&quantity);
        total=total+(quantity*90);
        printf("\nTotal Amount is : %d\n",total);
        printf("You want to buy again ? ");
        printf("\nPress Y for [YES] and N for [NO] : ");
        scanf("%s",&again);

        if(strcmp(again,y)==0)
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
    else if(choice==2)
    {

        printf("You choice Pizza .\n");
        printf("How many Pizza you to want to order : ");
        scanf("%d",&quantity);

        total=total+(quantity*180);
        printf("\nTotal Amount is : %d\n",total);
        printf("You want to buy again ? ");
        printf("\nPress Y for [YES] and N for [NO] : ");
        scanf("%s",&again);

        if(strcmp(again,y)==0)
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
    //.....
    else if(choice==3)
    {

        printf("You choice coffee .\n");
        printf("How many coffee you to want to order : ");
        scanf("%d",&quantity);
        total=total+(quantity*30);
        printf("\nTotal Amount is : %d\n",total);
        printf("You want to buy again ? ");
        printf("\nPress Y for [YES] and N for [NO] : ");
        scanf("%s",&again);

        if(strcmp(again,y)==0)
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
    else if(choice==4)
    {
        printf("You choice item 1-3 only\n");
        order();
    }
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
    char user[20];
    char pass[20];
    printf("\nEnter User Name : ");
    gets(user);
    printf("\nEnter Password : ");
    gets(pass);
    if(strcmp(user,"admin")==0 && strcmp(pass,"admin")==0)
    {
        printf("\nWelcome Log in Successful \n");
        mainmenu();
        order();
    }
    else
    {
        printf("Invalid User Name | Password \n");
        printf("Try Again\n");
    }


    return 0;

}


