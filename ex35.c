#include <stdio.h>
void main()
{
 int st[5][5],i,j,sum=0;
 for(i=0;i<=4;i++)
 {
 	
 	printf("enter the value of 5 elemen: t");
 	for(j=1;j<=4;j++)
 	{
 		scanf("%d",&st[i][j]);
	 }
 }
 for(j=0;j<=4;j++)
 {
 	sum=sum+st[i][j];
 }
 prnitf("sum of all element is:%d",sum);
}
