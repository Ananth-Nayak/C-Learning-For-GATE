#include <stdio.h>

int area(int side){
  return side * side;
}

int main() {
  int a;
  printf("Enter the Square Side length: ");
  scanf("%d",&a);
  printf("The area of the square is: %d",area(a));

return 0;
}