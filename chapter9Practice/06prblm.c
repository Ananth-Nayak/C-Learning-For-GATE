#include <stdio.h>

typedef struct date{
  int dd;
  int mm;
  int yyyy;
} Date;

int compare(Date c1, Date c2){
  if((c1.yyyy == c2.yyyy) && (c1.mm == c2.mm) && (c1.dd == c2.dd)){
    return 0;
  }
  else if(c1.yyyy > c2.yyyy){
    return 1;
  }
  else if(c2.yyyy > c1.yyyy){
    return -1;
  }
  else if(c1.mm > c2.mm){
    return 1;
  }
    else if(c2.mm > c1.mm){
    return -1;
  }
    else if(c1.dd > c2.dd){
    return 1;
  }
    else if(c2.dd > c1.dd){
    return -1;
  }
}

int main() {
  Date d1 = {12,6,2004};
  Date d2 = {5,8,2004};
  printf("%d\n",compare(d1,d2));
return 0;
}