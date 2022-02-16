#include<stdio.h>
int main(void)
{  
  int i,j, mat[3][3]={{1, 2, 3},{4, 5, 6},{2, 3, 7}};

  printf("\nEnterd matrix :\n");   
  for(i=0 ; i<3 ; i++)    
  {  
    for(j=0 ; j<3 ; j++)  
      {  
        printf("%d ",mat[i][j]);  
      }  
    printf("\n");  
  }  

}
