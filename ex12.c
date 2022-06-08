/*2. Write a program to input a number and print numbers from inputted number to 50*/
#include<stdio.h>
void main()
{
	int i;
	printf("enter a value...");
	scanf("%d",&i);
	for(;i<=50;i++)
	{
		printf("%d",i);
	}
}
