/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
unordered_map<int, int> dem;
int a[5005];
ll ans[5005];
int n;
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
    for (int k = 2; k < n - 1; k++)
        for (int x = 0; x < n; x++)
        {
            int j = k - 1;
            int i = x;
            if (i < j)
                dem[a[i] + a[j]]++;
            else if (k < x)
                ans[x] += dem[a[x] - a[k]];
        }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}