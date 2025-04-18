/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000];
kien maxx, minn, vtr;

int main()
{
    kien n;
    cin >> n;
    kien a[n];
    for (kien i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    kien minn = a[0];
    kien maxx = INT_MIN;
    for (kien j = 1; j < n; j++)
    {
        maxx = max(maxx, a[j] - minn);
        minn = min(minn, a[j]);
    }
    cout << maxx << "\n";
    return 0;
}
