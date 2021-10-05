
#include<stdio.h>
#include<conio.h>
#define MAX 4

void bubble_sort(int *);

void main()
{
    int arr[MAX];

    printf("\nEnter array element: ");
    for(int i=0; i<MAX; i++)
        scanf("%d", &arr[i]);

    printf("\n\nDisplaying array element: ");
    for(int i=0; i<MAX; i++)
        printf(" %d ", arr[i]);

    bubble_sort(arr);

    printf("\n\nDisplaying array after bubble sort: ");
    for(int i=0; i<MAX; i++)
        printf(" %d ", arr[i]);

    getch();
}

void bubble_sort(int ar[])
{
    for(int i=0; i<MAX; i++) //define phases
    {
        for(int j=0; j<MAX-1-i; j++)
        {
            if(ar[j] > ar[j+1])
            {
                //swap
                ar[j]   = ar[j] + ar[j+1];
                ar[j+1] = ar[j] - ar[j+1];
                ar[j]   = ar[j] - ar[j+1];
            }
        }
    }
}
