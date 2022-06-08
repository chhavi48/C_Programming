#include<stdio.h>
void main(){
	int i,j,k;
	printf("enter three values....");
	scanf("%d%d%d",&i,&j,&k);
	if(i>j&&i>k){
		printf("the value of %d is the gretest number",i);
	}
	else{
		if(j>i&&j>k)
		printf("the value of %d is the gretest number",j);
	
	else{
		printf("the value of %d is the gretest number",k);
	}
}
}

