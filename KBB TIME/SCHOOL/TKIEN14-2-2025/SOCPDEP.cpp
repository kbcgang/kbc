///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[NT + 5], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

void sangNT()
{
    for (int i = 2; i <= Million; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for (int i = 2; i <= sqrt(Million); i++)
    {
        if (f[i])
        {
            for (int j = i * i; j <= Million; j += i)
            {
                f[j] = 0;
            }
        }
    }
}

bool daoso(int x)
{
    int x2 = x;
    int x1 = 0;
    while (x > 0)
    {
        x1 = x1 * 10 + (x % 10);
        x /= 10;
    }
    if (x1 == x2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    cin >> l >> r;
    if (int(sqrt(l) * sqrt(l)) == l)
    {
        l = sqrt(l);
    }
    else
    {
        l = sqrt(l) + 1;
    }
    for (int i = l; i <= sqrt(r); i++)
    {
        if (f[i])
        {
            if (daoso(i) == true)
            {
                ans++;
            }
        }
    }
    cout << ans;

}