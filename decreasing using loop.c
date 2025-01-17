#include<stdio.h>
int main()
{
    int x;
    printf("enter  number");

    
    scanf("%d", &x);//+

    for(int i=10;i>=x;i--)
    printf("%d\n",i);
}
