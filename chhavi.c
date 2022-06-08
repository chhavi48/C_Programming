#include<stdio.h>
#include<conio.h>

void main()
{
    int Arr[100],Pos,NewEle,i,size;
    clrscr();
    printf("\n Enter the size of Array");
    scanf("%d" ,&size);
    printf("\n Enter the element in array");
    for(i=0; i<size; i++)
    {
        scanf("%d" &Arr[i]);
    }
    printf("\n Enter the position");
    scanf("%d" ,NewEle);

    if(Pos>size)
    {
        printf("\n Invalid Position Input by User");
    }
    else
    {
        for(i=size-1;i>Pos-1; i--)
        {
            Arr[i+1]=Arr[i];
        }
        Arr[Pos-1]=NewEle;
        printf("\n New Array After Insertion is:\n");
        for(i=0;i<size;i++)
        {
            printf("%d\n",Arr[i]);
        }
    }
getch();
    
}
