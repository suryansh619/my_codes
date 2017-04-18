#include<stdio.h>
int main()
{ int p,q,k,x,s,sum,i;
 scanf("%d %d",&p,&q);
 if(p<q){return 0;}
 for(i=q+1;i<=p;i++)
 {
  k=i/q;
  x=i%q;
  s=k/x;
  if(i%q!=0&&1<=k<=p)
   sum=sum+i;
  }
k=sum%1000000007;
 printf("%d",k);
 return 0;
}
