/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, m, x, r, y, ans;
vector<pair<ll, ll>> a;
bool compare(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
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
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        cin >> x >> r;
        a.push_back(make_pair(max(x - r, 1ll), min(n, x + r)));
    }
    sort(a.begin(), a.end(),compare);
    x = a[0].first;
    y = a[0].second;
    for (ll i = 1; i < m; i++)
        if (a[i].first <= y)
            y = max(a[i].second,y);
        else
        {
            ans += y - x + 1;
            x = a[i].first;
            y = a[i].second;
        }
    ans+=y-x+1;
    cout << ans;
}