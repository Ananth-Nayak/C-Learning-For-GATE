#include <stdio.h>

int main() {
  // a pointer can be incremented to point to the next memory location of that type

  int i = 17;
  int *a = &i;
  printf("int adress before increment: %p\n",a);  // ex:- a = 0061FF14
  a++;
  printf("int ptr value after increment: %p\n",a);  // a = 0061FF18


  char c = 'A';
  char *b = &c;
  printf("char adress before increment: %p\n",b); // b = 0061FF13
  b++;
  printf("char ptr value after increment: %p\n",b); // b = 0061FF14

// int need 4 bytes, char need 1 bytes
// similarly for other variables

return 0;
}