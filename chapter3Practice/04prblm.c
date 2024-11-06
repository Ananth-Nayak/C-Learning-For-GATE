#include <stdio.h>

int main() {
  char ch;
  printf("Enter a Character: ");
  scanf("%c",&ch);

  if(ch >= 65 && ch <= 90){
    printf("You Entered the Uppercase Character\n");
  }
  else if(ch >= 97 && ch <= 122){
    printf("You Entered the Lowercase Charachter\n");
  }
  else{
    printf("You entered different character which is not alphabet\n");
  }

return 0;
}