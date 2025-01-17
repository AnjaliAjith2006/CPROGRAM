#include<stdio.h>
float celcuis(float a);

int main()
{
    float a;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&a);

    float far=celcuis(a);
    printf("Temperature in Celsius: %f",far);
    return 0;
}
float celcuis(float a)
{
    float far= a *(9.0/5.0)+32;
    return far;
}