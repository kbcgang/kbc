///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<map>
#include<unordered_map>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,x,k;
unordered_map<int,int> d;
ll ans;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    // cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    while(n--)
    {
        cin>>x;
        ans+=d[k-x];
        d[x]++;
    }
    cout<<ans;
}