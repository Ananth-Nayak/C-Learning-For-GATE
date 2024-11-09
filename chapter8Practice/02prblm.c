#include <stdio.h>

int strlen(char str[]){
  int i=0;
  char c = str[i];
  while(c!='\0'){
    i++;
    c = str[i];
  }
  return i;
}

int main() {
  char st[]="Ananth";
  
  printf("string length is %d\n",strlen(st));
return 0;
}