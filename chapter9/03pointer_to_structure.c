#include <stdio.h>
struct employee{
  int code;
  float salary;
  char name[10];
};

int main() {
  struct employee e1;
  struct employee *ptr;   //ptr now has the address of structure
  ptr = &e1;
  e1.code = 500;
  printf("%d\n",(*ptr).code); //* should be place inside paranthasis bcz first we need to dereference ptr
  //instead of writing (*ptr).code we can write ptr->code
  printf("%d\n",ptr->code);
return 0;
}