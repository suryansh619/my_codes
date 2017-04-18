#include <stdio.h>
int minmax(int a[],int n,int *min,int *max);
int main()
{
int i,n;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int min=a[0];
int max=a[0];
minmax(a,n,&min,&max);
printf("min=%d \n max=%d",min,max);
return 0;
}
int minmax(int a[],int n,int *min,int *max)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]<(*min)) *min=a[i];
if(a[i]>(*max)) *max=a[i];
}
return 0;
}
