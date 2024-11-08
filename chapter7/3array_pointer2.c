#include <stdio.h>

int main() {
//since memory allocated to array elements are contigious, we can access array element using pointer by address of first element
  int marks[] = {12, 34, 53, 66};

  int* ptr = marks;  // same as &marks[0]
  //if we mention just the name of array, it will send its first elements address

  for(int i=0;i<4;i++){
    printf("The Marks at index %d is %d\n",i,*ptr);
    ptr++;
  }

return 0;
}