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
kien n,k,m,dem, a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

int tongcs(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += (n % 10)*(n % 10);
        n /= 10;
    }
    return sum;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        if (tongcs(i) % 2 == 0)
        {
            ans++;
        }
    }
    cout << ans;
}