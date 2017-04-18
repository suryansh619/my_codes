#include<stdio.h>
int a[10000];
int main()
{
 int n,l;
 scanf("%d",&n);
 l=fab(n);
 printf("%d",l);
}

int fab(int n)
{
 if(n==1)
  return 1;
 if(n==2)
  return 2;
 if(a[n]!=0)
  return a[n];
 return a[n]=fab(n-1)+fab(n-2);

}
