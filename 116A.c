#include<stdio.h>
int main()
{
 int i,max=0,sum=0,t,n;
 int a[1001],b[1001];
 scanf("%d",&n);
 if(2<=n<=1001){
 for(i=1;i<=n;i++)
{
  scanf("%d %d",&a[i-1],&b[i-1]);
    
      if(a[i-1]<=sum)
       {
         if(0<=a[i-1]<=1000&&0<=b[i-1]<=1000)
           {
             sum=sum-a[i-1]+b[i-1];
              if(sum>=max)
                {
                   max=sum;
                 }
           }
        }
    else return 0;
      if(b[n-1]!=0&&a[n-1]!=sum){return 0;}

}

  printf("%d",max);
}return 0;
}
  
