#include <stdio.h>

int main() {
  int a = 5,b=-2;
  int c = -5,d=2;
  printf("%d modulus %d is %d\n",a,b,a%b);
  printf("%d modulus %d is %d\n",c,d,c%d);
  printf("%d modulus %d is %d\n",a,d,a%d);
  printf("%d modulus %d is %d\n",c,b,c%b);

return 0;
}