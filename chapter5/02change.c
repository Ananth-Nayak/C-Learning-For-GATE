#include <stdio.h>
int change(int b){     //here change fn got the value from main fn, not the real variable. which means even if we change the value that we gor it will not change the original value. 
    b *=1024;
    printf("changed value is %d\n",b);
}

int main() {
  int b = 21;

  change(b);  //we are not sending the original b variable, instead we are sending the value of b variable.  

  printf("the main fn variable value: %d",b);

//original value of a variable will remain the same.
// even if we change the value in called fn
// we only pass the value, not the variable
return 0;
}