if(k==i)
 {
  if(l%2==0)
   {
    int p=1;
    for(i=l/2;i<l;i++)
     {p++;
      if(a[i]=='9'&&a[i-p]=='9')
       {
       a[i]='0';
       a[i-p]='0';
       printf("%c%c",a[i],a[i-p]);
       }
      else
       {
        a[l-i-1]++;
        a[i]++;
         break;
       }
     } 
   }
  else
   a[l/2]++;
 }