#include<stdio.h>
int main()
{
	int t,p=1;
	scanf("%d",&t);
	while(p<=t){
		p++;
		int n,f,a[1001],v=0,k,i,j,sum=0;
		scanf("%d%d",&n,&f);
		for(i=0;i<f;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<f-1;i++)
		{
			for(j=i+1;j<f;j++)
			{
				if(a[i]>a[j])
				{
					k=a[i]; 
					a[i]=a[j];
					a[j]=k;
				}
			}                
		}
		for(i=f-1;i>=0;i--)
		{
			sum+=a[i];
                        v++;
			if(sum>=n)
				break;
		}
		if(sum<n){
			printf("Scenario #%d:\nimpossible\n",p-1);
			continue;
		}
		printf("Scenario #%d:\n%d\n",p-1,v);
	}
	return 0;
} 
