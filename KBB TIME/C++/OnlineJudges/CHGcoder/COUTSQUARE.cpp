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
kien a[1000000], n;
unordered_map<kien, int> pp;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    kien t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        pp.clear();
        for (int i = 1; i <= n; i++) 
        {
            cin >> a[i];
            pp[a[i]]++;
        }
        kien maxx = -1;
        for (auto [len, pp] : pp) 
        {
            if (pp >= 4) 
            {
                if (len > maxx) 
                    maxx = len;
            }
        }
        if (maxx == -1)
            cout << -1 << '\n';
        else
            cout << maxx * maxx << " " << pp[maxx] / 4 << '\n';
    }
}

