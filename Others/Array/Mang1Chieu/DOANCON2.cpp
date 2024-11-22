/// Suck Kiên's brain is very good to your brain
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n, a[1000005], ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int m = 1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // cout<<a[0]/-a[0];
    for (int i = 1; i < n; i++)
    {
        if ((a[i]>=0&&a[i-1]>=0)||(a[i]<=0&&a[i-1]<=0))
        {
            ans = max(ans, m);
            m = 0;
        }
        m++;
    }
    ans=max(ans,m);
    cout << ans;
}