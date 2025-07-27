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
kien n, k, m, dem, b, a;

kien xet (kien a, kien b) {
    return (a * b) / __gcd(a, b);
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    while (t--) {
        cin >> n;
        kien lcm = n - 1;
        kien ansa = 1, ansb = n - 1;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                kien a1 = i, b1 = n - i;
                if (a1 > 0 and b1 < 0) {
                    kien lcm1 = xet(a1 , b1);
                    if (lcm1 < lcm) {
                        lcm = lcm1;
                        ansa = a1;
                        ansb = b1;
                    }
                }
                kien a2 = n / i;
                kien b2 = n - a2;
                if (a2 > 0 and b2 > 0) {
                    kien lcm2 = xet(a2, b2);
                    if (lcm2 < lcm) {
                        lcm = lcm2;
                        ansa = a2;
                        ansb = b2;
                    }
                }
            }
        }
        if (ansa > ansb) swap(ansa, ansb);
        cout << ansa << " " << ansb << "\n";
    }
    
}
