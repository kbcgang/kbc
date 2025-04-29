/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec vector
#define pii pair<int, int>
#define se second
#define fi first
#define pb push_back
#define yes cout << "YES\n";
#define m1 cout << "-1\n";
#define no cout << "NO\n";
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

void DDD() {
    int t;
    cin >> t;
    vector<int> ns(t);
    vector<vector<ll>> arrs(t);
    int nmax = 0;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        ns[i] = n;
        nmax = max(nmax, n);
        auto &a = arrs[i];
        a.resize(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
    }
    const int SIEVE_MAX = 6000000;
    vector<char> isprime(SIEVE_MAX + 1, true);
    isprime[0] = isprime[1] = false;
    vector<int> primes;
    primes.reserve(nmax);
    for (int i = 2; i <= SIEVE_MAX; i++) {
        if (isprime[i]) {
            primes.push_back(i);
            if ((int)primes.size() >= nmax) break;
            if ((ll)i * i <= SIEVE_MAX) {
                for (ll j = (ll)i * i; j <= SIEVE_MAX; j += i)
                    isprime[j] = false;
            }
        }
    }
    vector<ll> Psum(nmax + 1, 0);
    for (int i = 1; i <= nmax; i++) {
        Psum[i] = Psum[i - 1] + primes[i - 1];
    }
    for (int ti = 0; ti < t; ti++) {
        int n = ns[ti];
        auto &a = arrs[ti];
        sort(all(a), greater<ll>());
 
        ll Acum = 0;
        int kmax = 0;
        for (int k = 1; k <= n; k++) {
            Acum += a[k - 1];
            if (Acum >= Psum[k]) {
                kmax = k;
            }
        }
        cout << (n - kmax) << "\n";
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    DDD();
}