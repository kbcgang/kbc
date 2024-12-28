///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000];
kien maxx, minn, vtr;

kien lcm(kien a, kien b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    cin >> n >> k;
    vector<kien> a(n);
    for (kien i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (kien i = 0; i < n; i++)
    {
        for (kien j = i + 1; j < n; j++)
        {
            if (lcm(a[i], a[j]) > k)
            {
                dem++;
            }
        }
    }

    cout << dem << endl;
    return 0;
}
