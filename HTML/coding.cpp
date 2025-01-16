#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien ans, dp[10000000], x, n;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (dp[x- 1] == 0)
        {
            ans++;
        }
        dp[x] = 1;
    }
    cout << ans;
}