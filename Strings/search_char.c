//wap to check if  given character is prisent in string or not
#include<stdio.h>
#include<stdbool.h>
void main()
{
  int i;
	char a[50];
	char ch, c, cha;
  bool b=false;

	printf("Enter a string : ");
	fgets(a, 50, stdin);


	printf("Entered string is :%s\n", a);


	printf("Enter a character you want to check in string :");
	scanf(" %c", &c);
  for(i=0 ; i<50 ; i++)
  {
    if(c==a[i])
      b=true;
  }
  if(b)
  {
    printf("Character is present in string");
  }
  else
  {
    printf("Character is not present in string");
  }
}



/*prasad@inspiron-3511:~/C-Programming/Strings$ cc search_char.c
prasad@inspiron-3511:~/C-Programming/Strings$ ./a.out
Enter a string : prasad shelke
Entered string is :prasad shelke

Enter a character you want to check in string :p
Character is present in stringprasad@inspiron-3511:~/C-Programming/Strings$ ./a.out
Enter a string : prasad
Entered string is :prasad

Enter a character you want to check in string :t
Character is not present in stringprasad@inspiron-3511:~/C-Programming/Strings$ */

