#include <stdio.h>

int pos_count(int a[], int n){
  int no_of_positive=0;
  for(int i =0; i<n;i++){
    if(a[i]>0){
      no_of_positive++;
    }
  }
  return no_of_positive;
}

int main() {
  int arr[10]={7,-8,-2,4,6,-45,71,91,-21,0};

  printf("Total positive in the array is %d\n",pos_count(arr,10));
return 0;
}