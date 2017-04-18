#include<stdio.h>
int compare(char *s,char *p,int h);
int main()
{
	char s[100],p[100];
	scanf("%s%s",s,p);
	int h=0; 
	compare(s,p,h);
	return 0;
} 

void compare(char *s,char *p,int h)
{
	int l=0,l1=0,*q,*r;
	if(h==0)
	{ 
 printf("working\n");
		q=s;r=p;
		for(;*q!='\0';*q++)
		{
			l++;
		}

		for(;*r!='\0';*r++)
			l1++;
		if(l1>l){
			printf("1");
			return ;
		}
		else
		{
			printf("0");
			return ;
		}
	}
	h++;
	if(h==l)		printf("the strings are equal");
	if(*s==*p)
		compare(s++,p++,h);
	else
		return 0;
}


