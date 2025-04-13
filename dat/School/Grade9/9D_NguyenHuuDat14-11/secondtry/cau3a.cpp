///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll r,c;
int odd[5]={1,3,5,7,9},even[5]={0,2,4,6,8};
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
    cin>>r>>c;
    if(r&1)
    {
        cout<<(r-1)/2*10+even[c-1];
    }
    else cout<<(r-1)/2*10+odd[c-1];
}