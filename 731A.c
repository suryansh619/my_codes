#include<stdio.h>
#include<string.h>
int main()
 {
  int a,l,t,i,sum=0,f[26];
  char s[100];
  scanf("%s",s);
  l=strlen(s);
  a=s[0];
   for(i=0;i<l;i++)
   {
    a=s[i];
    f[i]=a+1-'a';
   }	
 if(l==1)
  { 
    if(f[0]<=14)
     printf("%d",f[0]-1);
    if(f[0]>14)
     printf("%d",27-f[0]);
    return 0;  
  }
 for(i=1;i<l;i++)
    { 
     t=f[i]-f[i-1];
     if(t<0)
      t=-t;
     if(t>14)
      sum=sum+27-t;
     if(t<=13)
      sum=sum+t+1;
     }  
 printf("%d",sum);
return 0;
 }


