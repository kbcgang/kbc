#include <bits/stdc++.h>
using namespace std;
#define JAV main
JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    long long res = 0;
    for (int i = 0; i < n; i += k)
    {
        res += (a[i] - 1) * 2;
    }
    cout << res;
    return 0;
}