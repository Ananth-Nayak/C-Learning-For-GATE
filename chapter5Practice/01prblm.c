#include <stdio.h>

float avg(int n1,int n2,int n3){
  return (n1 + n2 + n3)/3.0;
}

int main() {
  int num1,num2,num3;
  printf("Enter The 3 Numbers: ");
  scanf("%d %d %d",&num1, &num2, &num3);
  printf("The Average of %d, %d, %d is: %f", num1, num2, num3, avg(num1,num2,num3));
return 0;
}