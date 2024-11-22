///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long n,k,a[100005],ans,t;
map<long long,long long> dem;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    // dem[0]=1;
    for(int i=0;i<=n;i++)
    {
        ans+=dem[t-k];
        dem[t]++;
        t+=a[i];
    }
    cout<<ans;
}