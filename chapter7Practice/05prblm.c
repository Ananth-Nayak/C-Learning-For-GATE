#include <stdio.h>

int main() {
  int num1,num2,num3;
  printf("Enter 3 numbers: ");
  scanf("%d %d %d",&num1,&num2,&num3);
  int arr[10][3];

  for(int i=0;i<10;i++){
    for(int j=0;j<3;j++){
      if(j==0){
        arr[i][j] = num1*(i+1);
      }
      else if(j==1){
        arr[i][j] = num2*(i+1);
      }
      else{
        arr[i][j] = num3*(i+1);
      }
    }
  }

  for(int i=0;i<10;i++){
    for(int j=0;j<3;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }

return 0;
}