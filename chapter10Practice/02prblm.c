#include <stdio.h>

int main() {
  int n;
  FILE *fptr;
  printf("Eneter n: ");
  scanf("%d",&n);
  fptr = fopen("file2.txt","w");
  for(int i=1;i<11;i++){
    fprintf(fptr,"%d\n",n*i);
  }
fclose(fptr);
return 0;
}