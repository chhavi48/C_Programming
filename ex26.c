 #include<stdio.h>
 void main()
{
	int marks[5],i,tot=0,avg;
	
	printf("enter marks given subject: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<=4;i++)
	{
		tot=tot+marks[i];
	}
	avg=tot/5;
	printf("total marks= %d\n",tot);
	prnitf("average=%d\n",avg);
}
