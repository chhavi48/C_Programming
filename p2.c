#include<stdio.h>
int main()
{
	int amt;
	float hour,mul;
	printf("Enter the amount to you find 1 hour: ");
	scanf("%d",&amt);
	printf("enter the hour ,you are worked: ");
	scanf("%f",&hour);
	mul=amt*hour;
	printf("your salary of this month is:%f\n",mul);
}
