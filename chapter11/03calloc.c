#include <stdio.h>
#include <stdlib.h>
//calloc stands for continuous allocation
// it initilize each block with default value 0
int main() {
  int n;
  scanf("%d",&n);
  int *ptr;
  ptr = (int*) calloc(n, sizeof(int));
  printf("%d\n",ptr[0]); //it assigned zero
  ptr[0] = 12;
  ptr[1] = 13;
  printf("%d %d\n",ptr[0],ptr[1]);

return 0;
}