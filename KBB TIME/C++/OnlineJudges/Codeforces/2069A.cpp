///Hãy làm Sư tử, đừng làm Nai.
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
kien n,k,m,dem, a[10005];
kien maxx,minn, vtr,ans,l,r, dp[10005];
kien t;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        dem = 0;
        cin >> n;
        for (int i = 2; i <= n - 1; i++)
        {
            cin >> a[i];
            dp[i] = a[i];
        }
        dp[1] = 0;
        dp[n] = 0;
        for (int i = 2; i <= n - 2; i++)
        {
            if (dp[i] == 1 and dp[i + 2] == 1 and dp[i + 1] == 0)
            {
                cout << "NO\n";
                dem++;
                break;
            }
        }
        if (dem == 0)
        {
            cout << "YES\n";
        }
    }
}


/// 2 2 2 2 
/// không có trường hợp 1 0 1 
/// 
