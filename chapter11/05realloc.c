#include <stdio.h>
#include<stdlib.h>
//realloc() gives the ability to increase the size even after we need more memory than dynamic memory allocated.

int main() {
  int n=5;
  scanf("%d",&n);
  int *ptr;
  ptr = (int*) calloc(n, sizeof(int)); //now total size 5
  ptr[0] = 12;
  ptr[1] = 13;
  printf("%d %d\n",ptr[0],ptr[1]);
  
  ptr = (int*) realloc(ptr, 10*sizeof(int)); //now total size is 10
  free(ptr);
return 0;
}