
//Circular Linked list representation

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void create();
void display();

struct node
{
    int info;
    struct node *link;
} *last;

void main()
{
    int choice;
    //clrscr();

    printf("\n Program to represent Circular Single Linked List \n");

    while(1)
    {
        printf("\n\n Select the option: ");
        printf("\n 1. Create node");
        printf("\n 2. Display node");
        printf("\n 3. Exit");
        printf("\n\t Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: create();
                    break;
            case 2: display();
                    break;
            case 3: exit(0);
                    break;
            default:
                    printf("\n\n\t Enter number between 1-4 only \n");
        }
    }

    getch();
}   //main() close

void create()
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));

    if(tmp == NULL)
        printf("\n\n\t\t Creation of new node error");
    else
    {
        printf("\n\n\t\t Enter data: ");
        scanf("%d", &tmp->info);

        if(last == NULL)
        {
            last = tmp;
            last->link = tmp;
        }
        else
        {
            tmp->link = last->link;
            last->link = tmp;
            last = tmp;
        }
    }
}   //insert() close

void display()
{
    struct node *tmp;
    if(last == NULL)
        printf("\n\n\t\t Circular single linked list is empty \n");
    else
    {
        tmp = last->link;
        printf("\n\n\t\t Circular linked list element: ");
        while(tmp != last)
        {
            printf(" %d ", tmp->info);
            tmp = tmp->link;
        }
        printf(" %d \n", last->info);
    }
}   //display() close
