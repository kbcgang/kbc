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
const int MAXN = 205;
const kien INF = LLONG_MAX;
int t;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int a, b;
        kien x, y;
        cin >> a >> b >> x >> y;
        static kien dp[MAXN];
        for (int i = 0; i < MAXN; ++i) dp[i] = INF;
        priority_queue<
            pair<kien,int>,
            deque<pair<kien,int>>,
            greater<pair<kien,int>>
        > pq;
        dp[a] = 0;
        pq.push({0, a});
        while (!pq.empty()) {
            auto top = pq.top(); pq.pop();
            kien pp = top.first;
            int curr = top.second;
            if (pp > dp[curr]) continue; 
            if (curr == b) {
                cout << pp << '\n';
                break;
            }
            if (curr + 1 < MAXN && dp[curr+1] > pp + x) {
                dp[curr+1] = pp + x;
                pq.push({dp[curr+1], curr+1});
            }
            int xor1 = curr ^ 1;
            if (xor1 < MAXN && dp[xor1] > pp + y) {
                dp[xor1] = pp + y;
                pq.push({dp[xor1], xor1});
            }
        }

        if (dp[b] == INF) {
            cout << -1 << '\n';
        }
    }
    return 0;
}
