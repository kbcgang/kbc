/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int n, m;
char s[55][55];
int water[55][55];
int tg[55][55], ans;
pair<int,int> vtr;
const int INF = 1000000000;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        string x;
        cin >> x;
        for (int j = 1; j <= m; j++) {
            s[i][j] = x[j-1];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            water[i][j] = INF;
            tg[i][j] = -1;
        }
    }
    queue<pair<int,int>> q;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i][j] == '*') {
                water[i][j] = 0;
                q.push({i,j});
            } else if (s[i][j] == 'S') {
                vtr = {i,j};
            }
        }
    }
    int movei[4] = {1, 0, -1, 0};
    int movej[4] = {0, 1, 0, -1};
    while (!q.empty()) {
        auto p = q.front(); q.pop();
        int x = p.first;
        int y = p.second;
        for (int k = 0; k < 4; k++) {
            int nx = x + movei[k];
            int ny = y + movej[k];
            if (nx < 1 or nx > n or ny < 1 or ny > m) continue;
            if (s[nx][ny] == 'X' or s[nx][ny] == 'D') continue;
            if (water[nx][ny] > water[x][y] + 1) {
                water[nx][ny] = water[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    queue<pair<int,int>> qh;
    tg[vtr.first][vtr.second] = 0;
    qh.push(vtr);
    while (!qh.empty()) {
        auto p = qh.front(); qh.pop();
        int x = p.first;
        int y = p.second;
        if (s[x][y] == 'D') {
            ans = tg[x][y];
            break;
        }
        for (int k = 0; k < 4; k++) {
            int nx = x + movei[k];
            int ny = y + movej[k];
            if (nx < 1 or nx > n or ny < 1 or ny > m) continue;
            if (s[nx][ny] == 'X') continue; 
            if (tg[nx][ny] != -1) continue; 
            int arriveTime = tg[x][y] + 1;
            if (s[nx][ny] == 'D') {
                tg[nx][ny] = arriveTime;
                qh.push({nx, ny});
            } 
            else {
                if (water[nx][ny] > arriveTime) {
                    tg[nx][ny] = arriveTime;
                    qh.push({nx, ny});
                }
            }
        }
    }

    if (ans == 0) {
        cout << "KAKTUS\n";
    } else {
        cout << ans << '\n';
    }

    return 0;
}
