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

void strcopy(char target[], char source[]){
  int length = strlen(source);
  for(int i=0;i<length;i++){
    target[i] = source[i];
  }
  target[length] = '\0';
}

int main() {
  char str[] ="Good Luck!";
  char target[50];

  strcopy(target,str);
  printf("source str: %s\nTarget str: %s\n",str,target);

return 0;
}