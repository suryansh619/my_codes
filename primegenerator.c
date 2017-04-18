#include<stdio.h>
#include<math.h>
int main()
{ unsigned long long int t,m,n,i,j,c;
scanf("%lld",&t);
if(t>10){return 0;}
 while(t--){
scanf("%lld %lld",&m,&n);
if(m>1000000000||n>1000000000||n-m>100000){return 0;}
for(i=m;i<=n;i++){
for(j=2;sqrt(i)>=i;j++) 

    { c=0;
     if(i%j==0)
      c++;
    }
if(c==0)
printf("%lld \n",i);
}printf("\n");}
return 0;}


