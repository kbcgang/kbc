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
    vector<pair<kien, kien>> a(n);
    for (kien i = 0; i < n; i++)
    {
        cin >> a[i].second >> a[i].first;
    }
    sort(a.begin(), a.end());
    kien dem = 0, tg = 0;
    for (auto x : a)
    {
        if (x.second >= tg)
        {
            dem++;
            tg = x.first;
        }
    }
    cout << dem << endl;
    return 0;
}