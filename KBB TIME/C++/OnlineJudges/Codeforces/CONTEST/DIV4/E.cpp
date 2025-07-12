#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec vector
//#define int long long
#define pii pair<int, int>
#define se second
#define fi first
#define pb push_back
#define maxel(v) *max_element(v.begin(), v.end())
#define minel(v) *min_element(v.begin(), v.end())
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef int64_t i64;
 
void solve() {
    int n; cin >> n;
    vec<i64> a(n);
    for (auto& x : a) cin >> x;
    vec<int> cnt(30, 0);
    for (auto x : a) {
        for (int j = 0; j < 30; j++)
            if (x & (1LL << j)) cnt[j]++;
    }
 
    i64 ans = 0;
    for (auto x : a) {
        i64 s = 0;
        for (int j = 0; j < 30; j++) {
            if (x & (1LL << j))
                s += (n - cnt[j]) * (1LL << j);
            else
                s += cnt[j] * (1LL << j);
        }
        ans = max(ans, s);
    }
    cout << ans << endl;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    for (int i = 0; i < t; ++i)
        solve();
}
