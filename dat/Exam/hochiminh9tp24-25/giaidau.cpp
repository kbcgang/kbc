/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, q;
ll a[100005];
int l, r;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(" .inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        a[i] = a[i - 1] + a[i];
    while (q--)
    {
        cin >> l >> r;
        ll m = (a[r] - a[l - 1]) / 2;
        int p = lower_bound(a + l, a + r, a[l - 1] + m) - a;
        m=abs(a[r]-a[p]-(a[p]-a[l-1]));
        if(p>l)m=min(m,a[r]-a[p-1]-(a[p-1]-a[l-1]));
        cout<<m<<"\n";
    }
}