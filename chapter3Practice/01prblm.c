#include <stdio.h>

int main() {
  int sub1,sub2,sub3;
  printf("Enter the marks 3 subjects: ");
  scanf("%d %d %d", &sub1, &sub2, &sub3);

  int total_percentage = (sub1 + sub2 + sub3)/3;

  if(total_percentage >= 40){
    if(sub1 >= 33 && sub2 >= 33 && sub3 >= 33){
      printf("Congratulations>>>>....The Student has Passed!!!\n");
      return 0;
    }
  }
  printf("Ohh No!!!....The Student has Failed!\n");
return 0;
}