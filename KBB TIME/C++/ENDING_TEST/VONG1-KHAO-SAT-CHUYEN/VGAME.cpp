/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[Million + 5];
kien maxx, minn, vtr, ans, l, r;

void sanguoc() {
    for (int i = 1; i <= Million; i++) {
        f[i] = 1;
    }
    for (int i = 2; i <= Million; i++) {
        for (int j = i; j <= Million; j += i) {
            f[j] += i;
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sanguoc();
    kien q;
    cin >> q;
    while (q--) {
        cin >> n;
        cout << f[n] << " ";
    }
    
}
