///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[NT + 5], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

bool sangNT()
{
    for (int i = 2; i <= 2*Million; i++)
    {
        f[i] = true;
    }
    f[0] = f[1] = false;
    for (int i = 2; i <= sqrt(2*Million); i++)
    {
        if (f[i])
        {
            for (int j = i*i; j <= 2*Million; j += i)
            {
                f[j] = false;
            }
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    cin >> n;
    for (int i = n + 1; i <= 2*n; i++)
    {
        if (f[i] == true)
        {
            cout << i << " ";
            ans++;
        }
    }
    cout << "\n" << ans;
}