#include <stdio.h>
struct employee{
  int code;
  float salary;
  char name[10];
};

void show(struct employee e){
  printf("%d\n",e.code);
  printf("%.2f\n",e.salary);
  printf("%s\n",e.name);
}

int main() {
  struct employee e1 = {1021,150000,"Ananth"};
  show(e1);
return 0;
}