///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,f[1000], dem[10000];
kien maxx,minn, vtr,l,r, dp[1000], ques;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    string s, ans;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            ques++;
        }
        else
        dem[s[i]]++;
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        cin >> f[i];
        maxx += f[i];
        if (f[i] < dem[i])
        {
            ans = "-1";
        }
    }
    if (ans == "-1" or maxx != n)
    {
        cout << ans;
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
        {
            f[s[i]]--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
        {
            ans += s[i];
        }
        else
        {
            for (int i = 'a'; i <= 'z'; i++)
            {
                if (f[i] > 0)
                {
                    ans += char(i);
                    f[i]--;
                    break;
                }
            }
        }
    }
    cout << ans;


}