#include <stdio.h>

char* slice(char str[],int strt, int end){
  char *ptr1 = &str[strt];      //to ptr1 we gave strting address
  char *ptr2 = &str[end];

  str = ptr1;    
  //str(char array name) means, starting address of string, therefor we assign it to starting point of slicing address
                      // now str(or str[0]) starting position at ptr1 address
  str[end] = '\0';   //from new str[0], it will calculate the end index
  // this slice operation is done by starting position and no.of character

  //if we want to slice by index in both strting and ending index of original string
  // we use ptr2 as it holds original string's address value
  // we replace str[end] ='\0' with *ptr2 = '\0'; in above
  return str;
}

int main() {
  char str[] = "Ananthanayak";

  printf("%s",slice(str,2,5));  //2 is the strting index 5 is the no.of characters, output should be nanth

return 0;
}