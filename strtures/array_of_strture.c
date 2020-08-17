#include<stdio.h>

struct emp
{
	int id;
	char name[20];
	float sal;
};

void main()
{
	struct emp e1 = {701, "Kartik", 30000};
	struct emp e2[10];
	printf("sizeof structre is-> %d \n\n", sizeof(struct emp));
	
	printf("sizeof simple structre variable is-> %d \n\n", sizeof(e1));
	
	printf("sizeof array of  structre variable is-> %d \n\n", sizeof(e2));
	
	printf("employee id-> %d \nemp salary-> %f \nemp name-> %s\n\n", e1.id,e1.sal,e1.name);
	int i;
	for(i=0;i<3; i++)
	{
		printf("Enter emp[ %d ] id,salary & name\n",i);
		scanf("%d%f%s",&e2[i].id,&e2[i].sal,&e2[i].name);
	}
}
