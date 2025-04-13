///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define kien main
using namespace std;
// const ll inf=LLONG_MAX;
// const ll mod=1e9+7;
int m;
bool cmp(pair<int,int> a,pair<int,int>b)
{
    if(a.second==b.second)
        return a.first>b.first;
    return a.second<b.second;
}
int x, n;
pair<int,int> coin[1000005];
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
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>coin[i].first;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        coin[i].second=x-coin[i].first;
    }
    sort(coin,coin+n,cmp);
    for(int i=0;i<n;i++)
    {
        if(m>=coin[i].second)
            m=m+coin[i].first;
        else break;
    }
    cout<<m;
}