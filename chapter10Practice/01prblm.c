#include <stdio.h>

int main() {
  int num1,num2,num3;
  FILE *ptr;
  ptr = fopen("file1.txt","r");
  fscanf(ptr,"%d %d %d",&num1,&num2,&num3);

  printf("num1 is: %d, num2 is: %d, num3 is: %d\n",num1,num2,num3);
  fclose(ptr);
return 0;
}