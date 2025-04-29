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
    string s;
    cin >> n >> s;
    if (n == 2) {
        if (s == "AB") cout << "Alice\n";
        else cout << "Bob\n";
        return;
    }
    int cnt = 0;
    for (char c : s) if (c == 'A') cnt++;
    if (cnt == 1) {
        cout << "Bob\n";
    } else if (cnt >= n - 1) {
        cout << "Alice\n";
    } else {
        if (s[n-1] == 'A' && (s[0] == 'A' || s[n-2] == 'A'))
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tests; cin >> tests;
    for (int i = 0; i < tests; ++i)
    solve();
}