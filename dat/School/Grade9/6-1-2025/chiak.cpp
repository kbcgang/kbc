/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, k, s, x;
unordered_map<int, ll> dem;
ll ans;
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
    cin >> n >> k;
    dem[0] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s =1ll*(s+x+k*1000000000)%k;
        dem[s]++;
    }
    for (auto i : dem)
        ans += 1ll * i.second * (i.second - 1) / 2;
    cout << ans;
    // cout<<((5%3)+3)%3;
}