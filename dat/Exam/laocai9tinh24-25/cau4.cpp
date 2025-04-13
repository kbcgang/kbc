#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, p, l, r;
ll a[1000005], ma = LLONG_MIN;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] = a[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] - a[p] > ma)
        {
            l = p + 1;
            r = i;
            ma = a[i] - a[p];
        }
        if (a[i] < a[p])
            p = i;
    }
    cout << ma << "\n";
    for (; l <= r; l++)
        cout << a[l] - a[l - 1] << " ";
}