/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, c[NT + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n; /// n is number of passenger in supermarket 
    /// first, we need to call dp[i] is min chose for min money from 1 to i
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
        dp[i] = INT_MAX;
    }
    for (int i = 1; i <= n - 2; i++) {
        cin >> c[i];
    }
    dp[1] = a[1]; /// people only in first floor need to buy all this floor
    dp[2] = a[1] + a[2]; /// if people go to second floor people will go by foot and buy all
    for (int i = 3; i <= n; i++) {
        dp[i] = min(a[i] + dp[i-2] + c[i-2], a[i] + dp[i-1]);
        /// if people go to i + 2 floor people need to pay c[i] to use elevator
        /// if people go to i + 1 floor people need to use dp[i-1] because need to buy i floor to come in this floor

    }
    cout << dp[n];
}
