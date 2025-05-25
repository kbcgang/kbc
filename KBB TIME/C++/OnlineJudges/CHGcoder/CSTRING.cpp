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
kien n, k, q, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r;
unordered_map <char, int> pp;
string s;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> q;
    while (q--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> s;
            for (int j = 0; j < s.size(); j++)
            {
                pp[s[j]]++;
            }
        }
        dem = 0;
        for (int i = 'a'; i <= 'z'; i++)
        {
            if (pp[i] > 0 and pp[i] % n != 0)
            {
                cout << "NO\n";
                dem = 1;
            }
        }
        if (dem == 0)
        {
            cout << "YES\n";
        }
        pp.clear();   
    }
}
