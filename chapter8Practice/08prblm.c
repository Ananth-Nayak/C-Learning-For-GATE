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
  char str[]="Ifz""!J!bn!hpoob!dsbdl!HBUF!fybn/";
  char c = 't';
  int strlength = strlen(str);
  for(int i=0;i<strlength;i++){
    if(c == str[i]){
      printf("Character %c is present in the string\n",c);
      return 0;
    }
  }
  printf("Character %c is not found in the string\n",c);
return 0;
}