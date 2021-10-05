
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insert();
void display();
void alternate();
void addatbeg();
void countNode();
void search_element();
void del();

struct node
{
    int info;
    struct node *link;
} *start=NULL;

void main()
{
    int choice;
    //clrscr();
    printf("\nProgram to represent singular link list \n");

    while(1)
    {
        printf("\n\nSelect one option: ");
        printf("\n1. Add element");
        printf("\n2. Display element");
        printf("\n3. Alternate display element");
        printf("\n4. Add element at beginning");
        printf("\n5. Count nodes");
        printf("\n6. Search element");
        printf("\n7. Delete element");
        printf("\n8. Exit");
        printf("\n\tEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: insert();
                    break;
            case 2: display();
                    break;
            case 3: alternate();
                    break;
            case 4: addatbeg();
                    break;
            case 5: countNode();
                    break;
            case 6: search_element();
                    break;
            case 7: del();
                    break;
            case 8:exit(0);
                    break;
            default:
                    printf("\nEnter correct number (between 1-4)\n");
        }
    }

    getch();
}

void insert(int data)
{
    struct node *tmp, *create;

    tmp = (struct node *)malloc(sizeof(struct node));

    if(tmp == NULL)
        printf("\n\tNew struct node creation error\n");
    else
    {
        printf("\n\n\t\tEnter the element: ");
        scanf("%d", &tmp->info);
        tmp->link = NULL;   //since in linked list every new node is placed at last, and contains NULL in link part

        if(start == NULL)
            start = tmp;
        else
        {
            create = start;
            while(create->link != NULL)
            {
                create = create->link;
            }
            create->link = tmp;
        }
    }
} //insert() close

void display()
{
    struct node *tmp = start;

    if(start == NULL)
        printf("\n\n\tSingle link list is empty\n");
    else
    {
        printf("\n\n\t\tElement of single link list: ");
        while(tmp != NULL)
        {
            printf(" %d ", tmp->info);
            tmp = tmp->link;
        }
    }
} //display() close

void alternate()
{
    struct node *tmp = start;

    if(start == NULL)
        printf("\n\n\t\tLinked list is empty");
    else
    {
        printf("\n\n\t\tThe alternate nodes: ");
        while(tmp != NULL)
        {
            printf(" %d ", tmp->info);
            tmp = tmp->link->link;
        }
    }
} //alternate() close

void addatbeg()
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));

    if(tmp == NULL)
        printf("\n\n\t\tCreation of new node error");
    else
    {
        printf("\n\n\t\tEnter element: ");
        scanf("%d", &tmp->info);
        tmp->link = NULL;

        if(start == NULL)
            start = tmp;
        else
        {
            tmp->link = start;
            start = tmp;
        }
    }
} //addatbeg() close

void countNode()
{
    int countt=0;
    struct node *tmp = start;

    if(start == NULL)
        printf("\n\n\t\tLinked list is empty");
    else
    {
        printf("\n\n\t\tTotal node count: ");
        while(tmp != NULL)
        {
            ++countt;
            tmp = tmp->link;
        }
        printf("%d", countt);
    }
} //count() close

void search_element()
{
    int find;
    struct node *tmp = start;

        if(start == NULL)
            printf("\n\n\t\tLinked list is empty");
        else
        {
            printf("\n\n\t\tEnter element to search: ");
            scanf("%d", &find);

            while(tmp != NULL)
            {
                if(tmp->info == find)
                {
                    printf("\n\n\t\tElement found");
                    break;
                }
                    tmp = tmp->link;
            }
            if(tmp == NULL)
                printf("\n\n\t\tElement not found");
        }
} //search() close

void del()
{
    struct node *tmp = start;

    if(start == NULL)
        printf("\n\n\t\tList is empty");
    else
    {
        printf("\n\n\t\tElement to be deleted: %d", start->info);
        start = start->link;
        free(tmp);
    }
}
