///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n,q;
long a[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>q;
    while(q--)
    {
        int l,r,x;
        cin>>l>>r>>x;
        a[l]+=x;
        a[r+1]-=x;
    }
    long ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=a[i];
        cout<<ans<<" ";
    }
}