///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    priority_queue<int, vector<int>, greater<int>> minn;
    for (int i = 0; i < n; i++)
    {
        minn.push(A[i]);
    }

    vector<int> dp1;
    while (!minn.empty())
    {
        dp1.push_back(minn.top());
        minn.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout << dp1[i] << " ";
    }
    cout << "\n";

    priority_queue<int> a;
    for (int i = 0; i < n; i++)
    {
        a.push(A[i]);
    }
    vector<int> dp;
    while (!a.empty())
    {
        dp.push_back(a.top());
        a.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout << dp[i] << " ";
    }
    cout << "\n";

    return 0;
}
