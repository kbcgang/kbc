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
kien n,k,m,dem,f[NT + 5], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    string s, x, c;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        x = "";
        for (int j = i; j <= n - k + i - 1; j++)
        {
            x += s[j];
        }
        c = x;
        reverse(x.begin(), x.end());
        if (c == x)
        {
            cout << c;
            exit(0);
        }
    }
    cout << "No" << "\n";
}