#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter 3 numbers to find average");
    scanf("%d %d %d",&x,&y,&z);
    printf("the average of %d,%d,%d=%d",x,y,z,(x+y+z)/3);
    return 0;

}