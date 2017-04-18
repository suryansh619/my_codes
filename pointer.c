#include<stdio.h>
int main()
 {
  int a=1033;
  int* p;
  p=&a;
  printf("the address of a is %d\n",p);
  printf("the value of a is %d\n",*p);
  char *p0;
  p0=p;
  printf("the address of a is %d\n",p0);
  printf("the value of a is %d\n",*p0);

 return 0;
}
