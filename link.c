#include<stdio.h>
int main()
{
	int n=5,c,k;
	for(c=1; c<=n; c++)
	{
		for(k=1;k<=n-c;k++)
		printf(" ");
		
		for(k=1;k<c;k++)
		printf("*A");
		printf("*\n");
	}
	return 0;
}
