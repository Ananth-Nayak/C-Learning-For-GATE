#include <stdio.h>
#include <string.h>   //to use string functions

int main() {
  char st[] = "programming";
  char source[] = "pointers";
  char target[30];
  printf("length of st[] is %d\n",strlen(st)); //strlen() will give length of string excluding null(\0) character
  
  strcpy(target,source);
  printf("target string value is now: %s\n",target);

  char st1[] = "hello!! ";
  char st2[] = "Ananth";
  strcat(st1,st2);   //s1 ow caontains hello!! Ananth
  printf("%s\n",st1);

  //strcmp compares two string, if they are equal it returns 0 or else positive/negative value
  //check interenet about strcmp to find how it returns +ve/-ve value
  printf("%d\n",strcmp(st1,st2));
return 0;
}