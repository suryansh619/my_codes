#include<stdio.h>
int main()
{
	int n;
	float c,a[10010],sum=0;
	int g=0,r=0,k,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				c=a[j]; 
				a[j]=a[i];
				a[i]=c;
			}
		}
	}
      for(i=0;i<n;i++)
      {      
              g++;
	      sum=a[i]+sum;
		      if(sum>=1)
		      {
			      sum=a[i];
			      r++;
                              if(i==n-1)
                              break;
		      }
	      if(i==n-1&&sum<=1)
		      r++;
   printf("i---%d\nsum--->%f\nr--->%d\n",i,sum,r);
      }
     printf("%d",r+1);
      return 0;
}
