/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
const int MAXN = 200000 + 5;
kien a[MAXN];
int lft[MAXN], rgt[MAXN];
bool dp[MAXN];

struct KBB {
    int i;
    kien sum;
    bool operator<(const KBB& o) const {
        return sum < o.sum;  
    }
};

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[i] = true;
    }
    if (n == 1) {
        cout << a[1] << "\n";
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        lft[i] = (i == 1 ? n : i-1);
        rgt[i] = (i == n ? 1 : i+1);
    }

    priority_queue<KBB> pq;
    auto pushKBB = [&](int i) {
        pq.push({i, a[lft[i]] + a[rgt[i]]});
    };
    for (int i = 1; i <= n; i++) pushKBB(i);
    int dem = n;
    while (dem > 1) {
        auto cur = pq.top(); pq.pop();
        int i = cur.i;
        int j = lft[i], k = rgt[i];
        if (!dp[i] || !dp[j] || !dp[k]) 
            continue;
        kien realSum = a[j] + a[k];
        if (realSum != cur.sum) {
            pq.push({i, realSum});
            continue;
        }
        a[i] = realSum;
        dp[j] = dp[k] = false;
        dem -= 2;
        int L = lft[j], R = rgt[k];
        lft[i] = L;   rgt[i] = R;
        rgt[L] = i;   lft[R] = i;
        pushKBB(i);
    }

    for (int i = 1; i <= n; i++) {
        if (dp[i]) {
            cout << a[i] << "\n";
            break;
        }
    }
    return 0;
}

