/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, k;
ll m;
string x;
int a[100005];
void getnum(int pos)
{
    for (int i = 0; i < x.size(); i++)
        a[pos] = (a[pos] * 10 + x[i] - 48) % k;
}
int luythua(int a, int b, int c)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = 1ll * res * a % c;
        a = 1ll * a * a % c;
        b /= 2;
    }
    return res;
}
int dem[100005];
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
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        getnum(i);
    }
    for (int i = 0; i < n; i++)
        a[i] = luythua(a[i], m, k);
    // for(int i=0;i<n;i++)cout<<a[i]<<" ";
    dem[0] = 1;
    for (int i = 0; i < n; i++)
    {
        a[i] = (a[i - 1] + a[i]) % k;
        ans += dem[a[i]];
        dem[a[i]]++;
    }
    cout << ans;
}