
#include<stdio.h>
#include<conio.h>

#define MAX 20

void bubble_sort(int *, int);
int binary_search_recursive(int *, int, int, int, int);

void main()
{

	int arr[MAX], len, find, pos=-1, ll, ul;

	printf("\nEnter array length: ");
	scanf("%d", &len);

	printf("\nEnter array elements: ");
	for(int i=0; i<len; i++)
		scanf("%d", &arr[i]);

	printf("\nDisplaying array elements: ");
	for(int i=0; i<len; i++)
		printf(" %d ", arr[i]);

	bubble_sort(arr, len);
	printf("\n\nDisplaying array elements after sorting: ");
	for(int i=0; i<len; i++)
		printf(" %d ", arr[i]);

	printf("\n\nEnter element to search: ");
	scanf("%d", &find);

	ll=0;
	ul = len-1;
	pos = binary_search_recursive(arr, len, find, ll, ul);

	if(pos == -1)
		printf("\n\tElement not found");
	else
		printf("\n\tElemet found at position %d", pos);

	getch();
}//main close

void bubble_sort(int ar[], int len)
{
	for(int i=0; i<len; i++)
	{
		for(int j=0; j<len-1; j++)
		{
			if(ar[j] > ar[j+1])
			{
				//swap
				ar[j]   = ar[j] + ar[j+1];
				ar[j+1] = ar[j] - ar[j+1];
				ar[j]   = ar[j] - ar[j+1];
			}//if close

		}//inner loop close

	}//outer loop close

}//bubble sort close

int binary_search_recursive(int ar[], int len, int search, int ll, int ul)
{

	int mid;

	while(ll <= ul)
	{
		mid = (ll+ul)/2;

		if(search < ar[mid])
			ul = mid-1;
		else if(search > ar[mid])
			ll = mid+1;
		else if(search == ar[mid])
			return mid+1;
		return (binary_search_recursive(ar, len, search, ll, ul));
	}//while close

	if(ll > ul)
		return -1;

}//binary search close
