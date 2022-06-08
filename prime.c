#include<stdio.h>
void main(){
	int x,i;
	printf("enter a number  you want to check prime or not =");
	scanf("%d",&x);
	for(i=2;i<=x-1;i++)
	if(x%i==0)
	break;
	if(i==x)
	{
		printf("%d : your inputed number is prime ",x);
	}
	else{
		printf("%d  :  your inputed number is not a prime number",x);
	}
}
