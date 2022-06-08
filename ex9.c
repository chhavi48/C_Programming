#include<stdio.h>
int main()
{
	int r,f,s,t;
	printf("enter your roll no.: ");
	scanf("%d",&r);
	printf("enter your first subject number: ");
	scanf("%d",&f);
		printf("enter your second subject number: ");
	scanf("%d",&s);
		printf("enter your third subject number: ");
	scanf("%d",&t);
	t=f+s+t;
	if(t>90)
	
		printf("first division and your pesentage is:%d",(t*100/300));
		else if(t>80)
			printf("second division and your pesentage is:%d",(t*100/300));
			else if(t>70)
				printf("third division and your pesentage is:%d",(t*100/300));
				else
					printf("pass and your pesentage is:%d",(t*100/300));
	
}
