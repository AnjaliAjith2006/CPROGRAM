#include <stdio.h>
int main()
{
    int x;
    int i = 0;
    printf("enter a number ");
    scanf("%d", &x);
    while (i <= x)
    {
        printf("%d\n", i);
        i++;
    }
}