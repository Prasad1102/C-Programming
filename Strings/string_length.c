//wap to find the length of string
#include<stdio.h>
void main()
{
	int i, count=0;
	char str[50] = "My Name is Ganesh";

	for(i=0; i<50 && str[i] != '\0'; i++)
	{
		putchar(str[i]);
		printf("\n");
		count++;
	}
	printf("String length is %d\n", count);
}


/*

prasad@inspiron-3511:~/C-Programming/Strings$ cc string_length.c
prasad@inspiron-3511:~/C-Programming/Strings$ ./a.out 
M
y
 
N
a
m
e
 
i
s
 
G
a
n
e
s
h
String length is 17
prasad@inspiron-3511:~/C-Programming/Strings$ */
