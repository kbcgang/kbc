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
int T, n;

struct KBB 
{
    int u, cha, doSau;
    kien sum, nhoNhat, lonNhat;
};

JAV() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    cin >> T;
    while (T--) 
    {
        cin >> n;
        vector<kien> a(n + 1);
        for (int i = 1; i <= n; ++i) 
        	cin >> a[i];
        vector<vector<int>> dp(n + 1);
        for (int i = 1, u, v; i < n; ++i) {
            cin >> u >> v;
            dp[u].push_back(v);
            dp[v].push_back(u);
        }
        vector<kien> ans(n + 1);
        vector<KBB> qq;
        qq.push_back({1, 0, 0, a[1], 0LL, 0LL});
        while (!qq.empty()) 
        {
            KBB k = qq.back();
            qq.pop_back();
            if (k.doSau % 2 == 0)
                ans[k.u] = k.sum - k.nhoNhat;
            else
                ans[k.u] = k.lonNhat - k.sum;
            kien minn = min(k.nhoNhat, k.sum);
            kien maxx = max(k.lonNhat, k.sum);
            for (int v : dp[k.u]) {
                if (v != k.cha) {
                    int deep = k.doSau + 1;
                    kien sumMoi = k.sum + ((deep % 2 == 0) ? a[v] : -a[v]);
                    qq.push_back({v, k.u, deep, sumMoi, minn, maxx});
                }
            }
        }

        for (int i = 1; i <= n; ++i)
            cout << ans[i] << (i == n ? '\n' : ' ');
    }
    return 0;
}
