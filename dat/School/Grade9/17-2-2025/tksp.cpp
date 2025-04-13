/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, k;
int a[400005];
ll ans;
int d[1000005];
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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0;
    for (int r = 0; r < n; r++)
    {
        d[a[r]]++;
        while (d[a[r]] == k)
        {
            ans += n - r;
            d[a[l]]--;
            l++;
        }
    }
    cout << ans;
}