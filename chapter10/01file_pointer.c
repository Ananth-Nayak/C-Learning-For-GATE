#include <stdio.h>

int main() {
  FILE *ptr;   // ptr is pointing to a file
  ptr = fopen("num.txt","r");  //num.txt should be in same directory, and r means read mode
  if(ptr == NULL){
    printf("Sorry!!..The file does not exist\n");
  }
  else {
  int num;
  fscanf(ptr,"%d",&num);   
  //fscanf used to get data frm file, here it get the first integer in num.txt and assigns to num variable
  printf("The value of num is: %d\n",num);

  fscanf(ptr,"%d",&num); //here it takes second integer as last time the cursor of file is moved
  printf("The value of num is: %d\n",num); 
  fclose(ptr);
  }
return 0;
}