#include <stdio.h>
float avg(int a[],int);
int main()
{
int n,i;
scanf("%d",&n);
int a[n];
float aveg;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
aveg=avg(a,n);
printf("Average= %f",aveg);
return 0;
}

float avg(int a[],int n)
{
int i,s=0;
int *p;
p=a;
for(i=0;i<n;i++)
{
s=s+p[i];
}
return (s/n);
}
