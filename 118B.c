#include<stdio.h>
int main()
{ 
 int n,i,j;
 scanf("%d",&n);

 for(i=0;i<=n;i++)
 {
  for(j=i+1;j<=n;j++)
   {
    printf("  ");
   }
  for(j=0;j<=(2*i);j++)
   {
    if(j<=i&&i!=0)
    printf("%d ",j);
    else if(j!=2*i&&j>i)
    printf("%d ",2*i-j);
    else
    printf("%d",2*i-j);
   }
  printf("\n");
  }

 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
   {
    printf("  ");
   }
  for(j=0;j<=2*(n-i);j++)
   {
    if(j<=n-i&&i!=n)
    printf("%d ",j);
    else if(j!=2*(n-i)&&j>n-i)
    printf("%d ",2*(n-i)-j);
    else
    printf("%d",2*(n-i)-j);
   }
  printf("\n");
  }
return 0;
}
