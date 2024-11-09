#include <stdio.h>

struct employee{
  int code;
  float salary;
  char name[10];
};

int main() {
  struct employee facebook[100];  //array of employee structure whose name facebook,can contain 100 employee data

  facebook[0].code=3001;
  facebook[1].code=3005;
return 0;
}