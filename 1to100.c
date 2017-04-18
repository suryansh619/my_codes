#include<stdio.h>
int p(int n){
n<=100&&printf("%d\n",n);
n+=1;
p(n);
return 0;
}
int main()
{
 int i=1;
 p(i);
return 0;
}
 
