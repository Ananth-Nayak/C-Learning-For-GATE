#include <stdio.h>
// fgetc() returns EOF(End of File) when all the characters of a file have been read.
int main() {
  char ch;
  FILE *fptr;
  fptr = fopen("num.txt","r");
  while(1){
    ch = fgetc(fptr);
    printf("%c",ch);
    if(ch == EOF){
      break;
    }
  }

return 0;
}