//#include<stdio.h>
//int *add(int a, int b)
//{
//    int c= a+b;
//    return c;
//}
//void main ()
//{
//   int *ptr;
//  ptr=add(100,200);
//    printf("sum of the two number is:%d",ptr);
//}
#include<stdio.h>
int *returnpointer(int *p,int n)
{
    p=p+n;
    return p;
}
void main()
{
    int i,*ptr;
    int arr[]={11,22,33,44,55};
    i=2;
    ptr=returnpointer(arr,i);
    printf("after incrementing arr by 2 is\n");
    printf("%d",*ptr);
}
