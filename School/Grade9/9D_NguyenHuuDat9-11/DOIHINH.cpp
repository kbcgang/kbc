/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, h[100005];
map<int, int> dem;
int ans1, ans;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("DOIHINH.inp", "r"))
    {
        freopen("DOIHINH.inp", "r", stdin);
        freopen("DOIHINH.out", "w", stdout);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        dem[h[i]]++;
    }
    for (auto i : dem)
    {
        if (i.second >= ans)
        {
            ans1 = max(ans1, i.first);
            ans = i.second;
        }
    }
    cout << ans1 << " " << ans;
}