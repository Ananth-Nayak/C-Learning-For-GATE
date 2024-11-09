#include <stdio.h>
// previous problem but with the help of typedef
typedef struct vector{
  int i;
  int j;
} V;

V sumVector(V v1, V v2){
  V v3 ={v1.i + v2.i, v1.j + v2.j};
  return v3;
}

int main() {
  V v1 = {5,2};
  V v2 = {7,9};
  V v3=sumVector(v1,v2);

  printf("The value of v3 is %di+%dj\n",v3.i,v3.j);

return 0;
}