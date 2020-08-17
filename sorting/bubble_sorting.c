#include<stdio.h>
int main()
{
	int a[]={4,13,8,1,16};
	int i;
	bubble_sort(a,5);
	for(i=0; i<=4; i++)
	{
		printf(" %d",a[i]);
	}
	getch();
}
void bubble_sort(int a[],int N)
{
	int pass, i, temp;
	for(pass=1; pass<=N-1; pass++)
	{
		for(i=0; i<= N-1-pass; i++)
		{
			if(a[i]>a[i+1])
			{
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
			}
		}
		
	}
}
