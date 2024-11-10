#include <stdio.h>
#include <stdlib.h>

int main() {
  int n=5;
  float *ptr;
  ptr = (float*) malloc(n * sizeof(float));
  ptr[0]=21.56;
  ptr[1]=74.780;
  ptr[2]=36.591;
  ptr[3]=61.82;
  ptr[4]=91;

  printf("%.2f %.2f %.2f %.2f %.2f",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4]);

return 0;
}