/// Hãy làm Sư tử, đừng làm Nai.
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
const int BASE = 257;
kien n, pow1[Million + 5], fs[Million + 5], frev[Million + 5];

bool ktr(int mid) {
    if (mid == 0) return true;
    for (int i = 1; i <= n - mid + 1; i++) {
        int j = i + mid - 1;
        kien xuoi = (fs[j] - (fs[i-1] * pow1[mid]) % MOD) % MOD;
        if (xuoi < 0) xuoi += MOD;
        int a = n - j + 1;
        int b = n - i + 1;
        kien nguoc = (frev[b] - (frev[a-1] * pow1[mid]) % MOD) % MOD;
        if (nguoc < 0) nguoc += MOD;
        if (xuoi == nguoc) return true;
    }
    return false;
}

JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    string s;
    cin >> s;
    string rev;
    rev.reserve(n);
    for (int i = n - 1; i >= 0; i--) 
    	rev.push_back(s[i]);
    pow1[0] = 1;
    for (int i = 1; i <= n; i++) {
    	pow1[i] = (pow1[i-1] * BASE) % MOD;
    }
    fs[0] = 0;
    for (int i = 1; i <= n; i++) {
        fs[i] = ((fs[i-1] * BASE) % MOD + (s[i-1] - 'a' + 1)) % MOD;
    }
    frev[0] = 0;
    for (int i = 1; i <= n; i++) {
        frev[i] = ((frev[i-1] * BASE) % MOD + (rev[i-1] - 'a' + 1)) % MOD;
    }
    int l = 0, r = (n - 1) / 2;
    int le = 1; 
    while (l <= r) {
        int mid = (l + r) >> 1;
        int len = 2 * mid + 1;
        if (ktr(len)) {
            le = len;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    l = 1; r = n / 2;
    int chan = 0;
    while (l <= r) {
        int mid = (l + r) >> 1; 
        int len = 2 * mid;
        if (ktr(len)) {
            chan = len;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << max(chan, le) << '\n';
} 
