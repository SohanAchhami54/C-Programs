#include<stdio.h>
 //float areaofcircle(float radius)
 int aor(int length, int breadth)
{
   // return(3.14*radius*radius);
    return(length*breadth);

}
void main()
{
    //float  r;
    int l,b;
   // printf("enter the value of the radius:\n");
    printf("enter the value of the l and b:\n");
   // scanf("%f",&r);
    scanf("%d%d",&l,&b);

   // printf("area of circle is:%f",areaofcircle(r));
    printf("areaofrectangle is:%d",aor(l,b));
}




