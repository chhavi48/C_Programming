#include<stdio.h>
void main()
{
	int num,rem;
	printf("enter a number you want to check even or odd");
	scanf("%d",&num);
	rem=(num%2);
	  if(rem==0){
		printf("this is a even number");
	}
	else{
		printf("this is a odd number");
	}
}
