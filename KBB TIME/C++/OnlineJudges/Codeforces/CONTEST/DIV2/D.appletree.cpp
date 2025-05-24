/// Hãy làm Sư tử, đừng làm Nai.
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
vector<vector<kien>> graph;
vector<char> is_removed;
vector<kien> visit_id, dist_1, par_1, dist_2, par_2;
kien bfs_counter;

struct TreePath {
    kien depth, from, to;
    vector<kien> nodes;
};

kien bfs_far(kien src, vector<kien> &dist) {
    bfs_counter++;
    queue<kien> q;
    q.push(src);
    dist[src] = 0;
    visit_id[src] = bfs_counter;

    kien far_node = src, max_d = 0;

    while (!q.empty()) {
        kien curr = q.front(); q.pop();
        for (kien next : graph[curr]) {
            if (!is_removed[next] && visit_id[next] != bfs_counter) {
                visit_id[next] = bfs_counter;
                dist[next] = dist[curr] + 1;
                q.push(next);
                if (dist[next] > max_d) {
                    max_d = dist[next];
                    far_node = next;
                }
            }
        }
    }
    return far_node;
}

kien bfs_path(kien src, vector<kien> &nodes_in_comp, vector<kien> &dist, vector<kien> &par) {
    bfs_counter++;
    queue<kien> q;
    q.push(src);
    dist[src] = 0;
    par[src] = -1;
    visit_id[src] = bfs_counter;
    nodes_in_comp.clear();
    nodes_in_comp.push_back(src);

    kien far_node = src, max_d = 0;

    while (!q.empty()) {
        kien curr = q.front(); q.pop();
        for (kien next : graph[curr]) {
            if (!is_removed[next] && visit_id[next] != bfs_counter) {
                visit_id[next] = bfs_counter;
                dist[next] = dist[curr] + 1;
                par[next] = curr;
                q.push(next);
                nodes_in_comp.push_back(next);
                if (dist[next] > max_d) {
                    max_d = dist[next];
                    far_node = next;
                }
            }
        }
    }
    return far_node;
}

TreePath analyze_tree(kien start) {
    vector<kien> component_nodes;
    kien u = bfs_far(start, dist_1);
    kien v = bfs_path(u, component_nodes, dist_1, par_1);
    bfs_far(v, dist_2);

    kien pick = 0;
    kien max_depth = dist_1[v];

    for (kien node : component_nodes) {
        if (dist_1[node] == max_depth || dist_2[node] == max_depth) {
            pick = max(pick, node);
        }
    }

    bfs_counter++;
    queue<kien> q;
    q.push(pick);
    dist_1[pick] = 0;
    par_2[pick] = -1;
    visit_id[pick] = bfs_counter;

    kien final_node = pick, final_d = 0;

    while (!q.empty()) {
        kien curr = q.front(); q.pop();
        for (kien next : graph[curr]) {
            if (!is_removed[next] && visit_id[next] != bfs_counter) {
                visit_id[next] = bfs_counter;
                dist_1[next] = dist_1[curr] + 1;
                par_2[next] = curr;
                q.push(next);
                if (dist_1[next] > final_d || (dist_1[next] == final_d && next > final_node)) {
                    final_d = dist_1[next];
                    final_node = next;
                }
            }
        }
    }

    TreePath result;
    result.depth = final_d + 1;
    result.from = pick;
    result.to = final_node;

    kien trace = final_node;
    while (trace != -1) {
        result.nodes.push_back(trace);
        trace = par_2[trace];
    }

    return result;
}

void process_case() {
    kien n; cin >> n;
    graph.assign(n + 1, {});
    for (kien i = 1; i < n; i++) {
        kien u, v; cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }   

    is_removed.assign(n + 1, 0);
    visit_id.assign(n + 1, 0);
    dist_1.assign(n + 1, 0);
    dist_2.assign(n + 1, 0);
    par_1.assign(n + 1, 0);
    par_2.assign(n + 1, 0);
    bfs_counter = 0;

    vector<kien> output;
    output.reserve(n * 3);

    TreePath base = analyze_tree(1);
    output.push_back(base.depth);
    output.push_back(base.from);
    output.push_back(base.to);
    for (kien x : base.nodes) is_removed[x] = 1;

    priority_queue<TreePath, vector<TreePath>, function<bool(TreePath, TreePath)>> pq(
        [](TreePath a, TreePath b) {
            if (a.depth != b.depth) return a.depth < b.depth;
            if (a.from != b.from) return a.from < b.from;
            return a.to < b.to;
        }
    );

    for (kien x : base.nodes) {
        for (kien y : graph[x]) {
            if (!is_removed[y]) pq.push(analyze_tree(y));
        }
    }

    while (!pq.empty()) {
        TreePath tp = pq.top(); pq.pop();
        output.push_back(tp.depth);
        output.push_back(tp.from);
        output.push_back(tp.to);
        for (kien x : tp.nodes) {
            is_removed[x] = 1;
            for (kien y : graph[x]) {
                if (!is_removed[y]) pq.push(analyze_tree(y));
            }
        }
    }

    for (kien x : output) cout << x << " ";
    cout << "\n";
}

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    kien t; cin >> t;
    while (t--) 
    {
        process_case();
    }
    return 0;
}
