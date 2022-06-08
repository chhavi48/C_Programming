//4. Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers//
#include<stdio.h>
int main()
{
	int num,i,p=0,n=0;
	printf("plsese enter 5 values");
	for(i=1;i<=5;i++)
	{
			scanf("%d",&num);
			if(num>=0)
			{
				p=p+1;
			}
			else{
				n=n+1;
			}

	}
	printf("positive =%d and negative=%d",p,n);
	
}
