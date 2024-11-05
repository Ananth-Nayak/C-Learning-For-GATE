#include <stdio.h>

int main() {
  int n;
  printf("From which natural number should we start: ");
  scanf("%d",&n);
  printf("Natural number in reverse order: ");
  for(int i=n; i ; i--){ // condition i means, till i becomes zero
    printf("%d\t",i);
  }

return 0;
}