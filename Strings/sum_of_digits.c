//Write a c program to print sum of digits. Input: 234 Output: 9 Input: 12345 Output: 15

#include<stdio.h>
void main()
{
	int rem, num, add=0;
	printf("Enter a number :");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		add = add + rem;
		num=num/10;
	}
	printf("Addition of number is %d",add);
}


/*[prasad@localhost Strings]$ cc sum_of_digits.c
[prasad@localhost Strings]$ ./a.out
Enter a number :123
Addition of number is 6[prasad@localhost Strings]$ */