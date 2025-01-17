#include<stdio.h>
int main()
{
    char x;
    printf("enter a digit or character");
    scanf("%c",&x);
    if(x>'0'&&x<'9')
    printf("you entered a digit");
    else
    printf("you entered a character");

    return 0;
}