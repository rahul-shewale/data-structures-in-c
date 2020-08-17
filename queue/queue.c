#include<stdio.h>
#define capacity 5
int queue[capacity];
int front = 0, rear = 0;
void insert(void);
void delete(void);
void display(void);
void main()
{
	while(1)
	{
		int ch;
		printf("1. Insert the element in the queue\n");
		printf("2. Delete the element\n");
		printf("3. Display the queue\n");
		printf("Enter your choice : ");
		scanf("%d", &ch);
		printf("\n");
		switch(ch)
		{
			case 1 : insert();
					 display();
					 break;
			case 2 : delete();
					 display();
					 break;
			case 3 : display();
					 break;
			default : printf("Invalid input\n");
		}
	}
}

void insert()
{
	if(capacity == rear)
	{
		printf("Queue is full\n");
	}
	else
	{
		int ele;
		printf("Enter the element : ");
		scanf("%d", &ele);
		printf("\n");
		queue[rear] = ele;
		rear++;
	}
}
void delete()
{
	if(front == rear)
	{
		printf("Queue is empty\n");
	}
	else
	{
		int i;
		printf("deleted item : %d\n", queue[front]);
		for(i = 0; i < rear - 1; i++)
		{
			queue[i] = queue[i+1]; 
		}
		rear--;
	}
}
void display()
{
	if(front == rear)
	{
		printf("Queue is empty\n");
	}
	else
	{
		int i;
		for(i = front; i < rear; i++ )
		{
			printf("%d->", queue[i]);
		}
		printf("\n");
	}	
}
