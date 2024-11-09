#include <stdio.h>
struct employee{
  int code;
  float salary;
};
int main() {
  typedef struct employee Emp;
  Emp e1;
  Emp* ptr;
  ptr = &e1;
  ptr->code = 1005;
  ptr->salary = 50000;

  printf("%d\n%.2f\n",ptr->code,ptr->salary);

return 0;
}