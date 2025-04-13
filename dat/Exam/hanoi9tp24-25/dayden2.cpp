#include<bits/stdc++.h>  ///nhuthangbk@gmail.com =>2025
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int n, m, q, k, x[300005], p[300005], a[300005];
void sub1() {
    for(int i = 1; i <= m; i++) {
        for(int j = max(1, x[i] - k); j <= min(n, x[i] + k); j++)
            a[j]++;
    }
    for(int i = 1; i <= q; i++) {
        if(a[p[i]] % 2)
            cout << "D\n";
        else
            cout << "V\n";
    }
}
void sub2() {
    for(int i = 1; i <= m; i++) {
        int L = max(1, x[i] - k);
        int R = min(n, x[i] + k);
        a[L]++;
        a[R + 1]--;
    }
    for(int i = 1; i <= n; i++)
        a[i] += a[i - 1];
    for(int i = 1; i <= q; i++) {
        if(a[p[i]] % 2)
            cout << "D\n";
        else
            cout << "V\n";
    }
}
void sub3() {
    vector<int> b;
    b.push_back(0);
    for(int i = 1; i <= m; i++) {
        int L = max(1, x[i] - k);
        int R = min(n, x[i] + k) + 1;
        b.push_back(L);
        b.push_back(R);
    }
    for(int i = 1; i <= q; i++)
        b.push_back(p[i]);
    sort(b.begin(), b.end());
    for(int i = 1; i <= m; i++) {
        int L = max(1, x[i] - k);
        L = lower_bound(b.begin(), b.end(), L) - b.begin();
        int R = min(n, x[i] + k) + 1;
        R = lower_bound(b.begin(), b.end(), R) - b.begin();
        a[L]++;
        a[R]--;
    }
    for(int i = 0; i <= 3e5; i++)
        a[i] += a[i - 1];
    for(int i = 1; i <= q; i++) {
        int pos = lower_bound(b.begin(), b.end(), p[i]) - b.begin();
        if(a[pos] % 2)
            cout << "D\n";
        else
            cout << "V\n";
    }
}
int32_t main() {
    freopen("dayden.inp","r",stdin);
    freopen("dayden.out","w",stdout);
    cin >> n >> m >> q >> k;
    for(int i = 1; i <= m; i++)
        cin >> x[i];
    for(int i = 1; i <= q; i++)
        cin >> p[i];
    sub3();
}
/*
7 2 4 1
3 5
2 7 4 5
*/
