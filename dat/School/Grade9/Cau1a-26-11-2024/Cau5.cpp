/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long long a[1000005];
long long pre[1000005];
long long Min[1000005];
long long ans = LONG_LONG_MIN;
void make_sum_left()
{
    for (int i = 0; i < n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }
    // Min[0] = pre[0];
    for (int i = 1; i < n; i++)
        Min[i] = min(Min[i - 1], pre[i]);
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
        cin >> a[i];
    make_sum_left();
    for (int i = 0; i < n; i++)
        ans = max({ans, pre[i] - Min[i-1]});
    cout << ans;
}