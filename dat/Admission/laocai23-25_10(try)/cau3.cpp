///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<map>
#include<cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
int k,a[100005];
ll ans;
map<int,int>d;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]%=k;
        d[a[i]]++;
    }
    for(auto i:d)
    {
        if(i.first>k/2)
            break;
        if(i.first*2==k||i.first==0)
            ans++;
        else
            ans+=max(i.second,d[k-i.first]);
    }
    cout<<ans;
}