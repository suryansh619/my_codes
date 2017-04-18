#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int i,x,y,s,l;
		long double n,sq,d;
		cin>>x>>y>>s;
		sq=sqrt(pow((7*x+5*y+2*s),2)-48*(x+y)*s);
		n=sq+(7*x+5*y+2*s);
		n=(n/2);
		n=n/(x+y);
		l=llrintl(n);
		cout<<l<<endl;
		d=(y-x)/(l-6);
		s=llrintl(d);
        y=x-2*s;
		for(i=0;i<l;i++)
		{
			cout<<(i*s+y)<<" ";
		}
		cout<<endl;
	}
	return 0;
}