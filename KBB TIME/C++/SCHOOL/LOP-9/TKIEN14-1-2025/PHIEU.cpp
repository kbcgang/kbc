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
kien n,x,m,dem, a[NT];
kien maxx,minn, vtr,ans,l,r, dp[NT];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    dem = 0; 
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (dp[x - 1] == 0)
        {
            dem++;
        }
        dp[x] = 1;
    }
    cout << dem;
}