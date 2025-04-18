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
kien k, n, l, r, dem;

kien f(string &s, kien k)
{
    unordered_map<char, kien> pp;
    kien l = 0, dem = 0, xau = 0;
    kien N = s.size();
    for (int r = 0; r < N; r++)
    {
        if (++pp[s[r]] == 1)
            xau++;

        while (xau >= k)
        {
            dem += (N - r);
            if (--pp[s[l]] == 0)
                xau--;
            l++;
        }
    }
    return dem;
}

JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> k >> s;
    cout << f(s, k) - f(s, k + 1) << '\n';
    return 0;
}
