/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆

#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000

// Implement theo đúng cách bạn mô tả:
// - Query type 1: kiểm tra cạnh (g1,g2). Nếu không là cầu -> YES.
//   Nếu là cầu -> contract 2-edge-cc thành bridge-tree, kiểm tra A và B có cùng phía sau khi xóa cầu không.
// - Query type 2: kiểm tra đỉnh C là articulation không. Nếu không -> YES.
//   Nếu là articulation -> tìm child subtree chứa A (nếu có) và B (nếu có) bằng kth-ancestor + low[], so sánh.
// - Dùng sparse table (binary lifting) cho kth ancestor và LCA trên bridge-tree.

const int MAXN = 200005;
const int MAXM = 500005;
const int LOG = 20;

int n, m;
vector<pair<int,int>> adj[MAXN]; // (to, edgeId)
int U[MAXM], V[MAXM];

int tin[MAXN], low[MAXN], tout[MAXN], timer1;
int parentDFS[MAXN], depthDFS[MAXN];
int upOrig[LOG][MAXN];
bool isBridge[MAXM];

void dfs_bridges(int u, int peid) {
    tin[u] = low[u] = ++timer1;
    for (auto pr : adj[u]) {
        int v = pr.first, id = pr.second;
        if (id == peid) continue;
        if (tin[v] == 0) {
            parentDFS[v] = u;
            depthDFS[v] = depthDFS[u] + 1;
            upOrig[0][v] = u;
            dfs_bridges(v, id);
            low[u] = min(low[u], low[v]);
            if (low[v] > tin[u]) {
                isBridge[id] = true;
            }
        } else {
            low[u] = min(low[u], tin[v]);
        }
    }
    tout[u] = ++timer1;
}

int compId[MAXN], compCnt;

void build_components() {
    for (int i = 1; i <= n; ++i) compId[i] = 0;
    compCnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (compId[i]) continue;
        ++compCnt;
        stack<int> st; st.push(i); compId[i] = compCnt;
        while (!st.empty()) {
            int u = st.top(); st.pop();
            for (auto pr : adj[u]) {
                int v = pr.first, id = pr.second;
                if (isBridge[id]) continue;
                if (!compId[v]) {
                    compId[v] = compCnt;
                    st.push(v);
                }
            }
        }
    }
}

vector<int> treeAdj[MAXN]; // bridge-tree on components
int tinC[MAXN], toutC[MAXN], timer2, depthC[MAXN];
int upC[LOG][MAXN];

void dfs_comp(int u, int p) {
    tinC[u] = ++timer2;
    upC[0][u] = p;
    for (int k = 1; k < LOG; ++k) {
        if (upC[k-1][u] == -1) upC[k][u] = -1;
        else upC[k][u] = upC[k-1][ upC[k-1][u] ];
    }
    for (int v : treeAdj[u]) {
        if (v == p) continue;
        depthC[v] = depthC[u] + 1;
        dfs_comp(v, u);
    }
    toutC[u] = ++timer2;
}

bool isAncestorC(int a, int b) { // a ancestor of b in comp tree
    return (tinC[a] <= tinC[b] && toutC[b] <= toutC[a]);
}

int kthAncestorOrig(int u, int k) {
    for (int i = 0; i < LOG; ++i) {
        if (k & (1 << i)) {
            u = upOrig[i][u];
            if (u == -1) return -1;
        }
    }
    return u;
}

