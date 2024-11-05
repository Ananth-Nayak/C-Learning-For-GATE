#include <stdio.h>

int main() {
  int income, taxpaid;
  printf("Enter the income of the Employee: ");
  scanf("%d",&income);

  if(income <= 250000){
    taxpaid = 0;
  }
  else if(income > 250000 && income <= 500000){
    taxpaid = 0.05 * income;
  }
  else if(income > 500000 && income <= 1000000){
    taxpaid = 0.2 * income;
  }
  else{
    taxpaid = 0.3 * income;
  }
  printf("The Income Tax paid by the employee is: %d\n",taxpaid);
return 0;
}