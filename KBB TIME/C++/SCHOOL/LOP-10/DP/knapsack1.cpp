#include <bits/stdc++.h>
using namespace std;

void enter(int &n, int &W, vector<pair<int,int>> &items) {
    cin >> n >> W;
    items.resize(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> items[i].first >> items[i].second;
}

void solution(int n, int W, vector<pair<int,int>> &items) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= n; ++i) {
        int wt = items[i].first, val = items[i].second;
        for (int j = 0; j <= W; ++j) {
            dp[i][j] = dp[i-1][j];
            if (j >= wt)
                dp[i][j] = max(dp[i][j], dp[i-1][j-wt] + val);
        }
    }
    cout << dp[n][W] << "\n";
}

int main() {
    int n, W;
    vector<pair<int,int>> items;
    enter(n, W, items);
    solution(n, W, items);
    return 0;
}

