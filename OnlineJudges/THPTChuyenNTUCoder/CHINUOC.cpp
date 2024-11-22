#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
bool snt[100005];
void make_sieve()
{
    snt[0]=1;
    snt[1]=1;
    for(int i=2; i<=sqrt(1e5); i++)
        for(int j=i*i; j<=1e5; j+=i)
            snt[j]=1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make_sieve();
    cin>>n;
    for(int i=2; ; i++)
    {
        if(i*i*i*i*i*i*i*i>n) break;
        if(snt[i]==0)
        {
                ans++;
        }
    }
    for(int i=2; sqrt(n); i++)
    {
        if(i*i*(i+1)*(i+1)>n) break;
        if(snt[i]==0)
        {
            for(int j=i+1; j<=sqrt(n); j++)
            {
                if(i*i*j*j>n) break;
                if(snt[j]==0)
                {
                        ans++;
                }
            }
        }
    }
    cout<<ans;
}
