/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 100000
#define NT 10000000
#define MOD 1000000007
kien x, y, n, s, t, vtr, vtr1;
vector <int> dp[Million];
kien visit[Million], ans;

void bfs()
{
    for (int i = 1; i <= n; i++)
    {
        visit[i] = -1;
    }
    visit[s] = 0;
    queue <int> q;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        cout << u << " ";
        q.pop();
        if (u == t)
        {
            cout << visit[t];
            exit(0);
        }
        else if (u > t)
        {
            vtr = u - y;
            if (visit[vtr] == -1)
            {
                q.push(vtr);
                visit[vtr] = visit[u] + 1;
            }
            while (vtr - y >= 1)
            {
                vtr -= y;
                if (visit[vtr] == -1) {
                    visit[vtr] = visit[vtr + y] + 1;
                    q.push(vtr);
                }
            }
        }
        else if (u < t)
        {
            vtr1 = u + x;
            if (visit[vtr1] == -1)
            {
                q.push(vtr1);
                visit[vtr1] = visit[u] + 1;
            }
            while (vtr1 + x <= n)
            {
                vtr1 += x;
                if (visit[vtr1] == -1) {
                    visit[vtr1] = visit[vtr1 - x] + 1;
                    q.push(vtr1);
                }
            }
        }
    }
    cout << -1;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x >> y >> s >> t;
    bfs();   
    
}
