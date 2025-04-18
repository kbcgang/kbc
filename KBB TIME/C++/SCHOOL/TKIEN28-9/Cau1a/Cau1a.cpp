///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];
string s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin , s);
    cin >> k;
    for (int i = 0; i < s.size(); i++)
    {
        f[s[i]]++;
    }
    for (int i = 0; i < s.size() - k; i++)
    {
        dp[i] = max_element(f[i], f[i + k]) - min_element(f[i], f[i+k]);
        ans = max(ans, dp[i]);
    }
    for (int i = 0; i < s.size() - k; i++)
    {
        if (ans == dp[i])
        {
            dem++;
        }
    }
    cout << dem;
}
