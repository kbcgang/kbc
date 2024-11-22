#include<bits/stdc++.h>
using namespace std;

bool snt[100000];
void make_sieve()
{
    snt[0]=1;
    snt[1]=1;
    for(int i=2;i*i<=1e5;i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e5;j+=i)
                snt[j]=1;
}

main()
{

    make_sieve();
    int ans=0, n;
    cin>>n;
    for(int i=2;i<=n;i++)
        if(snt[i]==0)
            ans++;
    cout<<ans;
}