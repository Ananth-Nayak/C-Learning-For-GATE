#include <stdio.h>

int main() {
  int i = 144;
  int *ptr=&i;
  printf("The original value is %d\n",i);
  *ptr *=10;
  printf("The changed value is %d\n",i);

return 0;
}