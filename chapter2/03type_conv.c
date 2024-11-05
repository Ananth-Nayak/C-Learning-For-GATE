#include <stdio.h>

int main() {
  int a = 3.66;  // it will only store integer part of number which is 3.
  float b = 9/2;
  float c = 9, d = c/2;  
  /* ans will be 4.000000 bcz when we give both operands in integer it will
     always give result in integer, later it converted to float. */

  printf("%d\n",a);
  printf("%f\n",b);
  printf("%f\n",c);
  printf("%f\n",d);
return 0;
}