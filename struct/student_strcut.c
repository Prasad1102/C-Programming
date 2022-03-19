#include <stdio.h>

struct student
{
  int roll_number;
  char name[25];
};

struct student std[5];
int main()
{
  for(int i=0; i<5; i++)
  {
    printf("Enter Details for student %d\n", i+1);
    printf("Enter a roll_number: ");
    scanf("%d", &std[i].roll_number);
    printf("Enter a name: ");
    scanf("%s", std[i].name);
  }

  printf("Students details are:\n");
  for(int i=0; i< 5; i++)
  {
    printf("roll_number: %d\n", std[i].roll_number);
    printf("name: %s\n", std[i].name);
  }
  return 0;
}