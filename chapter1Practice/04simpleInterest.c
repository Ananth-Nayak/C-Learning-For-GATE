#include <stdio.h>


int main() {
  int amount = 100000, time = 7, rate = 8,simpleInterest;
  simpleInterest = (amount*time*rate)/100;
  printf("The simple interest is: %d", simpleInterest);

return 0;
}