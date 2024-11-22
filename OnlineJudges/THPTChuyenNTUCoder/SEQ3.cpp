#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[1000005], t[1000005], b[1000005],c[1000005], ans = INT_MIN;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        t[i] = t[i-1]+a[i];
    }
    b[0]=t[0];
    c[n-1]=t[n-1];
    for(int i=1;i<n-1;i++)
        b[i]=min(b[i-1],t[i]);
    for(int i=n-2;i>=1;i--)
        c[i]=max(c[i+1],t[i]);
    for (int i = 1; i < n; i++)
        ans = max(ans, c[i]-b[i-1]);
    cout << ans;
}