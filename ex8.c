#include<stdio.h>
int main()
{
	int a,p,d;
	printf("enter your pay amount");
	scanf("%d",&a);
	if(a>1000)
	{
		printf("total amount to you pay:%d",(a-1000*10/100));
	}
	else{
		printf("total amount to you pay:%d",a);
	}
}
