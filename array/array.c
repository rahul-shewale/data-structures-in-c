#include<stdio.h>
int array[7];
void insert(void);
void reverse(void);
void display(void);
void main()
{
	while(1)
	{
		int ch;
		printf("1. insert elements into array\n");
		printf("2. reverese the array\n");
		printf("Enter your choice : ");
		scanf("%d", &ch);
		printf("\n");
		switch(ch)
		{
			case 1 : insert();
					 display();
					 break;
			case 2 : reverse();
					 display();
					 break;
			case 3 : display();
					 break;
			default : printf("Enter valid input\n");
		}
	}
}

void insert()
{
	int i;
	printf("Enter the elements\n");
	for(i = 0; i<7; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("\n");
}

void display()
{
	int i;
	printf("array elements are -> ");
	for(i = 0; i<7; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
}

void reverse()
{
	int i = 0,j = 6, temp;
	while(i<j)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		i++;
		j--;
	}
}
