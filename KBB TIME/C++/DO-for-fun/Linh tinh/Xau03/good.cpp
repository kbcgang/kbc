#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien n, sum, a[1000];

main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum - 1;
}
