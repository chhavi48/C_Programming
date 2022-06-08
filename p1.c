#include<stdio.h>
int main()
{
	float wi1,p1,wi2,p2,result;
	printf("enter the weight of first item: ");
	scanf("%f",&wi1);
	printf("enter the value no. of item: ");
	scanf("%f",&p1);
		printf("enter the weight of second item: ");
	scanf("%f",&wi2);
	printf("enter the value no. of item: ");
	scanf("%f",&p2);
	result=((wi1*p1)+(wi2*p2))/(p1+p2);
	printf("Average value=%f\n",result);
	
}
