///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,k,a[1000005],ans=INT_MIN;
int s[1000005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
        s[i]=s[i-1]+a[i];
    for(int i=0;i<n-k+1;i++)
        ans=max(ans,s[i+k-1]-s[i-1]);
    cout<<ans;
}
