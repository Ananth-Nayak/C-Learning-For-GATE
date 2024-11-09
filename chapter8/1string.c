#include <stdio.h>

int main() {
  // char ch[] = {'a','b','c','\0'};
  char st[] = "abc";   // same as above
  for(int i=0; i<3;i++){
    printf("%c",st[i]);
  }

  printf("%s\n",st);  // same outpu as above "abc"
  //st is address of first element
return 0;
}