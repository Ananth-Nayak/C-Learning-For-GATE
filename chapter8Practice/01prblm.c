#include <stdio.h>
#include <string.h>

int main() {
  // char st1[7];
  char st2[7];
  // scanf("%s",st1);
  printf("Eneter st2:\n");
  for(int i=0;i<6;i++){
    scanf("%c",&st2[i]);
    fflush(stdin); //to do not take enter as a character
  }
  st2[6]='\0';
  // printf("st1 is %s\n",st1);
  printf("st2 is %s", st2);
return 0;
}