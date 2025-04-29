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
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans;
kien visit[2 * Million];
kien visit1[2 * Million];

void bfs()
{
    queue <int> q;
    q.push(n);
    vtr = n;
    visit[n] = 0;
    while (n < m)
    {
        n *= 2;
        ans++;
    }
    ans += (n - m);
    n = vtr;
    for (int i = 1; i < n; i++)
    {
        q.push(i);
        visit[i] = n - i;
    }
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        while (u < m)
        {
            u *= 2;
            visit[u] = visit[u / 2] + 1;
        }
        ans = min(ans, visit[u] + (u - m));
    }
    cout << ans;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    bfs();
    
}
