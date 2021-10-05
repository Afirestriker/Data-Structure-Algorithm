
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 4

int binary_search(int*, int);
void bubble_sort(int*);

void main()
{
    int arr[MAX], find, pos = -1;
    //clrscr();

    printf("\nEnter array element: ");
    for(int i=0; i<MAX; i++)
        scanf("%d", &arr[i]);

    printf("\n\nDisplaying array element before sorting: ");
    for(int i=0; i<MAX; i++)
        printf(" %d ", arr[i]);

    bubble_sort(arr);
    printf("\n\nDisplaying array element after sorting: ");
    for(int i=0; i<MAX; i++)
        printf(" %d ", arr[i]);

    printf("\n\nEnter element to find: ");
    scanf("%d", &find);
    pos = binary_search(arr, find);

    if(pos == -1)
        printf("\n\n\tElement not found");
    else
        printf("\n\n\tElement found at indexed position %d", pos);

    printf("\n");
    getch();
}

int binary_search(int ar[], int search)
{
    int ll=0, ul=MAX-1;
    int mid;
    while(ul>=ll)
    {
        mid = (ll+ul)/2;
        if(search < ar[mid])
            ul = mid-1;
        else if(search > ar[mid])
            ll = mid+1;
        else if(search == ar[mid])
            return mid;
    }
    if(ul < ll)
        return -1;
}

void bubble_sort(int ar[])
{
    for(int i=0; i<MAX; i++)
    {
        for(int j=0; j<MAX-1; j++)
        {
            if(ar[j] > ar[j+1])
            {
                ar[j]   = ar[j] + ar[j+1];
                ar[j+1] = ar[j] - ar[j+1];
                ar[j]   = ar[j] - ar[j+1];
            }
        }
    }
}
