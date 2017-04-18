#include<stdio.h>
int binary(int a[100],int start,int end,int c);
int main()
{
 int a[100],n,i,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
 {
  if(a[j]<a[i])
  {
   a[i]=a[i]^a[j];
   a[j]=a[i]^a[j];
   a[i]=a[i]^a[j];
  }
 }
}
int c;
scanf("%d",&c);
printf("%d",binary(a,0,n-1,c));
return 0;
}
int binary(int a[100],int start,int end,int c)
{
if(a[end]<c||c<a[start]||start+1==end)
return-1;
int mid;
mid=(start+end)/2;
if(c==a[mid])
return mid;
else if(c>a[mid])
return binary(a,mid,end,c);
else
return binary(a,start,mid,c);
}
