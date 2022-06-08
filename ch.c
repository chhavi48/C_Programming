      /*Program 1 : write a program to find sum and average of three given numbers.*/
#include<stdio.h>
int main()
{
	int p,r,t,int_amt;
	printf("input principal, rate of interest & time to find simple interest: \n");
	scanf("%d%f%f",&p,&r,&t);
	int_amt=(p*r*t)/100;
	printf("simple interest =%d",int_amt);
}
