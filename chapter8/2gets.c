#include <stdio.h>

int main() {
  //scanf cannot be used to input multi-word strings with spaces
  // so we use gets and puts
  char st[30];
  gets(st); //to get the string
  puts(st);  //to print the string
  printf("%s",st);
  printf("hey");
//printf does not put the cusror into next line, we have to tell explicitly("\n")
// where as puts() fn will print anything after it will print on the next line
return 0;
}

// since bufferflow problems now we do not use gets(), instead we use fgets.