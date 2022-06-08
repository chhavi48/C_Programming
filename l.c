#include<stdio.h>
int main(){
	int c,j ,rows,col;
	printf("enter the value of rows: ");
	scanf("%d",&rows);
	printf("enter the value of column: ");
	scanf("%d",&col);
	for(c=1;c<=rows; c++)
	{
		for(j=1;j<=col;j++)
		{
			if(j==1 || c==rows){
				printf(" *",j);
			}
				else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}

