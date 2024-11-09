#include <stdio.h>
int strlen(char str[]){
  int i=0;
  char c = str[0];
  while(c!='\0'){
    i++;
    c = str[i];
  }
  return i;
}

int main() {
  char str[] ="Hey!! I am gonna crack GATE exam.";
  int length = strlen(str);
  for(int i=0;i<length;i++){
    str[i] = str[i] + 1;
  }

  printf("Encrypted message: %s\nTo decrypt this message go to next problem\n",str);

return 0;
}