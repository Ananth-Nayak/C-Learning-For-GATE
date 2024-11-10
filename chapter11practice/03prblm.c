#include <stdio.h>
#include <stdlib.h>

int main() {
  int n=5;
  int *ptr;
  ptr = (int*) calloc(n, sizeof(int));
  
  for(int i=0;i<n;i++){
  scanf("%d",&ptr[i]);
  }

  ptr =  (int*) realloc(ptr,10*sizeof(int));

  for(int i=n;i<10;i++){
  scanf("%d",&ptr[i]);
  }

  for(int i=0;i<10;i++){ //from 6th element all value will be zero
  printf("%d\n",ptr[i]);
  }
return 0;
}