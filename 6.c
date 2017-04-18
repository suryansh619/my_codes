#include <stdio.h>
#include <math.h>
 
long btd(long n);
int main() {long int t;
scanf("%ld",&t);while(t--){
    long b,i,j,x,e,k=0,r=0;
    scanf("%ld", &b);
     x=btd(b);
printf("%ld",x);
 for(i=1;i<32;i++)
  {k=0;
   for(j=2;j*j<i;j++)
    {
     if(i%j==0)
     k++;
    }
 e=pow(10,i+1);
   if(k==0&&x%e!=1)
   r++;
   else if(k!=0&&x%e!=0)
   r++;
   
}
if(r>0)
printf("No\n");
else
printf("yes\n");}
    return 0;
}
 
long btd(long n) {
 int r; 
    long d = 0, i=0;
    while(n != 0) {
        r = n%10;
        n = n/10;
        d = d + (r*pow(2,i));
        ++i;
    }
    return d;
}
