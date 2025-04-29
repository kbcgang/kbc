/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
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
#define m1 cout << "-1\n";
#define no cout << "NO\n";
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

template <typename T>
void printa(const vec<T> a) {
    for (auto& p: a) {
        cout << p << ' ';
    }
    cout << endl;
}
template<typename T1, typename T2>
ostream& operator << (ostream& out, const pair<T1, T2>& p){
    return out << "(" << p.first << ", " << p.second << ")";
}

template<typename T>
ostream& operator << (ostream& out, const vector<T>& v){
    out << "[";
    for (int i = 0; i < v.size(); i++){
        if (i) out << ", ";
        out << v[i];
    }
    out << "]";
    return out;
}

template<typename T1, typename T2>
istream& operator >> (istream& in, pair<T1, T2>& p){
    in >> p.first;
    in >> p.second;
    return in;
}

template<typename T>
istream& operator >> (istream& in, vector<T>& v){
    for (auto& e : v) in >> e;
    return in;
}
template <typename T>
void printrb(vector<T>* rb, int n) {
    for (int u = 0; u < n; ++u) {
        for (const T& v : rb[u]) {
            cout << u << " -> " << v << '\n';
        }
    }
}
template <typename T>
void print2d(const vec<vec<T>> &vec) {
    for (const auto &row : vec) {
        for (const auto &i : row) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void solve() {
    int n;
    cin >> n;
    vec<ll> a(n+1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    vec<ll> pref(n+1), suf(n+2);
    pref[1] = a[1];
    for (int i = 2; i <= n; i++)
        pref[i] = max(pref[i-1], a[i]);
    
    suf[n+1] = 0;
    for (int i = n; i >= 1; i--)
        suf[i] = suf[i+1] + a[i];
    
    for (int k = 1; k <= n; k++) {
        int pi = n - k + 1;
        ll s1 = suf[n - k + 2];
        ll s2 = suf[pi];
        ll ans = max(s1 + pref[pi], s2);
        cout << ans << " ";
    }
    cout << endl;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; 
    cin >> t;
    for (int i = 0; i < t; ++i)
        solve();
}
