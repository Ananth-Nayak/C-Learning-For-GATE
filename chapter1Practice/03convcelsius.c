#include <stdio.h>


int main() {
  float degree,farhenheit;

  printf("enter the celsius degree:\n");
  scanf("%f",&degree);
  farhenheit = (1.8 * degree) + 32;

  printf("The Celsius Degree %f is equal to %f fahrenheit.",degree,farhenheit);

return 0;
}