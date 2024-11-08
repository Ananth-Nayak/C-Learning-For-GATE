#include <stdio.h>

int main() {
  int n,fact = 1,i=2;
    printf("Enter the number to check factorial: ");
    scanf("%d",&n);
  while(i<=n){
    fact*=i;
    i++;
  }
  printf("The factorial of %d is: %d",n,fact);
return 0;
}