bool isAncestorOrig(int a, int b) {
    return (tin[a] <= tin[b] && tout[b] <= tout[a]);
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) adj[i].clear();
    for (int i = 1; i <= m; ++i) {
        int u, v; cin >> u >> v;
        U[i] = u; V[i] = v;
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
        isBridge[i] = false;
    }
    // find bridges & build original DFS forest
    for (int i = 1; i <= n; ++i) {
        tin[i] = low[i] = tout[i] = 0;
        parentDFS[i] = -1;
        depthDFS[i] = 0;
        for (int k = 0; k < LOG; ++k) upOrig[k][i] = -1;
    }
    timer1 = 0;
    for (int i = 1; i <= n; ++i) {
        if (tin[i] == 0) {
            upOrig[0][i] = -1;
            parentDFS[i] = -1;
            depthDFS[i] = 0;
            dfs_bridges(i, 0);
        }
    }

    // build upOrig sparse table for kth ancestor
    for (int k = 1; k < LOG; ++k) {
        for (int v = 1; v <= n; ++v) {
            if (upOrig[k-1][v] == -1) upOrig[k][v] = -1;
            else upOrig[k][v] = upOrig[k-1][ upOrig[k-1][v] ];
        }
    }

    // build components ignoring bridges
    build_components();

    // build bridge-tree
    for (int i = 1; i <= compCnt; ++i) treeAdj[i].clear();
    // to avoid duplicate edges, use set or push both and handle duplicates in dfs
    for (int id = 1; id <= m; ++id) {
        int u = U[id], v = V[id];
        int cu = compId[u], cv = compId[v];
        if (cu != cv) {
            treeAdj[cu].push_back(cv);
            treeAdj[cv].push_back(cu);
        }
    }

    // preprocess bridge-tree
    for (int i = 1; i <= compCnt; ++i) {
        tinC[i] = toutC[i] = 0;
        depthC[i] = 0;
        for (int k = 0; k < LOG; ++k) upC[k][i] = -1;
    }
    timer2 = 0;
    for (int i = 1; i <= compCnt; ++i) if (tinC[i] == 0) dfs_comp(i, -1);

    // articulation points detection using bridge-DFS info
    vector<char> isArt(n+1, 0);
    vector<int> childCnt(n+1, 0);
    for (int v = 1; v <= n; ++v) {
        int p = parentDFS[v];
        if (p != -1) childCnt[p]++;
    }
    for (int u = 1; u <= n; ++u) {
        if (parentDFS[u] == -1) {
            if (childCnt[u] >= 2) isArt[u] = 1;
        } else {
            for (auto pr : adj[u]) {
                int v = pr.first;
                if (parentDFS[v] == u) {
                    if (low[v] >= tin[u]) isArt[u] = 1;
                }
            }
        }
    }

    // build map from unordered pair to vector of edge ids (to find edge between g1,g2 quickly)
    unordered_map<long long, vector<int>> edgeMap;
    edgeMap.reserve(m * 2);
    auto key = [&](int a, int b)->long long {
        if (a > b) swap(a,b);
        return ( (long long)a << 32 ) ^ (long long)b;
    };
    for (int id = 1; id <= m; ++id) {
        edgeMap[key(U[id], V[id])].push_back(id);
    }

    int q; cin >> q;
    while (q--) {
        int t; cin >> t;
        if (t == 1) {
            int A,B,g1,g2; cin >> A >> B >> g1 >> g2;
            if (A == B) { cout << "yes\n"; continue; }
            long long k = key(g1,g2);
            auto it = edgeMap.find(k);
            if (it == edgeMap.end()) {
                // edge doesn't exist -> can't block path
                cout << "yes\n";
                continue;
            }
            // if there are >=2 parallel edges, then removing a single one won't disconnect -> yes
            vector<int> &ids = it->second;
            if (ids.size() >= 2) { cout << "yes\n"; continue; }
            int eid = ids[0];
            if (!isBridge[eid]) { cout << "yes\n"; continue; }
            // it's a bridge: check components
            int ca = compId[A], cb = compId[B];
            int cu = compId[g1], cv = compId[g2];
            // find which comp is deeper in bridge-tree
            int deeper = cu, other = cv;
            if (depthC[cu] < depthC[cv]) { deeper = cv; other = cu; }
            // after removing edge (cu-cv), subtree rooted at deeper (if the edge indeed connects deeper to parent) is separated
            bool inA = isAncestorC(deeper, ca);
            bool inB = isAncestorC(deeper, cb);
            if (inA == inB) cout << "yes\n"; else cout << "no\n";
        } else {
            int A,B,C; cin >> A >> B >> C;
            if (A == B) { cout << "yes\n"; continue; }
            if (C == A || C == B) { cout << "no\n"; continue; }
            if (!isArt[C]) { cout << "yes\n"; continue; }
            auto getSide = [&](int X)->int {
                if (!isAncestorOrig(C, X)) return 0; // not in C's subtree in DFS forest -> "above" side
                int diff = depthDFS[X] - depthDFS[C] - 1;
                int child = kthAncestorOrig(X, diff);
                if (child == -1) return 0;
                if (low[child] >= tin[C]) return child; else return 0;
            };
            int sA = getSide(A);
            int sB = getSide(B);
            if (sA == sB) cout << "yes\n"; else cout << "no\n";
        }
    }
    return 0;
}
