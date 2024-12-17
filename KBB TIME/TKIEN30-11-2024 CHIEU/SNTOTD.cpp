///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[NT], a[NT];
kien maxx, minn, vtr, ans, l, r, dp[NT], t;

void sangNT()
{
    for(int i = 2; i <= NT; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for(int i = 2; i <= sqrt(NT); i++)
    {
        if(f[i])
        {
            for(int j = i * i; j <= NT; j += i)
            {
                f[j] = 0;
            }
        }
    }
}

bool themso(int n)
{
    m = n * 10;
    if(f[m + 1])
    {
        return true;
    }
    if(f[m + 3])
    {
        return true;
    }
    if(f[m + 5])
    {
        return true;
    }
    if(f[m + 7])
    {
        return true;
    }
    if(f[m + 9])
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool xoaso(int n)
{
    if(f[n / 10])
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(f[a[i]])
        {
            if(xoaso(a[i]) == true)
            {
                if(themso(a[i]) == true)
                {
                    dp[i] = dp[i - 1] + 1;
                }
                else
                {
                    dp[i] = dp[i - 1];
                }
            }
            else
            {
                dp[i] = dp[i-1];
            }
        }
        else
        {
            dp[i] = dp[i - 1];
        }
    }
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> l >> r;
        cout << dp[r] - dp[l - 1] << "\n";
    }
}