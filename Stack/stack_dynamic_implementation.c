
//Program to represent dynamic implementation of stack using linked list

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void push();
void pop();
void display();

struct node
{
    int data;
    struct node *link;
} *top=NULL;

void main()
{
    int choice;
    //clrscr();
    while(1)
    {
        printf("\n\nSelect option from the menu: ");
        printf("\n1. Add element");
        printf("\n2. Delete element");
        printf("\n3. Display element");
        printf("\n4. Exit");
        printf("\n\tEnter your choice: ");
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
                    printf("\n\tWrong choice (Please select between 1-4)\n");
                    break;
        }
    }   //while loop close

    getch();
}

void push()
{
    struct node *tmp;

    tmp = (struct node *)malloc(sizeof(struct node));

    if(tmp == NULL)
        printf("\nMemory allocated to new node error");
    else
    {
        //In dynamic implementation there no need to check for overflow condition
        printf("\n\n\t\tEnter number to enter: ");
        scanf("%d", &tmp->data);
        tmp->link = top;
        top = tmp;
    }
}   //push() close

void pop()
{
    if(top == NULL)
        printf("\n\n\t\tStack downflow\n");
    else
    {
        printf("\n\n\tThe element to be deleted: %d", top->data);
        top = top->link;
    }
}   //pop() close

void display()
{
    struct node *tmp = top;

    if(top == NULL)
        printf("\n\n\t\tStack downflow\n");
    else
    {
        printf("\n\t\tThe numbers present inside stack: ");
        while(tmp != NULL)
        {
            printf(" %d ", tmp->data);
            tmp = tmp->link;
        }
    }
}   //display() close
