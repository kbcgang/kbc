/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int t, n, a[10005], b[10005], s[2405];
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);cin>>t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            s[a[i]]++;
            if(b[i]>=a[i])
            s[b[i]]--;
        }
        int res = 0, ans = 0;
        for (int i = 0; i <= 2400; i++)
        {
            res += s[i];
            ans = max(ans, res);
            s[i] = 0;
        }cout<<ans<<"\n";
    }
}