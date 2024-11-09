#include <stdio.h>

struct c{
  int real;
  int imaginary;
};

int main() {
  typedef struct c complex;
  complex c1 ={4,7};
  printf("The complex number is %d+%di\n",c1.real,c1.imaginary);

return 0;
}