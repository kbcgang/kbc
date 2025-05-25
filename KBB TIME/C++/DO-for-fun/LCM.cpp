#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
kien T,n, z, beauty;
kien v;

JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> T;
    while (T--)
    {
        cin >> n;
        vector<kien> f(n);
        vector<kien> a;
        a.reserve(n);
        z = 0;
        beauty = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v;
            if (v > z)
            {
                kien g2 = 0;
                if (!a.empty())
                {
                    if (2 * z > v)
                    {
                        g2 = v;
                    }
                    else
                    {
                        for (kien y : a)
                        {
                            kien f = y + (v % y);
                            if (f > g2)
                                g2 = f;
                        }
                    }
                }
                beauty = max(beauty, g2);
                z = v;
            }
            else if (v < z)
            {
                kien f = v + (z % v);
                beauty = max(beauty, f);
            }
            f[i] = beauty;
            a.push_back(v);
        }
        for (int i = 0; i < n; i++)
        {
            cout << f[i] << (i + 1 < n ? ' ' : '\n');
        }
    }
}