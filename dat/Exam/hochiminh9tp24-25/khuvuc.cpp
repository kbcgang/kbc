/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int a[100005];
int b[100005];
int res;
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
    if (n == 1)
    {
        cout << a[0];
        exit(0);
    }
    a[-1]=0;
    b[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        b[i] = __gcd(b[i + 1], a[i]);
    for (int i = 1; i < n; i++)
        a[i] = __gcd(a[i], a[i - 1]);
    for (int i = 0; i < n; i++)
        res = max(res, __gcd(a[i - 1], b[i + 1]));
    cout << res;
}