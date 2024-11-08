#include <stdio.h>
#include <math.h>
int main() {
  int n;
  printf("Enter the number to check prime or not?: ");
  scanf("%d",&n);
  int m = sqrt(n);
  for(int i=2;i<=m;i++){
    if(n%i==0){
      printf("%d is not a Prime Number\n",n);
      return 0;
    }
  }
  printf("%d is a Obviously a Prime Number\n",n);
return 0;
}