#include<stdio.h>
int main()
{ 
    int x,y,c,n,min,max,c1,i,j,j1;
    int a[100000];
     scanf("%d",&n);
     if(n>100000)
      return 0;
     if(n==2)
      {printf("1");return 0;}
      a[0]=0;
     for(i=1;i<=n;i++)
      { 
          scanf("%d  %d",&x,&y);
          if(x>500||y>500)
           return 0;
          a[i]=x-y;            
          if(a[i]>=0)
           c++;
          if(a[i]<=0)
           c1++;
          if(a[i]<a[i-1])
           min=a[i];            
          j=i;
          if(a[i]>a[i-1])
           max=a[i];            
          j1=i;
      }
      if(c==n||c1==n)
       {
        printf("0");
        return 0;
       }
     else
      {
       if(j>j1)      
        printf("%d",j);
       else
        printf("%d",j1);
      }
    return 0;
}

