#include <stdio.h>

int main() {
  int n;
  int x = 2, y = 3, z = 3, k = 1;
  scanf("%d",&n);

  if(n%97==0)
    printf("The %d is divisible by 97\n",n);
  else
    printf("The %d is not divisble by 97\n",n);

  printf("%d",3*x/y-z+k);
  printf("%f",3.0+1);
return 0;
}