#include<stdio.h>
char rev(char *s);
int swap(int *a,int *b);
int main()
{
 char s[100],r[100];
 scanf("%s",s);
 rev(s);
 ("%s",s);
return 0;
}
char rev(char *s)
{int l=0;
char *p;int c;
 p=s;
 for(;*p!='\0';p++)
 {
 printf("%d\t%c\n",p,*p);
 l++;
 }
printf("%d\n",l);
if(l==0)
return 0;
swap(s,s+(l-1));
char *g;
g=s+1;
rev(g);
return 0;
}
int swap(int a,int b)
{
 int c;
 c=a;
 a=b;
 b=c;
return 0;
}

