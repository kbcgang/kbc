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
kien n,k,m,dem;
kien maxx,minn;
string s, ans;
unordered_map <char, int> pp;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (n--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            pp[s[i]]++;
        }
        for (int i = 'A'; i <= 'Z'; i++)
        {
            if (pp[i] == 1)
            {
                ans += char(i);
                break;
            }
        }
        pp.clear();
    }
    cout << ans;
}