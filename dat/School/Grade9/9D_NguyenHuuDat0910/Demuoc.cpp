///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
long long ans=1;
void check(int n)
{
    map<int,int> dem;
    for(int i=2;i<=n;i++)
    {
        int m=i;
        for(int j=2;j<=sqrt(m);j++)
        {
            while(m%j==0)
            {
                dem[j]++;
                m/=j;
            }
        }
        if(m>1)
            dem[m]++;
    }
    for(auto i:dem)
    {
        ans*=(i.second+1);
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("Demuoc.inp","r"))
    {
        freopen("Demuoc.inp","r",stdin);
        freopen("Demuoc.out","w",stdout);
    }
    cin>>n;
    check(n);
    cout<<ans;
}