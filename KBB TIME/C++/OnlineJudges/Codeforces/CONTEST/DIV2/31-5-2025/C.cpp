///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

kien array_gcd(const vector<kien>& a) {
    kien g = a[0];
    for (size_t i = 1; i < a.size(); ++i)
        g = __gcd(g, a[i]);
    return g;
}

int count_equal(const vector<kien>& a, kien g) {
    return count(a.begin(), a.end(), g);
}


int bfs_gcd_steps(const vector<kien>& unique_vals, kien target) {
    unordered_map<kien, int> dist;
    queue<kien> q;

    for (kien val : unique_vals) {
        dist[val] = 0;
        q.push(val);
    }

    while (!q.empty()) {
        kien cur = q.front(); q.pop();
        if (cur == target) return dist[cur];

        for (kien next : unique_vals) {
            kien d = __gcd(cur, next);
            if (!dist.count(d)) {
                dist[d] = dist[cur] + 1;
                q.push(d);
            }
        }
    }

    return -1;
}

void check() {
    int n;
    cin >> n;
    vector<kien> a(n);
    for (auto& x : a) cin >> x;

    kien g = array_gcd(a);
    int equal_gcd = count_equal(a, g);
    if (equal_gcd > 0) {
        cout << (n - equal_gcd) << '\n';
        return;
    }

    set<kien> s(a.begin(), a.end()); 
    vector<kien> unique_vals(s.begin(), s.end());

    int steps = bfs_gcd_steps(unique_vals, g);
    int answer = steps + (n - 1); 
    cout << answer << '\n';
}

JAV() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        check();
    }

    return 0;
}
