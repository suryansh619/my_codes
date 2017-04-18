#include <bits/stdc++.h>
using namespace std;
int main()
{
        int len1,len2,f=0,i=0;
        char s[100],a[100];
        scanf("%s%s",s,a);
        len1=strlen(a);
        len2=strlen(s);
        a[len1]='$';
        strcat(a,s);
        int j=len1+1;
        while(1)
        {
                if(a[i]==a[j]){
                        i++;
                        j++;
                        f=1;
                }
                else if(a[i]=='$'){
                        break;
                }
                else if(i!=0 && a[i]!=a[j]){
                        i=0;
                        f=0;
                }
                else{
                        j++;
                        i=0;
                        f=0;
                }}
                if(f==0){
                        printf("NO");
                }
                else if(f==1){
                        printf("YES");
                }
        
        return 0;
}

