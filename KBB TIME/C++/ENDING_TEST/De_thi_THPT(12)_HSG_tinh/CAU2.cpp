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
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r;
unordered_map <char, int> pp;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (pp[s[i]] > 0)
        {
            ans += pp[s[i]];
        }
        pp[s[i]]++;
    }
    cout << ans;
}