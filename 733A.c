#include<stdio.h>
#include<string.h>
int main()
{
 int l,i,j,c,max;
 char s[101];
 scanf("%s",&s);
 l=strlen(s);
 for(i=0;i<l;i++)
  {
   if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
    {
     if(j==0)
      {
       max=i;
       j++;
      }
     if((i-c)>max)
      {
       max=i-c;
       j++;
      }
     c=i;
    }
  }
 if(l+1-c>max)
  max=l+1-c;
 printf("%d",max);
 return 0;
}
