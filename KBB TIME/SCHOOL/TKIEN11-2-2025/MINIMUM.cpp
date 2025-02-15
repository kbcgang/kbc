/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, t, f[Million];

void sangNT()
{
    for (int i = 1; i <= Million; i++)
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

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n >> k >> s;
        if (k == 0)
        {
            cout << s << '\n';
        }
        else
        {
            if (s.size() == 1)
                cout << 0 << '\n';
            else
            {
                if (s[0] != '1')
                {
                    k--;
                    s[0] = '1';
                }
                for (int i = 1; i < s.size(); i++)
                {
                    if (s[i] != '0' && k > 0)
                    {
                        k--;
                        s[i] = '0';
                    }
                }
                cout << s << '\n';
            }
        }
    }
    return 0;
}