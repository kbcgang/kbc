#include <bits/stdc++.h>
using namespace std;
#define kien long long
const int Million = 1e6;
const int MXN = 3e4;
kien n , k, a[Million];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    vector <int> vec;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        vec.push_back(a[i]);
    }
    sort (vec.begin(), vec.end());
    for (int i = 1; i <= n; i++) {
        a[i] = lower_bound(vec.begin(), vec.end(), a[i]) - vec.begin() + 1;
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
}
