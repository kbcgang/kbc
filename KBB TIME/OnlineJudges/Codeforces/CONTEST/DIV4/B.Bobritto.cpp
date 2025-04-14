#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec vector
#define pii pair<int, int>
#define se second
#define fi first
#define pb push_back
#define maxel(v) max_element(v.begin(), v.end())
#define minel(v) *min_element(v.begin(), v.end())
#define yes cout << "YES\n";
#define m1 cout << "-1\n";
#define no cout << "NO\n";
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
void solve() {
    int n, m, l, r;
    cin >> n >> m >> l >> r;
 
    int a = -l, b = r;
    int x = m;
    if (x > a) x = a;
    cout << -x << " " << m - x << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
 
    return 0;
}
