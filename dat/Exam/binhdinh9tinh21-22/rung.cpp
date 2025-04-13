/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <climits>
#include <queue>
#include <deque>
#include <algorithm>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
bool d[55][55];
pair<int, int> p[55][55];
deque<pair<int, int>> q;
int x, y, n;
int dem[55][55];
int a[55][55], s;
void build()
{
    for (int i = 0; i <= n + 1; i++)
        a[i][n + 1] = a[n + 1][i] = a[0][i] = a[i][0] = -1;
}
void get(int x, int y)
{
    if (!d[x + 1][y] && a[x + 1][y] == s)
    {
        q.push_back({x + 1, y});
        d[x + 1][y] = 1;
        p[x + 1][y] = {x, y};
        dem[x + 1][y] = dem[x][y] + 1;
    }
    if (!d[x - 1][y] && a[x - 1][y] == s)
    {
        q.push_back({x - 1, y});
        d[x - 1][y] = 1;
        p[x - 1][y] = {x, y};
        dem[x - 1][y] = dem[x][y] + 1;
    }
    if (!d[x][y + 1] && a[x][y + 1] == s)
    {
        q.push_back({x, y + 1});
        d[x][y + 1] = 1;
        p[x][y + 1] = {x, y};
        dem[x][y + 1] = dem[x][y] + 1;
    }
    if (!d[x][y - 1] && a[x][y - 1] == s)
    {
        q.push_back({x, y - 1});
        d[x][y - 1] = 1;
        p[x][y - 1] = {x, y};
        dem[x][y - 1] = dem[x][y] + 1;
    }
}
void bfs()
{
    q.push_back({x, y});
    while (!q.empty())
    {
        // for (auto i : q)
        //     cout << '('<<i.first<<','<<i.second<<')' << ' ';
        // cout<<'\n';
        int a = q.front().first;
        int b = q.front().second;
        q.pop_front();
        get(a, b);
    }
}
void res(int x, int y)
{
    if (p[x][y].first == 0)
    {
        cout << x << ' ' << y << '\n';
        return;
    }
    res(p[x][y].first, p[x][y].second);
    cout << x << ' ' << y << '\n';
}
void output(int x, int y)
{
    cout<<"1\n";
    cout << dem[x][y] << '\n';
    res(x, y);
}
void ChatGPT()
{
    x = 0, y = 0;
    int mi = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if(dem[1][i]>1) mi=min(mi,dem[1][i]);
        if(dem[i][1]>1) mi=min(mi,dem[i][1]);
        if(dem[i][n]>1) mi=min(mi,dem[i][n]);
        if(dem[n][i]>1) mi=min(mi,dem[n][i]);
    }
    for (int i = 1; i <= n; i++)
        if (mi == dem[i][n])
        {
            x = i, y = n;
        }
        else if (mi == dem[n][i])
        {
            x = n, y = i;
        }
        else if (mi == dem[1][i])
        {
            x = 1, y = i;
        }
        else if (mi == dem[i][1])
        {
            x = i, y = 1;
        }
    if (x == 0)
        cout << 0;
    else
        output(x, y);
}
kien()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    cin >> x >> y;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    s = a[x][y];
    d[x][y]=dem[x][y]=1;
    build();
    // for (int i = 0; i <= n + 1; i++)
    // {
    //     for (int j = 0; j <= n + 1; j++)
    //         cout << a[i][j] << ' ';
    //     cout << '\n';
    // }
    bfs();
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //         cout<<'('<<p[i][j].first<<','<<p[i][j].second<<')'<<' ';
    //     cout<<'\n';
    // }
    ChatGPT();
}