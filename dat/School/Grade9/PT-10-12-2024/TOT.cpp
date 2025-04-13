///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,x;
ll ans;
vector<int> a;
unordered_map<int,int> dem;
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
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(dem[x]==0)
            a.push_back(x);
        dem[x]++;
    }
    for(int i=0;i<a.size()-1;i++)
        for(int j=i+1;j<a.size();j++)
            ans+=dem[a[i]+a[j]];
    cout<<ans;
}