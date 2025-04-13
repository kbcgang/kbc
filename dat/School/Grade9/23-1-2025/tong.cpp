#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100005];
int n;
ll ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
        a[i] = a[i - 1] + a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0)ans++;
        int l = lower_bound(a + i + 1, a + n, a[i]) - a;
        int r = upper_bound(a + i + 1, a + n, a[i]) - a;
        ans += r - l;
    }
    cout << ans;
}