#include <stdio.h>

int main() {
  int i = 10;
  int* j = &i; //here j stores address of i which means, j is pointing to i
  int** k = &j; // k is pointing to j which is then pointing to i

  printf("the address of i is %p\n",&i);
  printf("the address of i is %p\n",j);

  printf("the value of i is %d\n",*(&i)); //it will give the value of i
  printf("the value of i is %d\n", *j);   //it also give value of i since j holds i value.
  
  printf("the value of j is %u\n",j);
  printf("the k stores j value: %u\n",*k);  
  //k holds j's address, but j stores i's address if we try to access k by pointer it will give j's value
  //since j holds the address of i, we converted it to integer by %u\n

  printf("**k is equal to: %d",**k);
return 0;
}