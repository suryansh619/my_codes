#include<stdio.h>
int main(){
 int a[100][100]={0};
 int c,i,j;
printf("no of rows\n");
 scanf("%d",&c);
 for(i=0;i<c;i++)
{
a[i][c-i-1]=1;
   a[i][c+i-1]=1;
 for(j=0;j<=c+i-1;j++)
  {
   if(c-i-1<j<c+i-1)
   {
    if(c%2==0){ 
    if(i%2==0&&i!=0&&j%2!=0)
     a[i][j]=a[i-1][j-1]+a[i-1][j+1];
    if(i%2!=0&&j%2==0)
     a[i][j]=a[i-1][j-1]+a[i-1][j+1];
   }
else
{
if(i%2==0&&i!=0&&j%2==0)
     a[i][j]=a[i-1][j-1]+a[i-1][j+1];
    if(i%2!=0&&j%2!=0)
     a[i][j]=a[i-1][j-1]+a[i-1][j+1];
}
}
  }
}
for(i=0;i<c;i++)
{
 for(j=0;j<=c+i-1;j++)
  {
   if(a[i][j]==0)
    printf(" ");
   else
    printf("%d",a[i][j]);
  }
printf("\n");
}
return 0;
}
