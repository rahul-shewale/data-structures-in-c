#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node* top = NULL;
void push(void);
void pop(void);
void display(void);
void main()
{	
	int ch, ele;
	while(1)
	{
		printf("1. Push an element \n");
		printf("2. Pop the element\n");
		printf("3. display\n");
		printf("Enter your choice : ");
		scanf("%d", &ch);
		printf("\n");
		switch(ch)
		{
			case 1 : push();
					 break;
			case 2 : pop();
					 break;
			case 3 : display();
					 break;
			default : printf("Invalid input : Enter(1 to 3)\n");
		}	
	}
	
}

void push()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node*));
	printf("Enter the item to insert into stack : ");
	scanf("%d", &temp->data);
	printf("\n");
	temp->link = top;
	top = temp;
}
void pop()
{
	struct node* temp;
	if(top == NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		temp = top;
		printf("poped element is : %d \n", temp->data);
		top = temp->link;
		temp->link = NULL;
		free(temp);
	}
}
void display()
{
	struct node* temp;
	temp = top;
	if(top == NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		while(temp != NULL)
		{
			printf("\t\t| %d |",temp->data);
			printf("\n");
			temp = temp->link;
		}	
	}	
}
