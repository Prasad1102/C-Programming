#include<stdio.h>
int main()
{
	int i, j=0, k=1, l, num;
	printf("Enter a number :");
	scanf("%d",&num);
	printf("%d\n%d\n",j, k);
	for(i=0 ; i<num-2 ; i++)
	{
		l = j + k;
		printf("%d\n", l);
		j = k;
		k = l;
	}
	return 0;
}

/*

OUTPUT :

[prasad@localhost Strings]$ cc Fibonacci.c
[prasad@localhost Strings]$ ./a.out
Enter a number :15
0
1
1
2
3
5
8
13
21
34
55
89
144
233
377
[prasad@localhost Strings]$


*/