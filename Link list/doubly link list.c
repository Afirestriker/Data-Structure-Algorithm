
//Doubly linked list representation

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insert();
void display();

struct node
{
    int info;
    struct node *next;
    struct node *pre;

} *start = NULL;

void main()
{
    int choice;
    //clrscr();

    printf("\nProgram to represent doubly linked list\n");

    while(1)
    {
        printf("\n\nSelect the option:");
        printf("\n1. Add element");
        printf("\n2. Display element");
        printf("\n3. exit");
        printf("\n\tEnter you choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: insert();
                    break;
            case 2: display();
                    break;
            case 3: exit(0);
                    break;
            default:
                    printf("\n\t\nEnter value between 1-3 only \n");
        }
    }

    getch();
}

void insert()
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    struct node *get;

    if(tmp==NULL)
        printf("\n\n\t\tCreation of new node to insert error");
    else
    {
        printf("\n\n\t\tEnter element: ");
        scanf("%d", &tmp->info);
        tmp->next = NULL;

        if(start == NULL)
        {
            tmp->pre = NULL;
            start = tmp;

        }
        else
        {
            get = start;
            while(get->next != NULL)
                get = get->next;

            get->next = tmp;
            tmp->pre = get;
        }
    }
} //insert() close

void display()
{
    struct node *tmp = start;

    if(start == NULL)
        printf("\n\n\t\tDouble link list is empty");
    else
    {
        printf("\n\n\t\tElement in double linked list: ");
        while(tmp != NULL)
        {
            printf(" %d ", tmp->info);
            tmp = tmp->next;
        }
    }
} //display() close
