/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, tong, a[Million], f[Million];
bool dp[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin >> n;
    for (kien i = 0; i < n; i++) 
    {
        cin >> a[i];
        tong += a[i];
    }
    for (int i = 1; i <= tong; i++)
    {
        dp[i] = false;
    }
    dp[0] = true;
    for (kien i = 0; i < n; i++) 
    {
        for (kien s = tong; s >= 0; s--) 
        {
            if (dp[s]) dp[s + a[i]] = true;
        }
    }
    for (kien i = 1; i <= tong; i++) 
    {
        if (dp[i]) 
            f[i]++;
    }
    for (int i = 1; i <= Million; i++)
    {
        if (f[i] == 0)
        {
            cout << i;
            exit(0);
        }
    }
    cout << "\n";

    return 0;
}
    
