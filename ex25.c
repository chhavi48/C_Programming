#include<stdio.h>
void main()
{
  int n,c;
  long int f=1;
  
   printf(“Enter the number”);
   scanf(“%ld”,&n);
if(n<0)
goto end;
for(c=1;c<=n;c++)
f=f*c;
printf(“\n factorial = %ld ”,f);
end:
getch();
}
