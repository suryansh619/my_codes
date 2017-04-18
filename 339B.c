#include<stdio.h>
int main()
{
  long long int n,m,i,a[100000],time;
 scanf("%d %d",&n,&m);
 if(n==1||n>100000||m>100000){return 0;}
 for(i=1;i<=m;i++)
  { 
   scanf("%d",&a[i-1]);
   if(a[i]>n){return 0;}
  }
time=a[0]-1;
 for(i=1;i<m;i++)
  {
   if(a[i-1]<=a[i])
    {
     time=time+a[i]-a[i-1];
    }
   else
    {  
     time=time+n-a[i-1]+a[i];
    }
  }
printf("%lld",time);
return 0;
}
