#include <stdio.h>

int main() {
  int i=5;
  printf("The value of i is %d\n",i); //output is 5
  
  i=i+5;
  printf("The value of i is %d\n",i); // output is 10
  
  printf("The value of i is %d\n",i++); //output still 10
  printf("The value of i is %d\n",++i); // output in now 12

// i++, first prints i (previous i value) then gets updated by 1. (post increment)
// ++i, first updates i value, then it prints i. (pre increment)

return 0;
}