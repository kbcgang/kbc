#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k;
main()
{
    if (fopen("BANGSO.inp", "r"))
    {
        freopen("BANGSO.inp", "r", stdin);
        freopen("BANGSO.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    if (k < 2)
        cout << 1;
    else
    {
        int ans = 0;
        for (int i = 1; i <= sqrt(k); i++)
        {
            if (k % i == 0)
            {
                int m = k / i;
                if (i <= n&&m<=n)
                    ans+=2;
            }
            if (i * i <= n&&i*i==k)
            {
                ans--;
            }
        }
        cout << ans;
    }
}