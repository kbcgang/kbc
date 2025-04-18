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
kien n, k, m, dem, f[1000000];
kien maxx, minn, vtr;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    kien cho = 0;
    for (char c : s)
    {
        if (isdigit(c))
        {
            cho++;
        }
        else
        {
            maxx = max(maxx, cho);
            cho = 0;
        }
    }
    maxx = max(maxx, cho);
    cout << maxx << endl;
    return 0;
}
