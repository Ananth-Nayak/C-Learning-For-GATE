#include <stdio.h>

typedef struct c{
  int real,imaginary;
} Complex;

void display(Complex c[]){
  for(int i=0;i<5;i++){
    printf("The Complex number(%d) is %d+%di\n",i+1,c[i].real,c[i].imaginary);
  }
}

int main() {
  Complex c[5];
  for(int i=0;i<5;i++){
  printf("Enter real part of  complex number(%d): ",i+1);
  scanf("%d",&c[i].real);  
  printf("Enter Imaginary part of complex number(%d): ",i+1);
  scanf("%d",&c[i].imaginary);
  }
  display(c);  

return 0;
}