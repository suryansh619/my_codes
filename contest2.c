#include <stdio.h>
int a[1000000]={0};
int main() {
	int t;
a[1]=1;
scanf("%d",&t);
while(t--){
	int n,i,s,r=0;
	scanf("%d",&n);
	for(i=2;i*i<n;i++)
	{
                        if(a[i]==1)
                        	continue;
			for(s=2;i*s<=n;s++)
                      	a[s*i]=1;
	}
	int b[1000],j=0
	for(i=2;i<=n;i++)
	{
		if(a[i]==0)
		b[j]=i;
	}
}

	return 0;
}
