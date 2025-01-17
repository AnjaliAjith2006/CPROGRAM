#include <stdio.h>
int main()
{
    int x;
    printf("enter the marks");
    scanf("%d", &x);
    if (x > 30)
    {
        printf("the child passed");
    }
    else
    {
        printf("the child failed");
    }
}