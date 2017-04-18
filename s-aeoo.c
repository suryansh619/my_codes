#include<stdio.h>
int main()
{
	int n,i,sum; 
	scanf("%d",&n);
	sum=n;
	for(i=2;;i++)
	{
		if(n/i>=i)
		sum+=n/i-i+1;
	        else break;
        }
	printf("%d",sum);
	return 0;
}
