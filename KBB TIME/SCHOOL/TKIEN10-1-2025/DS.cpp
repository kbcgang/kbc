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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    vector<kien> A(n);
    unordered_map<kien, kien> pp;
    for (kien i = 0; i < n; i++)
    {
        cin >> A[i];
        pp[A[i]]++;
    }
    kien sum = (n * (n - 1)) / 2;
    kien same = 0;
    for (auto &p : pp)
    {
        kien x = p.second;
        same += (x * (x - 1)) / 2;
    }

    kien ans = sum - same;
    cout << ans << endl;

    return 0;
}
