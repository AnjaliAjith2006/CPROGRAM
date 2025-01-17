#include <stdio.h>
int sum(int n);

int main()
{
    printf("%d", sum(5));
}

int sum(int n)
{
    if (n == 1)
        return 1;
    int nm1 = sum(n - 1);
    int num = nm1 + n;
    return num;
}