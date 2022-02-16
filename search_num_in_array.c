#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i, num, a[10];
	printf("Enter a array elements :\n");
	for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a search key :\n");
	scanf("%d",&num);

	for(i=0; i<10; i++)
	{
		if(num==a[i])
		{
			printf("number is present in array\n");
			exit(0);
		}

	}
}

/*

OUTPUT :

[prasad@localhost C-Programming]$ cc search_num_in_array.c
[prasad@localhost C-Programming]$ ./a.out
Enter a array elements :
1 2 3 4 5 6 7 8 8 8
Enter a search key :
8
number is present in array
*/
