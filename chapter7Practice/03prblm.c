#include <stdio.h>

void reverse(int a[], int n){
  for(int i=0;i<=n/2;i++){
    int temp = a[i];
    a[i] = a[n-i-1];
    a[n-i-1] = temp;
  }
}

void printarray(int a[],int n){
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}

int main() {
  int arr[5]={1,2,3,4,5};
  printarray(arr,5);
  reverse(arr,5);
  printarray(arr,5);
return 0;
}