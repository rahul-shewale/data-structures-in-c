#include<stdio.h>
#define CAPACITY 5
int top = -1, stack[CAPACITY];
void push(int);
int isFull(void);
void main()
{
	while(1)
	{
	int ele, i;
	printf("Enter the element to insert into stack : ");
	scanf("%d",&ele);
	push(ele);
	printf("printing the stack elements\n");
	for(i = 0; i <= top; i++)
	{
		printf("%d\n",stack[i]);
	}
	}
}
int isFull()
{
	if(top == CAPACITY - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(int item)
{
	if(isFull())
	{
		printf("Stack is full\n");	
	}
	else
	{
		top++;
		stack[top] = item;
	}
}
