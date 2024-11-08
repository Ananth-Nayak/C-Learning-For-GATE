#include <stdio.h>

void print_array(int *arr, int n){   //same as void print_array(int i[], int n)
  for(int i=0;i<n;i++){
    printf("Marks at index %d is %d\n",i,*arr);
    arr++;
  }
}

void print_array1(int arr[], int n){
  for(int i=0;i<n;i++){
    printf("Marks at index %d is %d\n",i,arr[i]);    //when we pass array in this way we have to access by square bracket
  }
}

int main() {
  int marks[5] = {66,78,92,87,86};
  print_array(marks,5);             //we just need to send the name(i.e we are sending only first elements address)
  print_array1(marks,5);
  // both fn give same output
return 0;
}