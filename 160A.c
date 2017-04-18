#include<stdio.h>
int swap(int a,int b);
int main()
{ 
 int n,i,a[1000],sum=0,total=0,c=0,j=0,t;
 scanf("%d",&n);
if(n>100){return 0;}
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  if(a[i]>100){return 0;}
  total=total+a[i];
 }
 for(i=0;i<n;i++)
 { 
  for(j=i+1;j<n;j++){
  if(a[i]>a[j])
   { 
    t=a[i];
    a[i]=a[j];
    a[j]=t;
   }
   }
 }
 for(i=n-1;i>=0;i--)
 {
  if(sum>total-sum)
   {
    break;
   }
  else
   {sum=sum+a[i];
  c++;}
 }
printf("%d",c);
return 0;
} 

