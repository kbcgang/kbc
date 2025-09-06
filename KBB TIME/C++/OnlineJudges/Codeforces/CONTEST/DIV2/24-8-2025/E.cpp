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

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        static int ktrG[100005][2]; 
        vector<int> g[n+5];
        for (int i = 0; i < n-1; i++) {
            int u, v; 
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        auto do_path = [&](vector<pair<int,int>> &vtrOps){
            vector<int> deg(n+5);
            for (int i = 1; i <= n; i++) deg[i] = g[i].size();
            int start = 1;
            for (int i = 1; i <= n; i++) {
                if (deg[i] == 1) { start = i; break; }
            }
            int pre = 0, u = start;
            for (int i = 0; i < n; i++) {
                vtrOps.push_back({1,u});
                int nxt = 0;
                for (int v : g[u]) if (v != pre) { nxt = v; break; }
                pre = u; u = nxt;
                if (!u) break;
            }
        };

        if (n == 2) {
            cout << 2 << "\n";
            cout << 1 << " " << 1 << "\n";
            cout << 1 << " " << 2 << "\n";
            continue;
        }
        if (n == 3) {
            vector<pair<int,int>> vtrOps;
            do_path(vtrOps);
            cout << (int)vtrOps.size() << "\n";
            for (auto &e : vtrOps) cout << e.first << " " << e.second << "\n";
            continue;
        }

        bool ktrPath = true;
        for (int i = 1; i <= n; i++) {
            if ((int)g[i].size() > 2) { ktrPath = false; break; }
        }
        if (ktrPath) {
            vector<pair<int,int>> vtrOps;
            do_path(vtrOps);
            cout << (int)vtrOps.size() << "\n";
            for (auto &e : vtrOps) cout << e.first << " " << e.second << "\n";
            continue;
        }

        vector<int> vtrPar(n+5,0), vtrOrd; vtrOrd.push_back(1); vtrPar[1] = -1;
        for (int i = 0; i < (int)vtrOrd.size(); i++) {
            int u = vtrOrd[i];
            for (int v : g[u]) if (v != vtrPar[u]) vtrPar[v] = u, vtrOrd.push_back(v);
        }

        vector<vector<int>> vtrCh(n+5);
        for (int u = 2; u <= n; u++) vtrCh[vtrPar[u]].push_back(u);

        vector<kien> vtrNK(n+5,0), vtrK0(n+5,0), vtrK1(n+5,0);
        for (int i = n-1; i >= 0; i--) {
            int u = vtrOrd[i];
            kien sumNK = 0;
            for (int v : vtrCh[u]) sumNK += max(vtrNK[v], vtrK0[v]);
            vtrNK[u] = sumNK;

            kien base = 0, g1 = 0, g2 = 0;
            for (int v : vtrCh[u]) {
                base += vtrNK[v];
                kien d = vtrK1[v] - vtrNK[v];
                if (d > g1) { g2 = g1; g1 = d; }
                else if (d > g2) g2 = d;
            }
            vtrK1[u] = 1 + base + max(0LL,g1);
            vtrK0[u] = 1 + base + max(0LL,g1) + max(0LL,g2);
        }

        vector<int> vtrKeep(n+5,0);
        function<void(int,int,int)> dequy = [&](int u, int pk, int take){
            vtrKeep[u] = take;
            if (!take) {
                for (int v : vtrCh[u]) {
                    if (vtrK0[v] >= vtrNK[v]) dequy(v,0,1);
                    else dequy(v,0,0);
                }
            } else {
                vector<pair<kien,int>> vtrGain;
                for (int v : vtrCh[u]) vtrGain.push_back({vtrK1[v]-vtrNK[v],v});
                sort(vtrGain.rbegin(), vtrGain.rend());
                int need = pk ? 1 : 2, takecnt = 0;
                vector<int> vtrSel;
                for (auto q : vtrGain) {
                    if (q.first > 0 && takecnt < need) {
                        vtrSel.push_back(q.second); takecnt++;
                    }
                }
                int x = (int)vtrSel.size()>=1 ? vtrSel[0] : -1;
                int y = (int)vtrSel.size()>=2 ? vtrSel[1] : -1;
                for (int v : vtrCh[u]) {
                    if (v == x) { dequy(v,1,1); x = -1; }
                    else if (v == y) { dequy(v,1,1); y = -1; }
                    else dequy(v,1,0);
                }
            }
        };

        if (vtrK0[1] >= vtrNK[1]) dequy(1,0,1);
        else dequy(1,0,0);

        vector<int> inR, inS;
        for (int i = 1; i <= n; i++) {
            if (vtrKeep[i]) inR.push_back(i);
            else inS.push_back(i);
        }

        vector<pair<int,int>> vtrOps;
        for (int v : inS) { vtrOps.push_back({1,v}); vtrOps.push_back({2,v}); }

        vector<int> deg(n+5,0), vis(n+5,0);
        for (int u = 1; u <= n; u++) if (vtrKeep[u]) {
            for (int v : g[u]) if (vtrKeep[v]) deg[u]++;
        }
        for (int u = 1; u <= n; u++) if (vtrKeep[u] && deg[u]<=1 && !vis[u]) {
            int pre = 0, x = u;
            while (true) {
                vis[x] = 1;
                vtrOps.push_back({1,x});
                int nxt = 0;
                for (int y : g[x]) if (vtrKeep[y] && y != pre) { nxt = y; break; }
                if (!nxt) break;
                pre = x; x = nxt;
            }
        }

        kien limit = (5LL*n)/4;
        if ((kien)vtrOps.size() > limit) {
            vector<pair<int,int>> alt;
            do_path(alt);
            vtrOps = alt;
        }

        cout << (int)vtrOps.size() << "\n";
        for (auto &e : vtrOps) cout << e.first << " " << e.second << "\n";
    }
    return 0;
}
