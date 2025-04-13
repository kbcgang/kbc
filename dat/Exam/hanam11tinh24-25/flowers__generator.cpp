///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int n=1+rd()%100;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cout<<n<<' '<<1+rd()%1007<<'\n';
    for(int i=0;i<n;i++)
        cout<<1+rd()%100<<' '<<1+rd()%1000<<'\n';
}