#include<stdio.h>
int main()
{
     int t,s;
     long long int n;
     scanf("%lld",&t);
     while(t--)
     {
         scanf("%d %d",&n,&s);
         if(s==0)
            printf("Airborne wins.\n");
         else
            printf("Pagfloyd wins.\n");
     }
     return 0;
}
