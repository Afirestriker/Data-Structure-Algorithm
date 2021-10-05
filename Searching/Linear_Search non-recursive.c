
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 4

int linear_search(int*, int);

void main()
{
int arr[MAX] = {1, 2, 6, 4};
int find=0, pos = -1;
//clrscr();

printf("\nDisplaying array elements: ");
for(int i=0; i<MAX; i++)
printf(" %d ", arr[i]);

printf("\n\nEnter element to search: ");
scanf("%d", &find);

pos = linear_search(arr, find);

if(pos == -1)
printf("\n\n\tElement not found");
else
printf("\n\tElement found at position %d", pos);

printf("\n");
getch();
}

int linear_search(int ar[], int search)
{
int i;
for(i = 0; i<MAX; i++)
{
if(ar[i] == search)
return i+1;
}

if(i == MAX)
return -1;

}
