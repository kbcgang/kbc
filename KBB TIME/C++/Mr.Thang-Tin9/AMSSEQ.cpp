#include <bits/stdc++.h>
using namespace std;
#define kien long long

const int MAX = 1e6 + 5;
int n, k;
kien a[MAX], dp[MAX];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];

    dp[0] = 0; // giả định bắt đầu từ trước vị trí 1
    for (int i = 1; i <= n; i++) {
        dp[i] = LLONG_MIN;
        for (int j = max(0, i - k); j < i; j++) {
            dp[i] = max(dp[i], dp[j] + a[i]);
        }
    }

    cout << dp[n];
}
