/// Hãy làm Sư tử, đừng làm nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define MOD 1000000007
kien a[105], f[105], n, m ,l;
pair<int, kien> dp[105][8][8];
bool ktr[8][8], check[8][8];

JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = (a[i] ? (1 << (a[i] - 1)) : 0);
    }
    for(int a = 0; a < 8; a++) {
        for(int b = 0; b < 8; b++) {
                ktr[a][b] = (((a << 2)&b) == 0 && ((a >> 2)&b) == 0);
                check[a][b] = (((a << 1)&b) == 0 && ((a >> 1)&b) == 0);
            }
    }
    for(int i = 0; i <= n; i++) {
        for(int a = 0; a < 8; a++) {
            for(int b = 0; b < 8; b++) {
                dp[i][a][b] = {-1, 0};
            }
        }
    }
    dp[0][0][0] = {0, 1};
    int bc[8] = {0};
    for(int i = 1; i < 8; i++) {
        bc[i] = bc[i >> 1] + (i & 1);
    }
    for(int i = 1; i <= n; i++) {
        for(int cur = 0; cur < 8; cur++) {
            if (cur & f[i]) 
            	continue;
            for(int truoc = 0; truoc < 8; truoc++) {
                if(i == 1 && truoc) continue;
                if(i > 1 && !ktr[cur][truoc]) continue;
                for(int pp = 0; pp < 8; pp++)
                {
                    if(i <= 2 && pp) continue;
                    if(i > 2 && !check[cur][pp]) continue;
                    auto pr = dp[i - 1][truoc][pp];
                    if(pr.first < 0) continue;
                    int nv = pr.first + bc[cur];
                    auto &v = dp[i][cur][truoc];
                    if(nv > v.first)
                    {
                        v.first = nv;
                        v.second = pr.second;
                    }
                    else if(nv == v.first)
                    {
                        v.second = (v.second + pr.second) % MOD;
                    }
                }
            }
        }
    }
    for(int a = 0; a < 8; a++) {
        for(int b = 0; b < 8; b++) {
            auto &st = dp[n][a][b];
            if(st.first < 0) 
                continue;
            if(st.first > m)
            {
                m = st.first;
                l = st.second;
            }
            else if(st.first == m)
            {
                l = (l + st.second) % MOD;
            }
        }
    }
    cout << m << " " << l;
    return 0;
}
