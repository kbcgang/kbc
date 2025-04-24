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
kien t, ans, dem, l;
string n;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> l;
        cin >> n;
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] == '1')
            {
                dem++;
            }
        }        
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] == '0')
            {
                ans += dem + 1;
            }
            else
            {
                ans += dem - 1;
            }
        }
        cout << ans << "\n";
        dem = 0;
        ans = 0;
    }
}