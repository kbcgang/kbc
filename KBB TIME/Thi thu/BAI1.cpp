#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("bai1.inp", "r", stdin);
    freopen("bai1.out", "w", stdout);
    long long N;
    cin >> N;
    long long maxx = 1;

    for (int i = 2; i <= sqrt(N); ++i)
    {
        if (N != i)
        {
            if (N % i == 0) {
                if (N / i == i) {
                    maxx = i;
                } else {
                    maxx = max(maxx, N / i);
                }
            }
        }
    }
    cout << maxx << endl;
    return 0;
}
