/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem;
kien maxx, minn, vtr, ans, l, r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.size();)
    {
        if (s[i] >= 'A' and s[i] <= 'Z')
        {
            char m = s[i];
            i++;
            kien dem = 0;
            while (i < s.size() and s[i] >= '0' and s[i] <= '9')
            {
                dem = dem * 10 + s[i] - '0';
                i++;
            }
            if (dem == 0)
                dem = 1;
            if (m == 'H')
                ans += dem * 1;
            if (m == 'C')
                ans += dem * 12;
            if (m == 'O')
                ans += dem * 16;
            if (m == 'N')
                ans += dem * 14;
        }
    }
    cout << ans;
}