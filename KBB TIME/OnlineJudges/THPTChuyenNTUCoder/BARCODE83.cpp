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
kien n, k, m, dem;
kien maxx, minn, vtr, ans;

bool check(kien i, kien n)
{
    kien s = 0;
    kien s1 = 0;
    kien danger = 0;
    for (kien j = 0; j < n; j++)
    {
        if (((i >> j) & 1) == 1)
        {
            s++;
        }
        else
        {
            s1++;
        }
        if (((i >> j) & 1) == 1 and ((i >> (j - 1)) & 1) == 1)
        {
            danger = 1;
        }
    }
    if (s == s1)
    {
        return true;
    }
    else if (danger == 0)
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
        if (check(i, n))
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (((i >> j) & 1) ==  1)
                {
                    cout << 8 << " ";
                }
                else
                {
                    cout << 3 << " ";
                }
            }
            cout << "\n";
        }
    }
}
