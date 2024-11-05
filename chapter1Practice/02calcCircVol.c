#include <stdio.h>


int main() {
  float radius,height, pi=3.14;

  printf("Enter radius: ");
  scanf("%f",&radius);
  printf("\n");

  printf("Enter height: ");
  scanf("%f", &height);
  printf("\n");

  printf("Area of circle: %f",pi*radius*radius);

  float volume = pi * radius * radius * height;
  printf("Area of cylinder: %f", volume);

return 0;
}