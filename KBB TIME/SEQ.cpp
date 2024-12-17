#include <bits/stdc++.h>
using namespace std;
int n,k,m,dem,f[1000000], a[1000000];
int maxx,minn, vtr,ans,l,r, dp[1000000];

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] += f[i-1] + a[i];
        if (f[i] >= m)
        {
            vtr = i - 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + vtr; j <= n; j++)
        {
            if (f[j] - f[i] < m)
            {
                vtr++;
            }
        }
    }
    cout << vtr;
    return 0;
}