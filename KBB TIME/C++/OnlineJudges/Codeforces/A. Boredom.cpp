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
kien n,k,m, a[1000000], sum;
kien minn, vtr,ans,maxx ,l,r, dp[1000000];
unordered_map <int, int> pp;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    maxx = INT_MIN;
    for (int i = 1 ; i <= n; i++)
    {
        cin >> a[i];
        pp[a[i]]++; 
        maxx = max(a[i], maxx);
    }
    dp[1] = pp[a[1]];
    for (int i = 2; i <= maxx; i++)
    {
        dp[i] = (dp[i-1], pp[i] * i + dp[i - 2]);
    }
    cout << *max_element(dp + 1, dp + 1 + maxx);
}
