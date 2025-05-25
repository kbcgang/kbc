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
string s;
int n, K, dp[100005], sum;
kien dem;

int mod(string s, int K)
{
    if(K == 0)
        return 0;
    kien du = 0;
    for(int vt = 0; vt < s.size(); vt++)
    {
        int so = s[vt] - '0';
        du = (du * 10 + so) % K;
    }
    return (int)du;
}

JAV()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> K;
    dp[0] = 1;
    for(int vtr = 0; vtr < n; vtr++)
    {
        cin >> s;
        int du = mod(s, K);
        sum = (sum + du) % K;
        if(sum < 0)
            sum += K;
        dem += dp[sum];
        dp[sum]++;
    }
    cout << dem << "\n";
    return 0;
}
