#include <stdio.h>

int main() {
  char *ptr = "Ananth";
  // this tells compiler to store "Ananth" string in memory
  // and the assigned addrees of string will store inside ptr
  //using st[], string cannot be reinitilized
  // but using pointer we can do that

  printf("%c\n",*ptr);  // ptr has address of first character of string
  puts(ptr);
  printf("%p\n",ptr);

  ptr = "Nayak";

  printf("%c\n",*ptr);
  puts(ptr);
  printf("%p\n",ptr); 

return 0;
}