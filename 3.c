#include<stdio.h>
#include<string.h>
int main()
{
int t;
scanf("%d",&t);
while(t--){
	int j,l,i,k=0;
	char a[1000];
	scanf("%s",a);
	l=strlen(a);
         if(l==1&&a[0]=='9')
         {
          printf("%d",(a[0]-46));
          continue;
         }
         if(l==1)
        {
         printf("%c\n",(a[0]+1));
         continue;
        }
       for(i=0;i<l/2;i++)
	{
                if(a[l-1-i]==a[i])
                k++;
		if(a[l-1-i]<=a[i])
		a[l-1-i]=a[i];
		else
		{
                        a[l-2-i]++;
			a[l-1-i]=a[i];
		}
	}
/*if(k==i)
 {
  if(l%2==0)
   {
         j=l/2;
         if(a[j]=='9'&&a[l-j-1]=='9')
          {
            while(a[j]=='9'&&a[l-j-1]=='9')
             {
              a[j]='0';a[l-1-j]='0';
              j++;
             }
            a[j]++;a[l-j-1]++;
          }
     
         else
         {
          a[l-i-1]++;
          a[i]++;
          break;
         }
  } 
 }         
printf("%s\n",a);
}
*/}
 return 0;
}
 
