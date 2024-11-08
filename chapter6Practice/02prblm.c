#include <stdio.h>

void address_print(int* i){
  printf("Value of I in function call: %d\n",*i);
  printf("Adress of I in function call: %p\n",i);
}

int main() {
  int i = 2001;
  printf("Value of i: %d\n",&i);
  printf("Adress of i: %p\n",&i);
  address_print(&i);
return 0;
}
