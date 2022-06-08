#include<stdio.h>
#include<conio.h>
void main(){
	int row,col;
	int arr[row][col],i,j;
	printf("enter the no. of rows:%d""\n");
	scanf("%d",&row);
	printf("enter the no. of col.: %d");
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
	printf("\n");	
	}
	getch();
}
