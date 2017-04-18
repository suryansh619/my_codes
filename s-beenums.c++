#include <bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		long long int n,k;
		cin>>n;
		if(n==-1)
			break;
        n-=1;
        if(n%3!=0)
        {
        	cout<<"N"<<endl;
        	continue;
        }
        n/=3;
        k=n;
        n=sqrt(n);
        if(n*(n+1)==k)
        	cout<<"Y"<<endl;
        else
        	cout<<"N"<<endl;
	}
	return 0;
}