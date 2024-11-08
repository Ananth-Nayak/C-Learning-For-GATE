#include <stdio.h>

int sum_of_n(int n){
  if(n==1){
    return 1;
  }
  return n + sum_of_n(n-1);
}

int main() {
  int n,sum;
  printf("Enter n: ");
  scanf("%d",&n);
  sum = sum_of_n(n);
  printf("The Sum Of  First %d natural number is: %d",n,sum);
return 0;
}