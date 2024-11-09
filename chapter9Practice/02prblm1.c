#include <stdio.h>

struct vector{
  int i;
  int j;
};

//since we are returning data type is struct vector we used that in fn defination(like int fn(),float fn()...)
struct vector sumVector(struct vector v1, struct vector v2){
  struct vector v3 ={v1.i + v2.i, v1.j + v2.j};
  return v3;
}

int main() {
  struct vector v1 = {5,2};
  struct vector v2 = {7,9};
  struct vector v3=sumVector(v1,v2);

  printf("The value of v3 is %di+%dj\n",v3.i,v3.j);

return 0;
}