#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,q=1;
	cin>>t;
	while(t--)
	{
		char s[20],k=0,l1=0;
		int i,m,l=0;
		cin>>s;
		m=strlen(s);
		if(m==1)
		{cout<<"Case #"<<q++<<": ";
			cout<<s<<endl;
		}
		else
		{
			for(i=0;i<m-1;i++)
			{
			    if(s[i+1]<s[i] && s[i]!='1' && (s[i]-s[i-1])==0)
				{
				    s[0]-=1;
				    for(i=1;i<m;i++)
				    s[i]='9';
				}
				else if(s[i+1]<s[i] && s[i]!='1' && abs(s[i+1]-s[i])>0)
				{
					l=i+1;
					s[i]-=1;
					for(i=l;i<m;i++)
						s[i]='9';
				}
				
				else if(s[i+1]<s[i] && s[i]=='1')
				{
					k=1;
					for(i=0;i<m;i++)
						s[i]='9';
				}
			}
			if(k==0)
			{
			    cout<<"Case #"<<q++<<": ";
				for(i=0;i<m;i++)
					cout<<s[i];
				cout<<endl;
			}
			else if(k==1)
			{
			    cout<<"Case #"<<q++<<": ";
				for(i=1;i<m;i++)
					cout<<s[i];
				cout<<endl;
			}
		}

	}
	return 0;
}