#include <stdio.h>

int main() {
  char ch;
  FILE *ptr;
  FILE *ptr2;

  ptr = fopen("file3.txt","r");
  ptr2 = fopen("file4.txt","w");

  while(1){
    ch = fgetc(ptr);
    if(ch==EOF){
      break;
    }
    fprintf(ptr2,"%c",ch);
    fprintf(ptr2,"%c",ch);
    printf("%c",ch);

  }
fclose(ptr);
fclose(ptr2);
return 0;
}