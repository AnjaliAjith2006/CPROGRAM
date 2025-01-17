
#include<stdio.h>
int fact(int a);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",fact(n));
}


int fact(int a)
{if (a==1)
return 1;
    int factnm1=fact(a-1);
    int factn= factnm1*a;
    return factn;
}