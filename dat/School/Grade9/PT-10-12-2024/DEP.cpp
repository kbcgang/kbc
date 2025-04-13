/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll a[200005];
ll ans = -inf;
bool save;
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
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0)
        {
            ans = max(ans, s);
            s = 0;
        }
        else
        {
            s += a[i];
            save = 1;
        }
    }
    ans=max(ans,s);
    cout << ans;
}