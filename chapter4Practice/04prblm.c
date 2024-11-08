#include <stdio.h>

int main() {
  int sum=0,i=1;

  while(i<=10){
    sum += (8 * i);
    i++;
  }
  printf("The Sum of result of 8 multiplication table is: %d",sum);
return 0;
}