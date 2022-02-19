#include<stdio.h>
#include<string.h>
void main()
{
	char a[50];
	printf("Enterd characters :");
  fgets(a, 50, stdin);
  printf("%s",a);
}

/*
  OUTPUT :

  [prasad@localhost Strings]$ cc string.c
  [prasad@localhost Strings]$ ./a.out
  Enterd characters :prasad shelke
  prasad shelke

*/