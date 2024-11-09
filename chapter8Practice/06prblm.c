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
  char str[] ="Ifz""!J!bn!hpoob!dsbdl!HBUF!fybn/";
  int length = strlen(str);
  for(int i=0;i<length;i++){
    str[i] = str[i] - 1;
  }

  printf("decrypted message: %s\n",str);

return 0;
}