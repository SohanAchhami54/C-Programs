#include<stdio.h>
void main()
{
    int i,j,num,rem,count=0;
    printf("enter any number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
     {

      for(j=1;j<=i;j++)
        {
            rem=i%j;
            if(rem==0)
            {
                count=count+1;
            }
        }

    if(count==2)
    {
        printf("%d\t",i);
    }
    count=0;

}
}
