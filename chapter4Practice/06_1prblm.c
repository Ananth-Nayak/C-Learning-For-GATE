#include <stdio.h>
#include <math.h>

int main() {
  int n,i=2;
  printf("Enter the number to check prime or not?: ");
  scanf("%d",&n);
  int m = sqrt(n);
if (n==0 || n==1)
  {
    printf("%d is not a Prime Number\n",n);
    return 0;
  }
  else{
  int m = sqrt(n);
  do
  {
      if(n%i==0 && n!=2){
      printf("%d is not a Prime Number\n",n);
      return 0;
      }
      i++;
  } while (i<=m);
  }

  printf("%d is a Obviously a Prime Number\n",n);
return 0;
}