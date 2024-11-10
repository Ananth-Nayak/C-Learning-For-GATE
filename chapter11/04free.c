#include <stdio.h>
#include <stdlib.h>
// free() deallocates the memory, it is good practice to use and it will prevent any memory leak

int main() {
  int n = 4;
  int *ptr;
  ptr = (int*) calloc(n, sizeof(int));
  ptr[0] = 45;
  free(ptr);
  printf("%d\n",ptr[0]);
return 0;
}