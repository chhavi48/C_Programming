#include<stdio.h>
int main()
{
int a,b,c,max;
printf("\n Enter 3 numbers");
scanf("%d %d %d", &a, &b,&c);
max=a;
if(b>max)
max=b;
if(c>max)
max=c;
printf("Largest No is %d",max);
}

