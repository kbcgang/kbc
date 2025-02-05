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
kien n,k,m,dem,f[1000000];
kien maxx,minn, vtr,ans,l,r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    kien x = s.size();
    if (x < 2)
    {
        cout << s;
        exit(0);
    }
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            f[++dem] = i;
            if (i != x / i)
            {
                f[++dem] = x / i;
            }
        }
    }
    if (dem == 0)
    {
        cout << s;
        exit(0);
    }
    sort(f + 1, f + 1 + dem);
    for (int i = dem; i >= 1; i--)
    {
        if (f[i] <= x / f[i])
        {
            for (int k = 0; k < f[i]; k++)
            {
                for (int j = k; j < x; j += f[i])
                {
                    cout << s[j];
                }
            }
            exit(0);
        }
    }
}