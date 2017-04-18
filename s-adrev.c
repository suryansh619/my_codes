#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
while(t--){
int m,n,c,d,r,r1=0,r2=0,r3=0;
scanf("%d %d",&n,&m);

while(n!=0)
{
 c=n%10;
 r1=r1*10+c;
 n/=10;
}
while(m!=0)
{
 d=m%10;
 r2=r2*10+d;
 m/=10;
}
r=r1+r2;
while(r!=0)
{
 c=r%10;
 r3=r3*10+c;
 r/=10;
}
printf("%d\n",r3);}
return 0;
}
