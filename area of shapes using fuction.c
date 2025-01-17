#include<stdio.h>
int areaofrectangle(int a ,int b );
int areaofsquare(int a);
int  areaofcircle(int a);

int main(){
int a,b;
printf("enter length 1: \n");
scanf("%d",&a);
printf("enter length 2:\n");

 scanf("%d",&b);

int rectangle=areaofrectangle(a,b);
printf("%d is area of rectangle\n",rectangle);
int square=areaofsquare(a);
printf("%d is area of square\n",square);
int circel=areaofcircle(a);

printf("%d is area of circle\n",circel);

}


int areaofrectangle(int a ,int b){
return a*b;
}

int areaofsquare(int a)
{
    return a*a;
}
int areaofcircle(int a)
{
    return 3.14*a*a;
}