#include <stdio.h>

int fibonacci(int n){
  if(n==0 || n==1){
    return n;
  }
  return (fibonacci(n-1) + fibonacci(n-2));
}

int main() {
  int n,result;
  printf("Eneter the n: ");
  scanf("%d",&n);
  result = fibonacci(n);
  printf("The %dth term in Fibonacci Series is: %d",n,result);
return 0;
}