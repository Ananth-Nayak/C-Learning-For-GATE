#include <stdio.h>
// typedef is used to create alias name for data type in c
// mostly used with structure
typedef struct employee{
  int code;
  float salary;
  char name[10];
} Emp;
int main() {
  Emp e1 = {100,10000,"ganesh"};  // same as struct employee e1
  // we can also use typedef here
  //typedef struct employee Emp;
  //we can also use with different data type
  Emp* ptr = &e1;
  typedef float ananth;
  ananth s1 = 8.9;
  printf("%.2f\n",s1);

  printf("%d %.2f %s\n",e1.code,e1.salary,e1.name);
  printf("%d %.2f %s\n",ptr->code,ptr->salary,ptr->name);
return 0;
}