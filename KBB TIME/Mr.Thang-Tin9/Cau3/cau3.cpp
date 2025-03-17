#include <bits/stdc++.h>
using namespace std;
int n, q, a[100005], f[100005], u, v;
void sub1() {
    int minn = INT_MAX;
    for(int i = u; i <= v; i++) {
        int x = f[i] - f[u - 1], y = (f[v] - f[i]);
        minn = min(minn, abs(x - y));
        // cout << x << ' ' << y << ' ' << abs(x - y) << '\n';
    }
    cout << minn << '\n';
}
void sub2() {
    int minn = INT_MAX;
    int l = u, r = v;
    while(l <= r) {
        int mid = (l + r) / 2;
        int x = f[mid] - f[u - 1], y = (f[v] - f[mid]);
        minn = min(minn, abs(x - y));
        if(x < y)
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << minn << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    while(q--) {
        cin >> u >> v;
        sub2();
    }
}
/*
5 3
10 20 30 40 50
10 30 60 100 150
*/
