#include<stdio.h>
#include<math.h>
int main()
{
 int n,dollar=0,i=1,e=0;
 int h[100000];
 h[0]=0; 
scanf("%d",&n);
 if(n>100000)
  {return 0;} 
 for(i=1;i<=n;i++)
  { 
   scanf("%d",&h[i]);
  }
 for(i=1;i<n+1;i++)
  {
   e=e-h[i]+h[i-1];
   while(e<0)
    { e++;
      dollar++;}
  }
 printf("%d",dollar);
return 0;
}
