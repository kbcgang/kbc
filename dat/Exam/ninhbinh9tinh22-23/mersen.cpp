///Discipline > Motivation
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n,ans;
vector<int> prime={2,3,5,7,13,17,19,31,47};
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
    cin>>n;
    // for(auto a:prime)
    // {
    //     ll m=pow(2,a);
    //     cout<<a<<" "<<m-1<<"\n";
    // }
    for(int i=0;i<prime.size();i++)
    {
        ll s=pow(2,prime[i]);
        s-=1;
        if(s>n)
        {
            cout<<ans;
            exit(0);
        }
        ans=s;
    }
}