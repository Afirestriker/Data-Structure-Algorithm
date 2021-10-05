
//insertion sort
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 20

void insertion(int *, int);

void main()
{
	int ar[MAX], len, i;
	//clrscr();

	printf("\nEnter array length: ");
	scanf("%d", &len);

	printf("\nEnter array elements: ");
	for(i=0; i<len; i++)
		scanf("%d", &ar[i]);

	printf("\nDisplaying elements before sorting: ");
	for(i=0; i<len; i++)
		printf(" %d ", ar[i]);

	insertion(ar, len);

	printf("\n\nDisplaying elements after sorting: ");
	for(i=0; i<len; i++)
		printf(" %d ", ar[i]);

	getch();
}

void insertion(int ar[], int len)
{
	int i, j, k;

	for(i=1; i<len; i++)
	{
		k = ar[i];

		for(j=i-1; j>=0 && ar[j] > k; j--)
		{
			ar[j+1] = ar[j];
		}
		ar[j+1] = k;
	}
}
