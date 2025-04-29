/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, h[1000000];
kien maxx, minn, vtr, ans, l, r;
kien u ,v, s, t;
vector <int> dp[Million];
bool visit[Million];

bool ktr(int mid)
{
    queue <int> q;
    for (int i = 1; i <= n; i++)
    {
        visit[i] = false;
    }
    visit[s] = true;
    q.push(s);
    while (!q.empty())
    {
        int U = q.front();
        q.pop();
        if (U == t)
        {
            return true;
        }
        for (int i = 0; i < dp[U].size(); i++)
        {
            int V = dp[U][i];
            if (visit[V] == false and abs(h[U] - h[V]) <= mid)
            {
                visit[V] = true;
                q.push(V);
            }
        }
    }
    return false;
}

int tknp()
{
    int l = 1, r = *max_element(h + 1, h + 1 + n);
    int mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid))
        {
            r = mid - 1;
            kq = mid;
        }
        else {
            l = mid + 1;
        }
    }
    return kq;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> s >> t;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        dp[u].push_back(v);
        dp[v].push_back(u);
    }
    cout << tknp();
}
