#include <stdio.h>

int main(void) {
	int i,n,j,a[10000],b[10000]={0},q,x,y,z,max=0,t=1;
	// your code goes here
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
			b[a[i]]++;
	}
       
	scanf("%d",&q);
       while(q--){
          scanf("%d%d%d",&x,&y,&z);
         if(x==1){ 
         for(i=y;i<=z;i++)
           {
            if(b[a[i]]>max)
             {
              max=b[a[i]];
             }
           }
         printf("%d\n",max);
         continue;
         }
         if(x==2)
         {
          b[a[y]]--;
          a[y]=z;
          b[z]++;
         continue;
         }
       }
return 0;
}
