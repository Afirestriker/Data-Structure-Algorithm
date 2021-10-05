
//stack static implementation
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

#define MAX 4
int top= -1;
int arr[MAX];


void push()
{
    if(top == (MAX-1))
    {
        printf("\n\n\t\tStack overflow");
    }
    else
    {
        top++;
        printf("\n\n\t\tEnter number: ");
        scanf("%d", &arr[top]);
    }
}

void pop()
{
    if(top == -1)
        printf("\n\n\t\tStack is empty");
    else
    {
        printf("\n\n\t\tElement deleted: %d", arr[top]);
        top--;
    }
}

void peek()
{
    if(top==-1)
        printf("\n\n\t\tStack is empty");
    else
    {
        printf("\n\n\t\tTop element of stack: %d", arr[top]);
    }
}

void display()
{
    if(top == -1)
        printf("\n\n\t\tStack is empty");
    else
    {
        printf("\n\n\t\tStack elements: ");
        for(int i = top; i>=0; i--)
            printf(" %d ", arr[i]);
    }
}


int main()
{
    int choice;
    printf("\n\tStack static implementation program \n");

    while(1)
    {
        printf("\n\nSelect the option: ");
        printf("\n1. push element");
        printf("\n2. pop element");
        printf("\n3. peek element");
        printf("\n4. Display all element");
        printf("\n5. Exit");

        printf("\n\tEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3:peek();
                    break;
            case 4: display();
                    break;
            case 5: exit(0);
                    break;
            default:
                    printf("\n\t\tEnter between 1-4 only");
                    break;
        }
    }//while loop close

    return 0;
}//main() close

