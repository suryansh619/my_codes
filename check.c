#include<stdio.h>
#include<string.h>
int main()
{ int a1,b1,max,min,i=0,j=0,k,p=0,q=0,s;
 char a[100],b[100],c[1000];
 scanf("%s",a);
 scanf("%S",b);
 a1=strlen(a);
 b1=strlen(b);
 max=(a1>b1)?a1:b1;
 min=(a1>b1)?b1:a1;
 k=0;
 for(p=a1-1,q=b1-1;(p>=0&&q>=0);p--,q--)
 {
  c[k]=c[k]+(a[p]-48)+(b[q]-48);
  if(c[k]>9)
  {
   s=c[k];
   c[k]=c[k]%10;
   c[k+1]=s/10;
  }
 }
for(s=p-1;s>=0;s--)
{ 
 c[k]=c[k]+a[s]-48;
 if(c[k]>9)
  {
   s=c[k];
   c[k]=c[k]%10;
   c[k+1]=s/10;
  }
}
for(s=q-1;s>=0;s--)
{ 
 c[k]=c[k]+b[s]-48;
 if(c[k]>9)
  {
   s=c[k];
   c[k]=c[k]%10;
   c[k+1]=s/10;
  }
}
for(i=k;i>=0;i--)
 printf("%c",c[k]+48);
return 0;
}
