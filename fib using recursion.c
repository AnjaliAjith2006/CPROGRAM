#include<Stdio.h>
int fib(int n);

int main()
{
printf("%d",fib(7));
}

int fib(int n)
{
    if (n==0)
    {
    return 0;
    }
    if (n==1)
    {
    return 1;
    }

int fibnm1=fib(n-1);
int fibnm2=fib(n-2);
int fibn= fibnm1+fibnm2;
return fibn;
}