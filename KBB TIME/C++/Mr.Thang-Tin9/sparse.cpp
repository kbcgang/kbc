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

const int N = 505;
int a[N][N];
int st[N][N][10][10];
int log2_table[N];

void buildLog() {
    log2_table[1] = 0;
    for (int i = 2; i < N; ++i)
        log2_table[i] = log2_table[i / 2] + 1;
}

void buildST(int n, int m) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            st[i][j][0][0] = a[i][j];

    for (int x = 0; (1 << x) <= n; ++x) {
        for (int y = 0; (1 << y) <= m; ++y) {
            if (x == 0 && y == 0) continue;
            for (int i = 0; i + (1 << x) - 1 < n; ++i) {
                for (int j = 0; j + (1 << y) - 1 < m; ++j) {
                    if (x == 0) {
                        st[i][j][x][y] = min(st[i][j][x][y - 1], st[i][j + (1 << (y - 1))][x][y - 1]);
                    } else if (y == 0) {
                        st[i][j][x][y] = min(st[i][j][x - 1][y], st[i + (1 << (x - 1))][j][x - 1][y]);
                    } else {
                        st[i][j][x][y] = min({
                            st[i][j][x - 1][y - 1],
                            st[i + (1 << (x - 1))][j][x - 1][y - 1],
                            st[i][j + (1 << (y - 1))][x - 1][y - 1],
                            st[i + (1 << (x - 1))][j + (1 << (y - 1))][x - 1][y - 1]
                        });
                    }
                }
            }
        }
    }
}

int query(int x1, int y1, int x2, int y2) {
    int kx = log2_table[x2 - x1 + 1];
    int ky = log2_table[y2 - y1 + 1];

    return min({
        st[x1][y1][kx][ky],
        st[x2 - (1 << kx) + 1][y1][kx][ky],
        st[x1][y2 - (1 << ky) + 1][kx][ky],
        st[x2 - (1 << kx) + 1][y2 - (1 << ky) + 1][kx][ky]
    });
}

JAV() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    buildLog();

    int n, m, q;
    cin >> n >> m;
    cin >> q;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    buildST(n, m);
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        // nhớ -1 nếu input 1-indexed
        cout << query(x1, y1, x2, y2) << '\n';
    }

    return 0;
}
