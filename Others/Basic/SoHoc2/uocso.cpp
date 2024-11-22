///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int t,a,b;
void check(int n,map<int,int> &dem)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            dem[i]++;
            n/=i;
        }
    }
    if(n>1) dem[n]++;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        int ans=1;
        cin>>a>>b;
        map<int,int> dem;
        check(a,dem);
        check(b,dem);
        for(auto x:dem)
            ans*=x.second+1;
        cout<<ans<<"\n";
    }
}
