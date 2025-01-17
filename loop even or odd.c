// print the number until the user input an odd number
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("enter a number:");
        scanf("%d", &n);
        printf("%d\n",n);

        if (n % 2 != 0)
        {
            break;
        }

    } while (1);
        printf("the number you entered is an odd number");
}
