#include<stdio.h>
void main()
{
    int a[20];
    printf("enter 10 elements:\n");
    readarray(a);
    sortarray(a);
    printf("the numbers in the ascending order:\n");
    displayarray(a);
}
void readarray(int a[])
{
    int i;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
}
void sortarray(int a[])
{
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }
    }
}
void displayarray(int a[])
{
    int i;
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
}
