/*Stcak implementation using arrays*/
#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY], top=-1 ;
void push(int);
int pop(void);
int isEmpty(void);
int isFull(void);
void traverse(void);
void peek(void);

void main()
{	
	int ch, item;
	while(1)
	{
		printf("1. Push an element \n");
		printf("2. Pop the element\n");
		printf("3. Peek the element\n");
		printf("4. Traverse\n");
		printf("5. Quit\n");
	
		printf("Enter your choice : ");
		scanf("%d", &ch);	
		switch(ch)
		{
			case 1 :	
						printf("Enter the item to push\n");
						scanf("%d", &item);
						push(item);
						break;
						
			case 2 :	item = pop();
						if(item == 0)
						{
							printf("stack is empty\n");
						}
						else
						{
							printf("\npopped item : %d\n", item);
						}
						break;
						
			case 3 : 	peek();
						break;
			case 4 : 	traverse();
						break;
			default : printf("Invalid input \n\n"); 
		}
	}
	
}
void push(int ele)
{
	if(isfull())
	{
		printf("\nStack is full \n");
	}
	else
	{
		top++;
		stack[top] = ele;
		printf(" \n%d pushed \n\n", ele);	
	}
}


int isfull()
{
	if(	top == CAPACITY - 1)
	{
		return 1;	
	}
	else
	{
		return 0;
	}	
}

int pop()
{
	if(isEmpty())
	{
		return 0;	
	}
	else
	{
		return stack[top--];
	}
}

int isEmpty()
{
	if(top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void peek()
{
	if(isEmpty())
	{
		printf("\nStack is empty\n");
	}
	else
	{
		printf("\npeek element : %d \n", stack[top]);
	}
}

void traverse()
{
	if(isEmpty())
	{
		printf("\nStack is empty\n");
	}
	else
	{
		int i;
		printf("\nstack elements are\n");
		for(i = 0; i<=top;i++)
		{
			printf("%d\n",stack[i]);
		}	
	}
}
