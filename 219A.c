#include<stdio.h>
#include<string.h>
int main()
{
 int k,l,g,i,j,a,p=0;
 char s[1001],t;
 scanf("%d",&k);
 if(1<=k<=1000){
 scanf("%s",s);
 l=strlen(s);
 g=l/k;
 if(l%k!=0){printf("-1");}
 for(i=0;i<g;i++)
 { a=i+g;
   for(j=i+1;j<l;j++)
    {
     
      if(s[j]==s[i])
        {  p++;
           t=s[a];
           s[a]=s[j];
           s[j]=t;
          a=a+g;  
        }
     }
  }

   printf("%s",s);
    
return 0;
}
}

