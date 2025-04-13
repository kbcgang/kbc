///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,h;
vector<int> a;
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
        cin>>h;
        if(a.empty()==1||h>a.back())a.push_back(h);
        else{
            int pos=lower_bound(a.begin(),a.end(),h)-a.begin();
            a[pos]=h;
        }
    }cout<<a.size();
}