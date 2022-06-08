#include<stdio.h>
void main(){
	//how many number i want to store .
	//5 number i want to store.
	
	float marks[5];
	printf("enter the 5 subject marks, you want to store in array:-\n");
	printf("enter the 0 index  number:-\n");
	scanf("%f",&marks[0]);
	printf("enter the 1 index number:-\n");
	scanf("%f",&marks[1]);
	printf("enter the 2 index number:-\n");
	scanf("%f",&marks[2]);
	printf("enter the 3 index number:-\n");
	scanf("%f",&marks[3]);
	printf("enter the 4 index number:-\n");
	scanf("%f",&marks[4]);
        
        printf("this is the your array, your numbers are store successfully :-\n");
        
    printf("marks 0 =%f \n",marks[0]);
       printf("marks 1=%f \n",marks[1]);
          printf("marks 2 =%f \n",marks[2]);
             printf("marks 3 =%f \n",marks[3]);
                printf("marks 4 =%f \n",marks[4]);
	
}
