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

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin , s);
    n = s.size();
    // reverse(s.begin(), s.end());
    if (n % 2 == 0)
    {
        for (int i = n - 1; i >= 1; i -= 2)
        {
            cout << s[i];
        }
        for (int i = 0; i < n; i += 2)
        {
            cout << s[i];
        }
    }
    else
    {
        for (int i = n - 1; i >= 0; i -= 2)
        {
            cout << s[i];
        }
        for (int i = 1; i < n; i += 2)
        {
            cout << s[i];
        }
    }
}