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
        vector<kien> h(n);
        for (int i = 0; i < n; ++i) cin >> h[i];
        kien ans = 0;
        for (kien x : h) ans += x;
        ans -= (n - 1);
        kien a = 0, b = 0;
        for (int i = 1; i < n; ++i) {
            kien w = min((long long)i, h[i]) - 2;
            if (w < 0) w = 0;
            kien c = max(b, a + w);
            a = b;
            b = c;
        }

        cout << (ans - b) << "\n";
    }
    return 0;
}
