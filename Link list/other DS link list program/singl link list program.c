
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node * link;
}*start;

void create(int data)
{
	struct node *temp,*q;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		q=start;
		while(q->link!=NULL)
		{
			q=q->link;
		}
		q->link=temp;
	}
}
void alternate()
{
	struct node *q=start;
	if(start==NULL)
	printf("\nlist is empty");
	else
	{
		while(q!=NULL)
		{
			printf("%d\t",q->info);
			q=q->link->link;//500
		}
	}
}
void addatbeg(int data)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	temp->link=start;
	start=temp;
}
void count()
{
	struct node *q;
	int cnt=0;
	if(start==NULL)
	printf("\n List is empty");
	else
	{
		q=start;
		while(q!=NULL)
		{
			cnt++;
			q=q->link;
		}
		printf("Number of nodes are %d",cnt);
	}
}
void search()
{
	struct node *q;
	int key;
	if(start==NULL)
	printf("\nList is empty");
	else
	{
		printf("\nEnter the key");
		scanf("%d",&key);
		q=start;
		while(q!=NULL)
		{
			if(q->info==key)
			{
				printf("Element Found");
				break;
			}
		q=q->link;
		}
		if(q==NULL)
		printf("\n Element Not found");
	}
}
void display()
{
	struct node *q;
	if(start==NULL)
		printf("empty");
	else
	{
		q=start;
		while(q!=NULL)
		{
			printf(" %d",q->info);
			q=q->link;
		}
	}
}
void main()
{
	int data,ch,n,i,m;
	//clrscr();
	while(1)
	{
		printf("\1. create");
		printf("\n2. display");
		printf("\n3. alternate nodes ");
		printf("\n4. addatbeg");
		printf("\n5. Count");
		printf("\n6. search");
		printf("\n7. exit");
		printf("\nenter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\nenter no. of nodes:");
				scanf("%d",&n);
				for(i=0;i<n;i++)
				{
					scanf("%d",&m);
					create(m);
				}
				break;
			case 2:display();
				break;
			case 3:alternate();
				break;
			case 4:printf("\nenter the node at the beg");
				scanf("%d",&n);
				addatbeg(n);
				break;
			case 5:count();
				break;
			case 6:search();
				break;
			case 7:exit(0);

			default:printf("\n invalid choice!!!");
		}
	}
}
