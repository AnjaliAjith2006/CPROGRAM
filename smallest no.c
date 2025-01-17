#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter 3 numbers");
    scanf("%d %d %d",&x,&y,&z);
    if(x<=y&&x<=z)
    {
        printf("%d is the smallest number",x);

    }
    else if (y<=x&&y<=z)
    {
        printf ("%d is the smallest number",y);

    }
    else
    {
        printf("%d is the smallest ",z);
    }
    return 0;

}