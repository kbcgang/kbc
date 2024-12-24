#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien n,ans,sum,t,a[1000000], f[1000000];
kien k;

int main()
{
    if(fopen("bai6.INP", "r"))
    {
        freopen("bai6.INP", "r", stdin);
        freopen("bai6.OUT", "w", stdout);
    }
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i-1] + a[i];
    }
    for (int i = 1; i <= n - k; i++)
    {
        ans = max(ans, f[i + k] - f[i]);
    }
    cout << ans;
}
