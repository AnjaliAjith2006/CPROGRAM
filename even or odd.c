#include<stdio.h>
int main()
{
    int x;
    printf("enter a number you want to check if it's even or odd");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("the value %d  is even",x);

    }
    else
    {
        printf("the value %d is odd",x);
    }
    return 0;
}