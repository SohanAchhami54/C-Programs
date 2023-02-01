#include<stdio.h>
void main()
{
  float E,N,M,percent;
  printf("enter the mark of English,Nepali,Math:\n");
  scanf("%f%f%f",&E,&N,&M);
  percent=(E+N+M)/3;
  if (percent>=90 & percent<100)
  // printf("percentage=%f\n",percent);
  printf("\nA+:\n",percent);
  else if(percent>=80 & percent<90)
  //printf("percentage=%f\n",percent);
  printf("A:\n",percent);
  else if(percent>=70 & percent<80)
   // printf("percentage=%f\n",percent);
    printf("B+",percent);
  else
  printf("percentage=%f\n",percent);
    printf("fail:\n",percent);
}
