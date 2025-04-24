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

string s, x, ans;
kien ll;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> s;
    s += 'a';

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            x += s[i];
        }
        else if (i > 0 && s[i - 1] >= '0' && s[i - 1] <= '9')
        {
            ll++;

            x.erase(0, x.find_first_not_of('0'));
            if (x == "") x = "0";

            if (x.size() > ans.size())
            {
                ans = x;
            }
            else if (x.size() == ans.size())
            {
                for (int j = 0; j < x.size(); j++)
                {
                    if (x[j] > ans[j])
                    {
                        ans = x;
                        break;
                    }
                    else if (x[j] < ans[j])
                    {
                        break;
                    }
                }
            }
            x = "";
        }
    }

    cout << ll << "\n";
    cout << ans;
}

