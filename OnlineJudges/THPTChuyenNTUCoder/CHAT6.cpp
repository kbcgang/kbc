#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, x, dem[1000007], ans = 0, a[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    for (int i = 0;i<n;i++)
    {
        if (x - a[i] >= 0) {
            ans += dem[x - a[i]];
        }
        dem[a[i]]++;
    }
    cout << ans;
}