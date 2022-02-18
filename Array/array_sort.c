#include<stdio.h>
void main()
{
	int i, j, temp, arr[50], n;

	printf("Enter a number of elements:\n ");
  scanf("%d",&n);

	printf("Enter a array elements : \n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
    {
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
    }
	}
	printf("Sorted array is Given below : \n");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\n",arr[i]);
	}

}

/*

OUTPUT :

[prasad@localhost Array]$ ./a.out
Enter a number of elements:
 5
Enter a array elements :
-6 0 6 6 -6
Sorted array is Given below :
-6
-6
0
6
6
[prasad@localhost Array]$ cc array_sort.c

*/
