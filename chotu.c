#include <stdio.h>
int main()
{
	long int k,c,i,j,s,t,p;
	scanf("%ld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%ld",&p);
		c=0,s=0;
		long int a[p];
		for(j=0;j<p;j++)
		{
			scanf("%ld",&a[j]);
			s=s+a[j];
		}
		if(s%p==0)
		{
			k=s/p;
			for(j=0;j<p;j++)
			{
				if(a[j]<k) c=c+(k-a[j]);
			}
			printf("%ld\n",c);}
			else
			printf("-1\n");
	}
	return 0;
}

