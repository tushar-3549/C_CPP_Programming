#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct students
{
    char name[50];
    int id;
    char address[50];
    char campus[50];
    char month[50];
    int amount;

};

int main()
{
    struct students student[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("Information of Student %d\n",i+1);
        printf("Enter Name : ");
        scanf("%s",&student[i].name);

        printf("Enter Student's ID : ");
        scanf("%d",&student[i].id);

        printf("Enter Address: ");
        scanf("%s",&student[i].address);

        printf("Enter Campus: ");
        scanf("%s",&student[i].campus);

        printf("Enter Select Month: ");
        scanf("%s",&student[i].month);

        printf("Enter Amount: ");
        scanf("%d",&student[i].amount);
        printf("\n");

    }

    printf("\n\n\n");
    printf("\t\t\t**********************************************\t\t\t\n");
    printf("\t\t\t\t.......DAFODDIL INTERNATIONAL UNIVERSITY.........\t\t\t\n");
    printf("\t\t\t......STUDENTS INFORMATION........\t\t\t\n");
    printf("\t\t\t\t......MINI PROJECT.......\t\t\t\n");
    printf("\t\t\t******************************************************\t\t\t");
    printf("\n");


    for(i=0; i<4; i++)
    {

        printf("\n\nInformation of Student %d\n",i+1);
        printf("Name : %s\n",student[i].name);

        printf("ID : %d\n",student[i].id);

        printf("Address : %s\n",student[i].address);

        printf("Campus : %s\n",student[i].campus);

        printf("Month : %s\n",student[i].month);

        printf("Amount : %d\n",student[i].amount);
        printf("----------------------------------\n");

    }
    printf("\t\t\t\tMINI PROJECT....\n");
    printf("GROUP MEMBER'S INFORMATION :\n");
    printf("Name:Md Tushar Ahmed\t\tID:201-15-3549\n");
    printf("Name:Hosne Ara Bithi\t\tID:201-15-3738\n");
    printf("COMPLETE STUDENT'S INFORMATION PROJECT.....\n");
    printf("THANK YOU.......");

    return 0;
}

