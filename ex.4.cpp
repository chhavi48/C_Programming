#include<stdio.h>
int main()
{
	int a,rem;
	printf("enter a number you want to check that is divisibal by 7 or not");
	scanf("%d",&a);
	rem=a%7;
	if(rem==0)
	{
		printf("number is divisibal by 7");
	}
	else{
		printf("opps! your number is not divisibal by 7");
	}
	
}
