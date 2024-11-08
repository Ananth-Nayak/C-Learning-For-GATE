#include <stdio.h>

int main() {
  int year;
  printf("Enter the year, to check the leap year or not: ");
  scanf("%d",&year);

  if((year % 4 == 0 && year % 100!=0) || year % 400 == 0 ){
    printf("Year %d is a Leap Year!!..",year);
  }
  else{
    printf("Year %d is not a Leap Year (::)...",year);    
  }

return 0;
}