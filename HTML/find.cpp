///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i-1] + a[i];
        dp[f[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (dp[k - a[i]] != 0)
        {
            dem += dp[k-a[i]];
        }
    }
    cout << dem;
    exit(0);
}