#include <stdio.h>

int main() {
  char ch[20],ch1[20];
  float salary,salary1;
  FILE *ptr;
  ptr = fopen("file5.txt","w");

  printf("Enter the name of employee1: ");
  scanf("%s",&ch);
  printf("Enter the salary of employee1: ");
  scanf("%f",&salary);
  printf("Enter the name of employee2: ");
  scanf("%s",&ch1);
  printf("Enter the salary of employee2: ");
  scanf("%f",&salary1);

  fprintf(ptr,"%s, %.2f\n",ch,salary);
  fprintf(ptr,"%s, %.2f\n",ch1,salary1);
  fclose(ptr);
return 0;
}