#include<stdio.h>
int main()
{
	while(1)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(a==0&&b==0&&c==0)
			break;
		if(a!=0&&b!=0&&c!=0)
		{
		if((c/b==b/a)&&c%b==0&&b%a==0)
			printf("GP %d\n",(c*c)/b);
		}
		if((c-b)==(b-a))
		{
			printf("AP %d\n",2*c-b);
		}
	}
}