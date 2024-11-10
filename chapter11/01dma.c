#include <stdio.h>
#include <stdlib.h>
//malloc means memory allocation

int main() {
  int n;
  int *ptr;
  scanf("%d",&n);
  // int arr[n];  //not allowed in c (but is allowed in some recent version of c)
  ptr = (int*) malloc(n * sizeof(int));
  // sizeof(int) -> bytes that int takes
  //malloc returns null pointer so we typecasted it to int pointer (int*)
  // if n=4, ptr can store 4 elements, we can use it as normal array
  ptr[0]=25;
  ptr[1]=100;
  ptr[5]=23; //this line does not work in if we declared like this arr[n], if n=4,but it works in malloc.
  printf("%d %d %d\n",ptr[0],ptr[1],ptr[5]);
return 0;
}