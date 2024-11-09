#include <stdio.h>

struct vector{
  int i;
  int j;
};

int main() {
  struct vector v = {2,4};
  printf("the value of vector is %di+%dj\n",v.i,v.j);

return 0;
}