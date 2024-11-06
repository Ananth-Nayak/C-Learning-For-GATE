#include <stdio.h>

int main() {
  int num1,num2, num3, num4;
  printf("Enter the 4 number: ");
  
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
  
  //1st checking num1 is greater or not with num2

  if(num1 >= num2){    // num1 is greater than num2

    if(num1 >= num3){    // num1 is > (num2 and num3)

      if(num1 >= num4){  //num1 is >(num2,num3,num4)
        printf("%d is the greatest number among the numbers you have entered",num1);
      }
      else{
        printf("%d is the greatest number among the numbers you have entered",num4);
        //num4 is greater than num1, where num1 is already greater than all other numbers, so num4 is greatest here
      }

    }

    else{  //num3 is greater than num1, where num1 is already greater than num2 here

      if(num3 >= num4){    
        printf("%d is the greatest number among the numbers you have entered",num3);
      }
      else{
        printf("%d is the greatest number among the numbers you have entered",num4);
      }
    }
  }
  
  else{     // num2 is greater than num1
    
    if(num2 >= num3){    // num2 is > (num1 and num3)

      if(num2 >= num4){  //num2 is >(num1,num3,num4)
        printf("%d is the greatest number among the numbers you have entered",num2);
      }
      else{
        printf("%d is the greatest number among the numbers you have entered",num4);
        //num4 is greater than num2, where num1 is already greater than all other numbers, so num4 is greatest here
      }

    }

    else{  //num3 is greater than num2, where num2 is already greater than num2 here

      if(num3 >= num4){    
        printf("%d is the greatest number among the numbers you have entered",num3);
      }
      else{
        printf("%d is the greatest number among the numbers you have entered",num4);
      }
    }
  }

return 0;
}