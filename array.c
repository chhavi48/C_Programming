#include<stdio.h>
 int( )  {
  int array[10]={1,2,3,4,5,6,7,8,9,0};
  int loop,  largest;
  largest=array [0];
  for(loop=1; loop < 10; loop++) {
  if(largest < array[loop])    
    largest=array[loop];
  }
  print f('largest element of array is %d',largest);
  return 0;
}
