#include <stdio.h>
void printnamaste();

void printbonjour();

int main()
{
    int n;
    printf("enter 1 for inidan and 2 for french\n");
    scanf("%d", &n);
    if (n == 1)
    {
        printnamaste();
    }
    else
    {
        printbonjour();
    }
    return 0;
}

void printnamaste()
{
    printf("namaaste\n");
}
void printbonjour()
{
    printf("bonjour\n");
}