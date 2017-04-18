#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		unsigned long long int n,k,m,c=0,i=1;
		cin>>n>>k>>m;
		while(n*pow(k,i)<=m)
		{

			c++;
			i++;		
		}
		cout<<c<<endl;
	}
	return 0;
}
