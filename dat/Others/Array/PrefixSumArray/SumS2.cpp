///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
long n,a[1000005],s;
long t[1000005];
map<long,long> dem;
long long ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        t[i]=t[i-1]+a[i];
    }
    dem[0]++;
    for(int i=0;i<n;i++)
    {
        ans+=dem[t[i]-s];
        dem[t[i]]++;
    }
    cout<<ans;
}