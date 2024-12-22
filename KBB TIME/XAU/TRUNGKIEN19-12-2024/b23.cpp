///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem, f[Million];
kien maxx,minn, vtr,ans,l,r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin , s);
    for (int i = 0; i < s.size(); i++)
    {
        f[s[i]]++;
    }
    ans = *max_element(f + 1, f + 1 + Million);
    for (int i = 0; i <s.size(); i++)
    {
        if (f[s[i]] == ans)
        {
            cout << s[i] << ' ' << ans << "\n";
            f[s[i]] = -1;
        }
    }
}