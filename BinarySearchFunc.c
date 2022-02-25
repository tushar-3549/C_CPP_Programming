#include<stdio.h>
#include<conio.h>

#define MAX_SIZE 9
void insertion(int[]);
void binary_search(int[],int);

int main()
{
    int arr_search[MAX_SIZE], i,element;

    printf("Array : ");
    //printf("\nEnter %d Elements for Searching : \n", MAX_SIZE);
    for (i = 0; i < MAX_SIZE; i++)
        scanf("%d ", &arr_search[i]);

    insertion(arr_search);

    //printf("Search = ");
    scanf("%d", &element);


    binary_search(arr_search,element);
    getch();
}
void insertion(int arr_search[])
{
    int value,hole;
    for(int i=1; i<MAX_SIZE; i++)
    {
        value=arr_search[i];
        hole=i;
        while(hole>0 && arr_search[hole-1]>value)
        {
            arr_search[hole]=arr_search[hole-1];
            hole--;
        }
        arr_search[hole]=value;
    }
}
void binary_search(int fn_arr[],int element)
{
    int f = 0, r = MAX_SIZE,mid;

    while (f <= r)
    {
        mid = (f+r)/2;

        if (fn_arr[mid] == element)
        {
            printf("\n%d Found in %d Position\n", element, mid+1);
            break;
        }
        else if (fn_arr[mid] < element)
            f = mid + 1;
        else
            r = mid - 1;
    }

    if (f > r)
        printf("\nSearch Element %d Not Found \n", element);
}
