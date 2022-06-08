#include<stdio.h>
int main()
{
	int a,rem;
	printf("enter a number you want to check that is divisibal by 10 or not");
	scanf("%d",&a);
	rem=a%10;
	if(rem==0)
	{
	printf("number is divisibal by 10");
}
	else
	printf("opps!! you number is not divisibal by 10");
}
