
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 20

void insertion_sort(int *, int);

void main()
{

	int arr[MAX], len;

	printf("\nEnter array length: ");
	scanf("%d", &len);

	printf("\nEnter array elements: ");
	for(int i=0; i<len; i++)
		scanf("%d", &arr[i]);

	printf("\nDisplayng array elements before sorting: ");
	for(int i=0; i<len; i++)
		printf(" %d ", arr[i]);

	insertion_sort(arr, len);
	printf("\n\nDisplayng array elements after sorting: ");
	for(int i=0; i<len; i++)
		printf(" %d ", arr[i]);

	getch();

}//main close

void insertion_sort(int ar[], int len)
{
	int i, j, k;
	for(i=1; i<len; i++)
	{
		k = ar[i];

		for(j=i-1; j>=0 && ar[j] > k  ; j--)
			ar[j+1] = ar[j];//inner loop close

		ar[j+1] = k;

	}//outer loop close

}//insertion sort close
