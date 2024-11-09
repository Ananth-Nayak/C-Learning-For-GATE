#include <stdio.h>
#include <string.h>

struct employee{
  int code;
  float salary;
  char name[10];
};

int main() {
  struct employee e1,e2,e3;
  struct employee ad = {1001,250000,"Ananth"}; //other ways of initilizing
  struct employee dee = {0};  //all data set to zero
  // e1.code = 4511;
  // strcpy(e1.name,"Ananth");   // when we declare string using char [] we cannot assign later/reinitilize.
  // e1.salary = 5005.55;

  printf("Enter the employee code:\n");
  scanf("%d",&e1.code);
  
  printf("Enter the employee salary:\n");
  scanf("%f",&e1.salary);

  printf("Enter the employee name:\n");
  scanf("%s",&e1.name);

  printf("Enter the employee code:\n");
  scanf("%d",&e2.code);
  
  printf("Enter the employee salary:\n");
  scanf("%f",&e2.salary);

  printf("Enter the employee name:\n");
  scanf("%s",&e2.name);

  printf("Enter the employee code:\n");
  scanf("%d",&e3.code);
  
  printf("Enter the employee salary:\n");
  scanf("%f",&e3.salary);

  printf("Enter the employee name:\n");
  scanf("%s",&e3.name);

  printf("%d %.2f %s\n",e1.code,e1.salary,e1.name);
  printf("%d %.2f %s\n",e2.code,e2.salary,e2.name);
  printf("%d %.2f %s\n",e3.code,e3.salary,e3.name);

return 0;
}

//structure data stored in contiguous memory for each instance
//e1 -> code(7810),salary(7814),name(7818) // should look each data type how much byte they take