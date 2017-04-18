#include<stdio.h>
int swap(int a,int b);
int main()
{
int a=3,b=4;
swap(&a,&b);
printf("%d %d",a,b);
return 0;
}
int swap(int *a,int *b)
{int c;
 c=*a;
 *a=*b;
 *b=c;
 return 0;
}
