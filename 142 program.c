#include<stdio.h>
void main()
{
    float a,b,c;
    float percent;
    printf("enter the value of a,b,c:\n");
    scanf("%f%f%f",&a,&b,&c);
    percent=(a+b+c)/3;
    printf("percentage=%f\n",percent);

    if(percent>=90 & percent<100)
    {
        printf("I LOVE YOU VERY MUCH:\n");
    }
    else if(percent>=80 & percent<90)
    {
        printf("I love you:\n",percent);
    }
        else if(percent>=70 & percent<80);
        {
            printf("I love other.:\n",percent);
        }
           //else
         //  {
           // printf("I hate you:\n",percent);
          // }
}
