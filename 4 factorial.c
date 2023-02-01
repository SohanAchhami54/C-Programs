#include<stdio.h>
void main()
{
  printf("the factorial is:%d",fact(5));
}


int fact(int n)
{
    if (n==1)
    {
        return 1;
    }    int factNm1=  fact(n-1);
         int factN=factNm1*n;
    return factN;
}

