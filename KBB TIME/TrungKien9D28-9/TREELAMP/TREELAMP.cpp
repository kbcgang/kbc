#include <bits/stdc++.h>
using namespace std;

#define kien long long

int main() {
    if(fopen("TREELAMP.inp", "r")) {
        freopen("TREELAMP.inp", "r", stdin);
        freopen("TREELAMP.out", "w", stdout);
    }
    int n;
    cin >> n;
    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    vector<int> dp;

    for (int i = 0; i < n; i++) {
        auto it = lower_bound(dp.begin(), dp.end(), h[i]);

        if (it == dp.end()) {
            dp.push_back(h[i]);
        } else {
            *it = h[i];
        }
    }

    cout << dp.size() << endl;

    return 0;
}
