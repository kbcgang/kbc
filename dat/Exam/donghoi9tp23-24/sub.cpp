/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, ans;
ll p, q, a[1000005];
void ChatGPT(int l, int r)
{
    while (a[r] - a[l - 1] >= p && a[r] - a[l - 1] <= q)
    {
        ans++;
        l++;
    }
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
    cin >> n >> p >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i - 1] + a[i];
    }
    int l = 0, r = 0;
    for(int i=0;i<n;i++)
    {
        while(l<n&&a[l]-a[i-1]<p)
            l++;
        while(r<n&&a[r]-a[i-1]<=q)r++;
        if(r>=l)ans+=r-l;
    }
    cout << ans;
}