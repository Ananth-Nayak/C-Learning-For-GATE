#include <stdio.h>

int main() {
  int num = 500;
  int* ptr = &num;
  printf("Address of variable is: %p\n",ptr);
  printf("Value of the variable using its address: %d\n", *ptr);

return 0;
}