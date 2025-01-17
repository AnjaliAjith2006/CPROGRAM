#include <stdio.h>
void printhello();//decleration

int main()
//function call
{
    for(int i=1;i<=10;i++)
    {
    printhello();
    }
    return 0;
}
//function definition
void printhello()
{
    printf("hello!\n");
}
