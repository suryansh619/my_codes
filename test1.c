#include<stdio.h>
int p(int a[],int k,int n);
int main()
{
int a[100],n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
p(a,0,n);
return 0;
}
int p(int a[],int k,int n)
{
int i,g,j;
if(k>=n-1){
for(j=0;j<n;j++){
printf("%d\n",a[j]);}
return 0;}
else
{
 for(i=k;i<n;i++)
  {
   a[k]=a[k]^a[i];
   a[i]=a[k]^a[i];
   a[i]=a[k]^a[i];
     return p(a,k++,n);
  }
}     
//return 0;
                                                    
}
