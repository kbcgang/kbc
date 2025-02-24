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
int n, a[1000], maxx;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxx += a[i]; 
    }
    bool dp[maxx + 1] = {false};
    dp[0] = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = maxx; j >= a[i]; j--)
        {
            if (dp[j - a[i]])
            {
                dp[j] = true;
            }
        }
    }
    for (int i = 1; i <= maxx; i++)
    {
        if (dp[i])
        {
            cout << i << " ";
        }
    }
}
