
#include<stdio.h>
void main()
{
    int n;
    printf("enter any number\n");
    scanf("%d",&n);
    if(n%2==0)
        goto even;
    else
        goto odd;
    even:
        printf("even number");
        exit(0);
        odd:
            printf("odd number");
}
