#include <stdio.h>
#include <math.h>
int main() {
  int n;
  printf("Enter the number to check prime or not?: ");
  scanf("%d",&n);

  if (n==0 || n==1)
  {
    printf("%d is not a Prime Number\n",n);
    return 0;
  }
  else{
  int m = sqrt(n);
  for(int i=2;i<=m;i++){
    if(n%i==0 && n!=2){
      printf("%d is not a Prime Number\n",n);
      return 0;
    }
  }
  }
  printf("%d is a Obviously a Prime Number\n",n);
return 0;
}