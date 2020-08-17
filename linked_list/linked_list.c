#include<stdio.h>
#include<stdlib.h>
void append(void);
void at_begin(void);
void add_after(void);
int len(void);
void display(void);
void delete(void);
void swap(void);
void reverse(void);
struct node
{
	int data;
	struct node* link;
};
struct node* root = NULL;

void main()
{
	int ch, count;
	while(1)
	{
		printf("1. adding element At the Beginning of the linkedlist\n");
		printf("2. adding element At the End of linkedlist\n");
		printf("3. adding element After the element i.e in the middle\n");
		printf("4. length of the linkedlist\n");
		printf("5. display the linkedlist\n");
		printf("6. deleting the node\n");
		printf("7. swapping the two adjacent nodes\n");
		printf("8. reverse the linked lsit\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);
		printf("\n");
		switch(ch)
		{
			case 1:	at_begin();
					display();
					break;
			case 2: append();
					display();
					break;
			case 3:	add_after();
					display();
					break;
			case 4: count = len();
					printf("Count is : %d\n", count);
					break;
			case 5: display();
					break;
			case 6 : delete();
					 display();
					 break;	
			case 7 : swap();
					 display();
					 break;
			case 8: reverse();
					display();
					break;
			default : printf("Enter valid input\n");		
		}
	}
}

void append()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node*));
	printf("Enter element : ");
	scanf("%d", &temp->data);
	printf("\n");
	if(root == NULL)
	{
		root = temp;
	}
	else
	{
		struct node* p;
		p = root;
		while(p->link != NULL)
		{
			p = p->link;
		}
		p->link = temp;
	}
	
}

void at_begin()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node*));
	printf("Enter the element : ");
	scanf("%d", &temp->data);
	printf("\n");
	temp->link = NULL;
	if(root == NULL)
	{
		root = temp;
	}
	else
	{
		temp->link = root;
		root = temp;
	}
}

void add_after()
{
	struct node* temp, *p;
	int loc, i = 1;
	printf("Enter the loc to insert : ");
	scanf("%d", &loc);
	printf("\n");
	if(loc > len())
	{
		printf("Invalid Input : \n");
	}
	else
	{
		temp = (struct node*)malloc(sizeof(struct node*));
		printf("Enter the element to insert : ");
		scanf("%d", &temp->data);
		temp->link = NULL;
		printf("\n");
		p = root;
		while(i < loc)
		{
			p = p->link;
			i++;
		}
		temp->link = p->link;
		p->link = temp;
	}
}

void delete()
{
	struct node* temp;
	int loc;
	printf("Enter the location to delete : ");
	scanf("%d", &loc);
	printf("\n");
	if(loc > len())
	{
		printf("Invalid input:\n");
	}
	else if(loc == 1)
	{
		temp = root;
		root = temp->link;
		temp->link = NULL;
		free(temp);
	}
	else
	{
		struct node* p = root, *q;
		int i = 1;
		while(i < loc - 1)
		{
			p = p->link;
			i++;
		}
		q = p->link;
		p->link = q->link;
		q->link = NULL;
		free(q);
	}
}

int len()
{
	int count = 0;
	struct node* temp;
	temp = root;
	while(temp != NULL)
	{
		count++;
		temp = temp->link;
	}
	return count;
}

void display()
{
	struct node* temp;
	temp = root;
	if(temp == NULL)
	{
		printf("Linked list is empty/n");
	}
	else
	{
		while(temp != NULL)
		{
			printf("| %d |->\t",temp->data);
			temp = temp->link;
		}
		printf("\n");
		printf("\n");
	}
}


void swap()
{
	int loc, i=1;
	printf("Enter the loc to to swap\n");
	scanf("%d", &loc);
	struct node *p, *q, *r;
	p = root;
	while(i < loc-1)
	{
		p = p->link;
		i++;
	}
	q = p->link;
	r = q->link;
	q->link = r->link;
	r->link = q;
	p->link = r;
}

void reverse()
{
	struct node *p, *q;
	int i = 0, j = len() - 1;
	p=root;
	q=root;
	while(i < j)
	{
		int k = 0;
		while(k < j)
		{
			q = q->link;
			k++;
		}
		int temp;
		temp = p->data;
		p->data = q->data;
		q->data = temp;
		i++;
		j--;
		p = p->link;
		q = root;
	}
}
