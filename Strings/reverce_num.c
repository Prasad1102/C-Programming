#include<stdio.h>
void main()
{
	int a, b;
	printf("Enter numbers :\n");
	scanf("%d %d",&a,&b);
	printf("Before swaping of numbers: \na=%d  \nb=%d\n",a, b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping the numbers: \na=%d \nb=%d \n",a, b);
}


/*

OUTPUT:

[prasad@localhost Strings]$ cc reverce_num.c
[prasad@localhost Strings]$ ./a.out
Enter numbers :
12 13
Before revrce a digits :
a=12
b=13
After revrce a digits :
a=13
b=12
[prasad@localhost Strings]$
*/
