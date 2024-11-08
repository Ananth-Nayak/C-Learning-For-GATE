#include <stdio.h>

int* sum(int x, int y){
  int sum = x + y;
  int* ptr1 = &sum;
  printf("The sum of %d and %d is: %d\n", x, y, sum);
  // return &sum;
  // we cannot return address of a local variable directly as it will be destroyed before returning
  // so we store address inside local variable and return it
  return ptr1;
}

float* avg(int x, int y){
  float avg = (x+y)/2.0;
  float* ptr2 = &avg;
  printf("The average of %d is and %d is: %.2f\n", x, y, avg);
  // return &avg; 
  // we cannot return address of a local variable directly as it will be destroyed before returning
  // so we store address inside local variable and return it
  return ptr2;
}

int main() {
  int x,y;
  printf("Enter 2 numbers to check sum & avg: ");
  scanf("%d %d",&x,&y);
  int* sum_ptr = sum(x,y);
  float* avg_ptr = avg(x,y);

  printf("The sum address is %u and The avg address is %u\n",sum_ptr,avg_ptr);

return 0;
}