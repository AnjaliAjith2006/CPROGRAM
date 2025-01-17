#include<stdio.h>
int main()
{
    int x;
    float pi=3.14;
    printf("enter the value of radius");
    scanf("%d",&x);
    printf("area of circle is %f*%d*%d=%f\n",pi,x,x,pi*x*x);
    return 0;

}