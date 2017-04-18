#include<stdio.h>
int comb(int a[100],int k[100],int n,int i,int l);
int main()
{
 int a[100],k[100],n,i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
i=0;
int l=0;
 comb(a,k,n,i,l);
return 0;
}
int comb(int a[100],int k[100],int n,int i,int l)
{
 if(l>n)
 {
int p;
  for(p=0;p<i;p++)
   printf("%d",k[i]);
 return 0;
}
comb(a,k,n,i,l++);
k[i]=a[l];
comb(a,k,n,i++,l++);
return 0;
}
