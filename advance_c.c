#include<stdio.h>
#define sqr(x)((x)*x)
#define cube(x)((x*x)*x)
int main()
{
  int x, y;
  x = sqr(5);
  y = cube(5);
  printf("Squre of 5:%d\n",x);
  printf("Cube of 5 :%d\n",y);
}

/*
OUTPUT :
Squre of 5 :25
Cube of 5 :125
*/
