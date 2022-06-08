#include<stdio.h>
int main()
{
	int i,num;
	printf("enter a value you want to print table..");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d ",(num*i));
	}
	
}
