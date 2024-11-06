// this is same as 5th problem trying to minimize the code 

#include <stdio.h>

int main() {
  int num1,num2, num3, num4;
  printf("Enter the 4 number: ");
  
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
  

  if(num1 >= num2){    
    if(num1 >= num3){    
      if(num1 >= num4){  
        printf("%d is the greatest number among the numbers you have entered",num1);
      }
      else{
        printf("%d is the greatest number among the numbers you have entered",num4);
      }
      return 0;
    }
  }
  else{      
    if(num2 >= num3){    
      if(num2 >= num4){  
        printf("%d is the greatest number among the numbers you have entered",num2);
      }
      else{
        printf("%d is the greatest number among the numbers you have entered",num4);
      }
      return 0;
    }

  }


  if(num3 >= num4){    
    printf("%d is the greatest number among the numbers you have entered",num3);
  }
  else{
    printf("%d is the greatest number among the numbers you have entered",num4);
  }

return 0;
}