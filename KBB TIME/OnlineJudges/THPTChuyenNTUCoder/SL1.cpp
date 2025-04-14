/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, a[1000000];
kien maxx, minn, vtr, ans, l, r;

bool ktr(int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n == 2)
    {
        return true;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

bool check(int i, int n)
{
    int s = 0;
    int s1 = 0;
    for (int j = 0; j < n; j++)
    {
        if (((i >> j) & 1) == 1)
        {
            s++;
        }
        else
        {
            s1++;
        }
    }
    if (ktr(s) and ktr(abs(s - s1)))
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
    cin >> n;
    for (int i = 0; i < (1 << n); i++)
    {
        if (check(i,n))
        {
            dem++;
        }
    }
    cout << dem;
}
