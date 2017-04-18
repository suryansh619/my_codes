#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long int a[1000]={0},b[1000]={0};
		int max=0,i,c=0;		
		for(i=0;i<n;i++)
		{
			scanf("%ld%ld",&a[i],&b[i]);
			if(b[i]>max)
			{
				max=b[i];
				c=i;
			}
			if(b[i]==max)
			{
				if(b[i]>b[c])
					{
						max=b[i];
						c=i;
					}
			}
		}
		int h=0;
		for(i=0;i<n;i++)
		{
			if(i==c)
				continue;	
			if(a[c]<b[i])
			{
				h++;
			}
		}
		if(h>0)
			printf("-1\n");
		else
			printf("%d\n",c+1);
	}
	return 0;
}