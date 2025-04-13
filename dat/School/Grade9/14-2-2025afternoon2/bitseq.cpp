/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, a[1000005];
int s;
int t, ans;
void getArray()
{
    int l = 0, r = 0;
    a[n] = 2;
    while (r <= n)
    {
        if (a[r] != a[l])
        {
            if (a[l] == 0)
                a[t++] = r - l;
            else
                a[t++] = l - r;
            l = r;
        }
        r++;
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
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    getArray();
    n = t;
    t=0;
    // t=max(a[i],t+a[i],0);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > t + a[i])
            t = a[i];
        else
            t += a[i];
        ans = max(ans, s + t);
    }
    cout << ans;
}