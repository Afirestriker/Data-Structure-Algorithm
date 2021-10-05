
//selection sort
#include<stdio.h>
#include<conio.h>
#define MAX 20

void selection_sort(int *, int);

void main()
{
	int arr[MAX], len;

	printf("\nEnter array length: ");
	scanf("%d", &len);

	printf("\nEnter array elements: ");
	for(int i=0; i<len; i++)
		scanf("%d", &arr[i]);

	printf("\nDisplay array elements before sorting: ");
	for(int i=0; i<len; i++)
		printf(" %d ", arr[i]);

	selection_sort(arr, len);
	printf("\n\nDisplay array elements after sorting: ");
	for(int i=0; i<len; i++)
		printf(" %d ", arr[i]);

	getch();

}//main close

void selection_sort(int ar[], int len)
{
    for(int i=0; i<len-1; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(ar[i] > ar[j])
            {
                //swap
                ar[i] = ar[i] + ar[j];
                ar[j] = ar[i] - ar[j];
                ar[i] = ar[i] - ar[j];
            }//if close

        }//inner loop close

    }//outer loop close

}//selection sort
