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
kien n;
kien tien = 0, lui = 0;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        kien dp, dp1;
        if (s[i] == 'A')
        {
            dp = tien;
            dp1 = 1 + min(tien, lui);
        }
        else
        {
            dp1 = lui;
            dp = 1 + min(tien, lui);
        }

        tien = dp;
        lui = dp1;
    }

    cout << tien << "\n";
}
