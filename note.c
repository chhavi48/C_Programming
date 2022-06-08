#include<stdio.h>
void main()
{
	int amt,n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
	printf("enter your total amount..");
	scanf("%d",&amt);
	if(amt>=2000)
	{
        n2000=amt/2000;
        printf("number of 2000 notes is: %d",n2000);
        amt=amt-(2000*n2000);
        printf("remaining amount is =%d",amt);
	}
		if(amt>=500)
	{
        n500=amt/2000;
        printf("number of 500 notes is: %d\n",n500);
        amt=amt-(2000*n500);
        printf("remaining amount is =%d\n",amt);
	}
		if(amt>=100)
	{
        n100=amt/100;
        printf("number of 100 notes is: %d",n100);
        amt=amt-(2000*n100);
        printf("remaining amount is =%d",amt);
	}
		if(amt>=50)
	{
        n50=amt/50;
        printf("number of 50 notes is: %d",n50);
        amt=amt-(2000*n50);
        printf("remaining amount is =%d",amt);
	}
		if(amt>=20)
	{
        n20=amt/20;
        printf("number of 20 notes is: %d",n20);
        amt=amt-(2000*n20);
        printf("remaining amount is =%d",amt);
	}
		if(amt>=10)
	{
        n10=amt/10;
        printf("number of 2000 notes is: %d",n10);
        amt=amt-(2000*n10);
        printf("remaining amount is =%d",amt);
	}
		if(amt>=2)
	{
        n2=amt/2;
        printf("number of 2000 notes is: %d",n2);
        amt=amt-(2000*n2);
        printf("remaining amount is =%d",amt);
	}
		if(amt>=1)
	{
        n1=amt/1;
        printf("number of 2000 notes is: %d",n1);
        amt=amt-(2000*n1);
        printf("remaining amount is =%d",amt);
	}
	
}
