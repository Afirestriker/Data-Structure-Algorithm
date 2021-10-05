
//Program to represent static implementation of queue using array

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 4

int arr[MAX];
int front=-1, rear = -1;
void insert();
void del();
void display();

void main()
{
    int choice;
    //clrscr();
    while(1)
    {
        printf("\n\nSelect the options: \n");
        printf("\t1. Add \n");
        printf("\t2. Delete \n");
        printf("\t3. Display \n");
        printf("\t4. Exit \n");

        printf("\n\tEnter your choice: ");
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
        }
    }

    getch();
}

//function definitions
void insert()
{
    if(rear == (MAX-1))
    {
        printf("\n\tQueue is overflow no space to add new element\n");
    }
    else
    {
        if(front==-1)
            front = 0;

        printf("\n\t\t Enter the element: ");
        rear++;
        scanf("%d", &arr[rear]);
    }
} //insert() close

void del()
{
    if(front == -1 || front > rear)
    {
        printf("\n\t\tQueue is underflow no element to delete\n");
    }
    else
    {
        printf("\n\t\t Element deleted from queue is: %d", arr[front]);
        front++;
    }
} //del() close

void display()
{
    if(front == -1 || front > rear)
    {
        printf("\n\t\tQueue is underflow no element to display\n");
    }
    else
    {
        printf("\n\t\tThe element present in queue: ");
        for(int i=front; i<=rear; i++)
        {
            printf("%d ", arr[i]);
        }
    }
} //display() close
