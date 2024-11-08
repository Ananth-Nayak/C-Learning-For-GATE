#include <stdio.h>

int main() {
  int marks[5];
  float cgpa[5] = {8,7.9,8.8,9.3,9.6};  //direct initilisation
  printf("Enter marks of 5 students: ");
  for(int i=0;i<5;i++){
    scanf("%d",&marks[i]);
  }

  for(int i =0;i<5;i++){
    printf("The value at index %d is %d\n",i,marks[i]);
  }

return 0;
}