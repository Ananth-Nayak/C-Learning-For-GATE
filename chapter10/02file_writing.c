#include <stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("num.txt","w");
  int num = 77;
  fprintf(fptr,"%d",num);
  fclose(fptr);
  // write mode deletes all the contents before writing anything into it.
  // we can use 'a' append mode for that
return 0;
}