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

int tongcs(string s)
{
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res += s[i] - '0';
    }
    return res;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    if (tongcs(s) % 9 == 0)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '1' and s[i] != '3' and maxx == 0)
            {
                cout << "NO" << "\n";
                maxx++;
            }
            else if (s[i] == '1')
            {
                dem++;
            }
            else if (s[i] == '3')
            {
                if (s[i-1] == '3' and s[i-2] == '1')
                {
                    continue;
                }
                else if (s[i-1] == '1')
                {
                    continue;
                }
                else
                {
                    if (maxx == 0)
                    cout << "NO" << "\n";
                    maxx++;
                }
            }
        }
        if (maxx == 0 and dem > 0)
        {
            cout << "YES" << "\n" << dem;
        }
        else if (maxx > 0)
        {
            cout << dem;
        }
    }
    else
    {
        cout << "NO\n";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                dem++;
            }
        }
        cout << dem;
    }
}
