
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insert();
void display();
void alternate();
void addatbeg();
void countNode();
void search_element();

struct node
{
    int info;
    struct node *link;
} *start=NULL;

int main()
{
    int choice;
    //clrscr();

    printf("\nProgram to represent single link list \n");

    while(1)
    {
        printf("\n\nSelect one option: ");
        printf("\n1. Add element");
        printf("\n2. Display element");
        printf("\n3. Alternate display element");
        printf("\n4. Add element at beginning");
        printf("\n5. Count nodes");
        printf("\n6. Search element");
        printf("\n7. Exit");
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

            case 7:exit(0);
                    break;
            default:
                    printf("\nEnter number between 1-4 only\n");
        }
    }
}

void insert(int data)
{
    struct node *tmp, *create;

    tmp = (struct node *)malloc(sizeof(struct node));

        printf("\n\n\t\tEnter the element: ");
        scanf("%d", &tmp->info);
        tmp->link = NULL;

        if(start == NULL)
        {
            start = tmp;
        }
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

void display()
{
    struct node *tmp;

    tmp = (struct node *)malloc(sizeof(struct node));

        if(start == NULL)
            printf("\n\n\tlink list is empty\n");
        else
        {
            tmp = start;

            printf("\n\n\t\tElement in single link list: ");
            while(tmp != NULL)
            {
                printf(" %d ", tmp->info);
                tmp = tmp->link;
            }
        }

    free(tmp);
}

void alternate()
{
	struct node *tmp=start;

        printf("\n\n\t\tAlternate nodes: ");
        if(start==NULL)
            printf("\n\n\t\tLink list is empty");
        else
        {
            while(tmp!=NULL)
            {
                printf(" %d ",tmp->info);
                tmp=tmp->link->link;
            }
        }
	free(tmp);

}

void addatbeg()
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));

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

void countNode()
{
    int countt=0;
    struct node *tmp = (struct node *)malloc(sizeof(struct node));

        if(start == NULL)
            printf("\n\n\t\tLink list is empty");
        else
        {
            tmp = start;
            printf("\n\n\t\tTotal node count: ");
            while(tmp != NULL)
            {
                ++countt;
                tmp = tmp->link;
            }
            printf("%d", countt);
        }

    free(tmp);
}

void search_element()
{
    int find;
    struct node *tmp = (struct node *)malloc(sizeof(struct node));

        if(start == NULL)
            printf("\n\n\t\tLinked list is empty");
        else
        {
            tmp = start;

            printf("\n\n\t\tEnter element to search: ");
            scanf("%d", &find);

            while(tmp != NULL)
            {
                if(tmp->info == find)
                {
                    printf("\n\n\t\tElement found");
                    break;
                }
                else
                {
                    tmp = tmp->link;
                }
            }
            if(tmp == NULL)
                printf("\n\n\t\tElement not found");
        }

}
