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

[prasad@localhost Strings]$ cc swap_num.c
[prasad@localhost Strings]$ ./a.out
Enter numbers :
11 22
Before swaping of numbers:
a=11
b=22
After swapping the numbers:
a=22
b=11
[prasad@localhost Strings]$

*/
