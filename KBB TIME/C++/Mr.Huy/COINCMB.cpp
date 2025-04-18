/// hãy làm Sư tử, đừng làm Nai.
/// hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmail.com
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, x, f[NT + 5], a[Million];
int tien;

int main()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    f[0] = 1;
    for (int i = 0; i < n; i++)
    {
        tien = a[i];
        for (int j = tien; j <= x; j++)
        {
            f[j] = (f[j] + f[j - tien]) % MOD;
        }
    }
    cout << f[x] << "\n";
    return 0;
}
