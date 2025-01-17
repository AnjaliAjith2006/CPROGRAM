#include <stdio.h>
int main()
{
    int x;
    int y = 2;
    printf("enter a number");
    scanf("%d", &x);
    if (x % y == 0)
    {
        printf("the value %d is divisible by 2", x);
    }
    else
    {
        printf("the value %d is not divisible by 2", x);
    }
    return 0;
}