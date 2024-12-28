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
char c;
kien f[1000005];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> c;
        f[c]++;
    }
    dem = *max_element(f + 'a', f + 'z' + 1);
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (f[i] == dem)
        {
            cout << char(i) << " ";
            exit(0);
        }
    }
}