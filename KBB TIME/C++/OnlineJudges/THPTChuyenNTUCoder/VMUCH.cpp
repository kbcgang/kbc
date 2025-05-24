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
kien n, k, m, dem, f[Million + 5];
kien maxx, minn, vtr, ans, l, r;
vector<pair<int, int>> dp[100][100];
kien l1, r1;

struct kbb
{
    string s;
};
kbb a[1000];
int visited [100][100];

void bfs()
{
    queue <pair<int, int>> q;
    q.push({l, r});
    visited[l][r] = 0;
    while (!q.empty())
    {
        pair <int, int> u = q.front();
        int u1 = u.first;
        int u2 = u.second;
        if (a[u1].s[u2] == 'B')
        {
            break;
        }
        q.pop();
        for (int i = 0; i < dp[u1][u2].size(); i++)
        {
            pair <int, int> v = dp[u1][u2][i];
            int v1 = v.first;
            int v2 = v.second;
            visited[v1][v2] = visited[u1][u2] + 1;
            q.push({v1, v2});
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].s;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i >= 1 and a[i-1].s[j] !=  '*')
            {
                dp[i][j].push_back({i - 1, j});
            }
            if (j >= 1 and a[i].s[j-1] != '*')
            {
                dp[i][j].push_back({i , j - 1});
            }
            if (i < n and a[i+1].s[j] != '*')
            {
                dp[i][j].push_back({i + 1, j});
            }
            if (j < m and a[i].s[j + 1] != '*')
            {
                dp[i][j].push_back({i, j + 1});
            }
            if (a[i].s[j] == 'C')
            {
                l = i;
                r = j;
            }
            if (a[i].s[j] == 'B')
            {
                l1 = i;
                r1 = j;
            }
        }
    }
    bfs();
    cout << visited[l1][r1];
}
