#include<stdio.h>
int main(){
	char o;
	float num1,num2;
	printf("select an operater + or - or * or /  \n");
	scanf("%c",&o);
	printf("enter two operants:   ");
	scanf("%f%f",&num1,&num2);
	switch(o){
		case '+':
		printf("%.lf+%.lf=%.lf",num1,num2,num1+num2);
		break;
			case '-':
		printf("%.lf-%.lf=%.lf",num1,num2,num1-num2);
		break;
			case '*':
		printf("%.lf*%.lf=%.lf",num1,num2,num1*num2);
		break;
		case '/':
		printf("%.lf/.lf=%.lf",num1,num2,num1/num2);
		break;
		}
	}
