
//Program to represent static implementation of stack using array

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 4

int ar[MAX];
int top=-1;

void push();
void pop();
void display();


void main()
{
    int choice;
    //clrscr();

    printf("\nProgram to represent data structure using Stack concept\n");
    while(1)
    {
        printf("\n\tSelect the appropriate option: \n");
        printf("\t 1. Add element into stack (mandatory for first time) \n");  //call to push() function;
        printf("\t 2. Delete element from stack \n");                          //call to pop() function;
        printf("\t 3. Display all the element in stack \n");                   //call to display() function;
        printf("\t 4. Exit program \n");
        printf("\tEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default:
                    printf("\nWrong choice (please choice between 1 - 4 \n");
                    break;
        }
        printf("\n");
    }

    getch();
}

void push()
{
    int element;
    if(top == (MAX-1))
        printf("\nStack overflow \n");
    else
    {
        printf("\nEnter the element: ");
        scanf("%d", &element);
        top++;
        ar[top] = element;
    }
}

void pop()
{
    if(top == -1)
        printf("\nStack donwflow \n");
    else
    {
        printf("\nThe element deleted from stack is: %d", ar[top]);
        top--;
    }
}

void display()
{
    if(top == -1)
        printf("\nStack Downflow \n");
    else
    {
        printf("\nThe elements present inside the stack are: (from top to bottom since stack follow LIFO pattern)\n\t");
        for(int i=top; i>=0; i--)
        {
            printf(" %d ", ar[i]);
        }
    }
}
