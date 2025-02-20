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
kien n,k,m,dem,t;
kien maxx,minn, vtr,ans,l,r, f[Million + 5];
string s;

void sangNT()
{
    for (int i = 2; i <= Million; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for (int i = 2; i <= sqrt(Million); i++)
    {
        if (f[i])
        {
            for (int j = i*i; j <= Million; j += i)
            {
                f[j] = 0;
            }
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    cin >> t;
    while (t--)
    {
        ans = 0;
        maxx = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            ans += s[i] - '0';
            if (maxx < s[i])
            {
                maxx = s[i];
            }
        }
        ans *= 10;
        ans += maxx - '0';
        if (f[ans])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}