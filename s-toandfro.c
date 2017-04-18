#include<stdio.h>
#include<string.h>
int main()
{
	while(1)
	{
		int t,i,j,m;
		char c[202];
		scanf("%d",&t);
		if(t==0)
			return 0;
		scanf("%s",c);
		for(i=0;i<t;i++)
		{
			m=i;
			for(j=1;j<=(strlen(c)/t);j++)
			{
				if(j%2!=0)
				{
					printf("%c",c[m]);
					m=m+2*t-1-2*i;
				}
				if(j%2==0)
				{
					printf("%c",c[m]);
					m+=1+2*i;
				}
			}
		}
		printf("\n");
	}
	return 0;
}