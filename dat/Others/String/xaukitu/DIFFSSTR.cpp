/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
int n;
string s;
int ans = 102;
int pos[257];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> s;
    s = ' ' + s;
    for (int i = 1; i <= n; i++)
    {
        if (pos[s[i]] > 0)
        {
            ans = min(ans, i - pos[s[i]]);
        }
        pos[s[i]] = i;
    }
    cout<<ans;
}