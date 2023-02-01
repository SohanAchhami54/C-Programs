#include<stdio.h>
void main()
{
    float a[]={10.4,45.67,56.56};
    int i;
    printf("the continuous memory location:\n");
    for (i=0;i<3;i++)
    {
        printf("%u\t",&a[i]);
    }
}
