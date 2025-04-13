/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
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
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            dem++;
        }
        else if (s[i] == ')')
        {
            if (dem <= 0)
            {
                dem = INT_MAX;
            }
            dem--;
        }
        else
        {
            cout << "KHONG HOP LE\n";
        }
    }
    cout << "HOP LE";
}

