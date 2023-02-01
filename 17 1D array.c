#include<stdio.h>
void main()
{
  int *x[5];
  int i;
  printf("enter the elements in the array:\n");
  for(i=0;i<5;i++)
  {
      scanf("%d",x+i);
  }
  for (i=0;i<5;i++)
  {
      printf("%d\t",*(x+i));
  }
}
