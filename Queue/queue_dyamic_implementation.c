
//Program to represent dynamic implementation of queue using linked list

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insert();
void del();
void display();

struct node
{
    int data;
    struct node *link;

} *front=NULL, *rear=NULL;

void main()
{
    int choice;
    //clrscr();
    printf("\nProgram to represent dynamic implementation of queue using linked list\n");
    while(1)
    {
        printf("\n\n1. Add element");
        printf("\n2. Delete element");
        printf("\n3. Display element");
        printf("\n4. Exit");

        printf("\n\n\tEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: insert();
                    break;
            case 2: del();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default:
                    printf("\n\nWrong choice (please choice between 1 - 4 \n");
                    break;
        }
    }

    getch();
}


void insert()
{
    struct node *tmp;

    tmp = (struct node *)malloc(sizeof(struct node));

    if(tmp == NULL)
        printf("\nCreation of new struct node in insert() error \n");
    else
    {
        printf("\n\n\t\tEnter the number to enter: ");
        scanf("%d", &tmp->data);
        tmp->link = NULL;

        if(front == NULL)
            front = tmp;
        else
            rear->link = tmp;

        rear = tmp;
    }
}   //insert() close


void del()
{
    if(front == NULL)
        printf("\n\n\t\tQueue downflow");
    else
    {
        printf("\n\n\t\tElement to be deleted: %d", front->data);

        front = front->link;
    }
}   //del() close

void display()
{
    struct node *tmp = front;

    if(front == NULL)
        printf("\n\n\t\tQueue Downflow");
    else
    {
        printf("\n\n\t\tQueue elements: ");
        while(tmp != NULL)
        {
            printf(" %d ", tmp->data);
            tmp = tmp->link;
        }
    }
}   //display() close
