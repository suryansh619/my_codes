#include <stdio.h>

int main() {
	// your code here
	long long int t,n;
	scanf("%lld\n",&t);
	while(t--){
long long int sum=0,k,n,p;
		scanf("%lld",&n);
p=n;
		while(n--)
		{
			scanf("%lld",&k);
			sum+=k;
		}
		if(sum%p==0)
		printf("YES\n");
		else 
               printf("No\n");
	}

	return 0;
}
