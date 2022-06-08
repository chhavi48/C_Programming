#include <stdio.h>
#include <conio.h>
#include<dos.h>
#include<string.h>
void main(){
	int i,j,k,l,t;
	char y[20];
	printf("enter a string");
	gotoxy(2,2);
	gets(y);
	l=strlen(y);
	 t=1;
	for(j=0;j<1;j++,t++){
		for(i=3;i<=24;i++)
		{
			for(i=3;i<=24;i++)
			{
				clrscr();
				puts(y);
				gotoxy("%c",y[j]);
				delay(100);
			}
		}
		clrscr();
		getch();
	}
}
