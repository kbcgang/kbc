#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int num[300005];
map<int,int> dem;
map<int,int> couple;
void tonguoc()
{
    for(int i=1; i<=1e5; i++)
        num[i]=1;
    for(int i=2; i<=1e5; i++)
        for(int j=i; j<=1e5; j+=i)
            num[j]+=i;
}
int n,ans;
main()
{
    if(fopen("CAU01.INP","r"))
    {
        freopen("CAU01.INP","r",stdin);
        freopen("CAU01.OUT","w",stdout);
    }
    tonguoc();
    cin>>n;

    for(int i=2;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(num[i]==j)
                ans++;
    cout<<ans;
}
