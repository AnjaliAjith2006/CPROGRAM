#include <stdio.h>
int average( int science, int maths, int english,int hindi,int malayalam);

int main()
{
  int science=70;
  int maths=85;
  int english=65;
  int hindi=90;
  int malayalam=80;
  printf("%d",average(science,maths,english,hindi,malayalam));
}
int average( int science, int maths, int english, int hindi ,int malayalam)
{
return ((science+maths+english+malayalam+hindi)/5);
}