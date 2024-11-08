#include <stdio.h>

int main() {
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  int *ptr = arr;
  printf("3rd Element using index: %d\n",arr[2]);
  printf("3rd Element using pointer: %d\n",*(ptr+2));

return 0;
}