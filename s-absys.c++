#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,a=0,b=0,c=0,co=0;
		char s[15],d[15],f[15],g[15],h[15];
		scanf("%s%s%s%s%s",s,d,f,g,h);
		for(i=0;i<strlen(s);i++)
		{
			a=a*10+(s[i]-48);
			if(s[i]>96)
				{
					a=0;
					break;
				}
		}
		for(i=0;i<strlen(f);i++)
		{
			b=b*10+(f[i]-48);
			if(f[i]>96)
				{
					b=0;
					break;
				}
		}
		for(i=0;i<strlen(h);i++)
		{
			c=c*10+(h[i]-48);
			if(h[i]>96)
				{
					c=0;
					break;
				}
		}
		if(a==0){
			a=c-b;
			sprintf(d,"%d",a);
			strcpy(g,s);
		}
		else if(b==0)
		{
			b=c-a;
			sprintf(d,"%d",b);
			strcpy(g,f);
		}
		else{
			c=a+b;
			sprintf(d,"%d",c);
			strcpy(g,h);
		}
		int r=strlen(d);
		for(i=0;i<strlen(d)||i<strlen(g);i++)
		{
			if(g[i]!=d[i])
				break;
		}
		for( int j=strlen(g);j>0;j++)
		{
			if(g[j-1]!=d[r-1])
				break;
			r--;
		}
		for(int j=i;j<r;j++)
		{
			printf("%c",d[j]);
		}
		printf("\n");
	}
	return 0;
}