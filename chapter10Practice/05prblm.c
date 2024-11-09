#include <stdio.h>

int main() {
  FILE *ptr;
  int num;
  ptr = fopen("file6.txt","r");
  fscanf(ptr,"%d",&num);
  fclose(ptr);
  num*=2;
  
  ptr = fopen("file6.txt","w");
  fprintf(ptr,"%d",num);
  fclose(ptr);

return 0;
}