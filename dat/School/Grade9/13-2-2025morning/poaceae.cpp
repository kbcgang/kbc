#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, k, t, dp[N], a[N];
main()
{
    // freopen("POACEAE.inp", "r", stdin);
    // freopen("POACEAE.out", "w", stdout);
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int gt;
    cin >> gt;
    while (gt--)
    {
        cin >> n >> k >> t;
        for (int i = 1; i <= n; i++)
            cin >>a[i];
        deque<int> dq1, dq2;
        fill(dp, dp + N, -1), dp[0] = 0;
        int j = 0;
        for (int i = 1; i <= n; i++)
        {
            /// duy tri min max
            while (dq1.size() && a[dq1.back()] > a[i])
                dq1.pop_back();
            while (dq2.size() && a[dq2.back()] < a[i])
                dq2.pop_back();
            dq1.push_back(i), dq2.push_back(i);
            /// cap nhat lai doan [j..i] neu doan ko thoa man
            while (j < i && (a[dq2.front()] - a[dq1.front()] > t || dp[j] == -1))
            {
                j++;
                while (dq1.size() && dq1.front() <= j)
                    dq1.pop_front();
                while (dq1.size() && dq2.front() <= j)
                    dq2.pop_front();
            }
            // Neu tim thay j nho nhat thoa man thi cap nhat dp[i]
            if (i - j >= k && dp[j] > -1)
                dp[i] = dp[j] + 1;
            // cout << i << " " << j << " " << dp[j] << "\n";
        }
        cout << dp[n] << "\n";
    }
    return 0;
}