#include <stdio.h>

int main() {
  FILE *ptr;
  // ptr = fopen("num.txt","r");
  // ptr = fopen("num.txt","w");
  ptr = fopen("num.txt","a");
  // char c = fgetc(ptr); //reads a first letter from file
  // printf("%c\n",c);
  fputc('8',ptr);
return 0;
}