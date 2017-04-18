#include<stdio.h>
int main ()
 {int t;
  scanf("%d",&t);
  while(t--){
  int n,l;
  scanf("%d",&n);
  l=fact(n);
  printf("%d\n",l);
  }
 }
int fact(int n)
{
 if(n>=1)
 return n*fact(n-1);
 else 
 return 1; 
}
