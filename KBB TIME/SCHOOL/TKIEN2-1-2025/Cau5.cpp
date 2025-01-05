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
    string s, x, c;
    getline(cin, s);
    cin >> k;
    s += ' ';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z' or s[i] >= 'a' && s[i] <= 'z')
        {
            x += s[i];
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            x += s[i];
        }
        else if (s[i] == ' ')
        {
            if (x.size() > ans)
            {
                ans = x.size();
                c = x;
            }
            x = "";
        }
    }
    ans = c.size();
    x = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            x += s[i];
        }
        else
        {
            if (ans == x.size())
            {
                dem++;
            }
            x = "";
        }
    }
    cout << dem << '\n';
    for (int i = 0; i < c.size(); i++)
    {
        if (isalpha(c[i]))
        {
            if (islower(c[i]))
            {
                cout << char((c[i] - 'a' - k + 26) % 26 + 'a');
            }
            else if (isupper(c[i]))
            {
                cout << char((c[i] - 'A' - k + 26) % 26 + 'A');
            }
        }
        else
        {
            cout << c[i];
        }
    }
}
