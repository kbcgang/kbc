///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,x[100005],y[100005];
long long sx[100005],sy[100005];
int check(int x[])
{
    sort(x,x+n);
    int ans=0,t=0;
    for(int i=0;i<n;i++)
    {
        ans+=x[i]*i-t;
        t+=x[i];
    }
    return ans;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>x[i]>>y[i];
    cout<<check(x)+check(y);
}
