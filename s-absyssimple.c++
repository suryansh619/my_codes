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
			printf("%d %s %s %s %s\n",a,d,f,g,h);
		}
		else if(b==0)
		{
			b=c-a;
			printf("%s %s %d %s %s\n",s,d,b,g,h);
		}
		else{
			c=a+b;
			printf("%s %s %s %s %d\n",s,d,f,g,c);
		}
	}
	return 0;
}