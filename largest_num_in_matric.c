#include<stdio.h>
main()
{
  int max=0, i, j, mat[3][3];

  for(i=0; i<=2; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("\nEnter a matrix for %d, %d:", i, j);
      scanf("%d",&mat[i][j]);
    }
  }

  printf("\nEnter a matrix is: \n");
  for(i=0; i<=2; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d ",mat[i][j]);
    }
    printf("\n");
  }

  for(i=0; i<=2; i++)
  {
    for(j=0; j<3; j++)
    {

      if(mat[i][j]>max)
      {
        max=mat[i][j];
      }
    }
  }
  printf("\n maximum value in a matrix is %d",max);
}


/*

OUTPUT

[prasad@localhost C-Programming]$ cc exp.c
[prasad@localhost C-Programming]$ ./a.out

Enter a matrix for 0, 0:1

Enter a matrix for 0, 1:3

Enter a matrix for 0, 2:5

Enter a matrix for 1, 0:6

Enter a matrix for 1, 1:7

Enter a matrix for 1, 2:8

Enter a matrix for 2, 0:8

Enter a matrix for 2, 1:9

Enter a matrix for 2, 2:19

Enter a matrix is:
1 3 5
6 7 8
8 9 19

 maximum value in a matrix is 19
*/