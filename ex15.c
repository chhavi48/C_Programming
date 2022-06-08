
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
				p=p+num;
			}
			else{
				n=n+num;
			}

	}
	printf("positive =%d and negative=%d",p,n);
	
}
