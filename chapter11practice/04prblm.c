#include<stdio.h>
#include<stdlib.h>

int main(){
  int n = 10;
  int *ptr;
  ptr = (int*) malloc(n * sizeof(int));
  for(int i=0;i<n;i++){
    ptr[i] = 7 *(i+1);
  }
  ptr = (int*) realloc(ptr,15*sizeof(int));

  for(int i=n;i<15;i++){ //initilizing next 5 newly allocated memory
    ptr[i] = 7 *(i+1);
  }

  for(int i=0;i<15;i++){
    printf("7 X %d = %d\n",i+1,ptr[i]);
  }
  
  return 0;
}