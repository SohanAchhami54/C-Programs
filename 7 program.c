#include<stdio.h>
void main()

{
  //  int n;
    printf("%d\n",fib(4));
}
int fib(int n)
{
   // fib(1)=0;
   // fib(2)=1;
    if (n==0)
    {
        return 0;
   }
    if (n==1)
{
        return 1;
}
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm1+fibNm2;
    //printf("fibonacii of %d is:%d\n",n,fibN);
    return fibN;

}
