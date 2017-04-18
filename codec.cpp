#include <bits/stdc++.h>
using namespace std;
int gcd(long long int a,long long int b){
	if(b!=0){
		return (b,a%b);
	}
	else{
		if(a>1){
			return 1;
		}
		else{
			return 0;
		}
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n;
		scanf("%lld",&n);
		long long int dp[n][n+1],ar[n],max=0;
		for(int i=0;i<n;i++){
			scanf("%lld",&ar[i]);
		}
		for(int i=0;i<n;i++){
			dp[i][0]=0;
		}
		for(int i=0;i<n;i++){
printf("working\n");
			for(int j=1;i<n+1;j++){
				if(j<i+1){
					dp[i][j]=0;
				}
				else if(i+1==j){
					dp[i][j]=1;
				}
				else{
					dp[i][j]=gcd(ar[i],ar[j-1]);
					dp[i][j]=dp[i][j-1]+dp[i][j];
				}
			}
			if(max<dp[i][n]){
				max=dp[i][n];
			}
		}
printf("%lld\n",max);
	}
	return 0;
}
