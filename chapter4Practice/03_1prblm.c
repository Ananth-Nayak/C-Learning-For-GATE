#include <stdio.h>

int main() {
  int n = 1,sum = 0;
  
  while(n<=10){
    sum+=n;
    n++;
  }

  printf("The sum of first 10 natural number is: %d",sum);

return 0;
}