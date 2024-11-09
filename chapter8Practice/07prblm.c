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

int char_occur(char str[],char c){
  int strlength = strlen(str), count = 0;
  
  for(int i=0;i<strlength;i++){
    if(str[i] == c){
      count++;
    }
  }
  return count;
}

int main() {
  char str[]="When the going gets tough, the tough gets going";
  char find_ch = 'e';
  printf("The number of occurances '%c' in the given string is %d\n",find_ch,char_occur(str,find_ch));

return 0;
}