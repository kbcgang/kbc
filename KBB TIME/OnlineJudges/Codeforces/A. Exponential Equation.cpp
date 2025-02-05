#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll a, ll b) {
    ll result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result *= a;
        }
        a *= a;
        b /= 2;
    }
    return result;
}

void findPair(ll n) {
    ll minDiff = LLONG_MAX;
    ll resultX = -1, resultY = -1;

    for (ll x = 1; x <= 30; ++x) {
        for (ll y = 1; y <= 30; ++y) {
            ll term1 = power(x, y) * y;
            ll term2 = power(y, x) * x;
            if (term1 + term2 == n) {
                ll diff = abs(x - y);
                if (diff < minDiff) {
                    minDiff = diff;
                    resultX = x;
                    resultY = y;
                }
            }
        }
    }

    if (resultX != -1 && resultY != -1) {
        cout << resultX << " " << resultY << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        findPair(n);
    }

    return 0;
}