#include <stdio.h>

int main() {
  int arr[2][3];

  printf("Enter The 2-D array elements:\n");
  for(int i = 0; i<2; i++){
    for(int j= 0; j<3; j++){
      printf("Enter the value of arr[%d][%d]: ", i,j);
      scanf("%d",&arr[i][j]);
    }
  }

  for(int i = 0; i<2; i++){
    for(int j= 0; j<3; j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
return 0;
}