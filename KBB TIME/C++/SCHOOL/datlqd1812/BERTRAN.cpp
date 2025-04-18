///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
bool snt[1000005];
int n;
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=1e3;i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e6;j+=i)
                snt[j]=1;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make_sieve();
    cin>>n;
    int ans=0;
    for(int i=n+1;i<2*n;i++)
        if(snt[i]==0)
        {
            ans++;
            cout<<i<<" ";
        }
    cout<<"\n"<<ans;
}