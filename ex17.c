// 8. Write a program to ask the user to input numbers for 5 times and print square of that number.//
#include<stdio.h>
int main()
{
	int i,num;
		printf("enter a number you want to print square..");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&num);
		printf("square of %d is %d\n",num,(num*num));
	}
}
