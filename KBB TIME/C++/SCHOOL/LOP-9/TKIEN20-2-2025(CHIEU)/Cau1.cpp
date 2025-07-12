/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

const kien MAX_N = 1e5;
vector<kien> aa;
bool f[MAX_N + 1];

void sieve()
{
    fill(f, f + MAX_N + 1, true);
    f[0] = f[1] = false;
    for (kien i = 2; i * i <= MAX_N; i++)
    {
        if (f[i])
        {
            for (kien j = i * i; j <= MAX_N; j += i)
                f[j] = false;
        }
    }
    for (kien i = 2; i <= MAX_N; i++)
    {
        if (f[i])
            aa.push_back(i);
    }
}

JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    sieve();
    kien n;
    cin >> n;

    kien dem = 0;

    for (kien p : aa)
    {
        kien p8 = pow(p, 8);
        if (p8 > n)
            break;
        dem++;
    }
    kien sz = aa.size();
    for (kien i = 0; i < sz; i++)
    {
        kien p2 = aa[i] * aa[i];
        if (p2 > n)
            break;
        for (kien j = i + 1; j < sz; j++)
        {
            kien q2 = aa[j] * aa[j];
            if (p2 * q2 > n)
                break;
            dem++;
        }
    }

    cout << dem << '\n';
    return 0;
}
