    #include<bits/stdc++.h>
    using namespace std;
    int main()
    { int t,i,j;
    cin>>t;
    while(t--)
    {int a,b;
    cin>>a;
    long int x[a];
    for(i=0;i<a;i++)
    { cin>>x[i];
    }
    cin>>b;
    long int y[b];
    for(i=0;i<b;i++)
    { cin>>y[i];
    }
    int min=INT_MAX;
    for(i=0;i<a;i++)
    {for(j=0;j<b;j++)
     if(abs(x[i]-y[j])<min)
     min=abs(x[i]-y[j]);
     }
    cout<<min<<endl;
    }
    return 0;
    } 