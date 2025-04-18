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

const kien LIMIT = 1e14;
vector<kien> f1;
bitset<Million + 1> f;
map<kien, vector<kien>> pp;

void sieve(kien n)
{
    f.set();
    f[0] = f[1] = 0;
    for (kien i = 2; i <= n; i++)
    {
        if (f[i])
        {
            f1.push_back(i);
            for (kien j = i * i; j <= n; j += i)
                f[j] = 0;
        }
    }
}

void xuly()
{
    sieve(Million);

    for (kien p : f1)
    {
        kien p2 = p * p;
        if (p2 > LIMIT)
            break;
        pp[3].push_back(p2);
        kien p8 = p2 * p2 * p2 * p2;
        if (p8 <= LIMIT)
            pp[9].push_back(p8);
    }

    for (kien i = 0; i < f1.size(); i++)
    {
        for (kien j = i + 1; j < f1.size(); j++)
        {
            kien p2q2 = (kien)f1[i] * f1[i] * f1[j] * f1[j];
            if (p2q2 > LIMIT)
                break;
            pp[9].push_back(p2q2);
        }
    }
}

kien demm(vector<kien> &arr, kien a, kien b)
{
    return upper_bound(arr.begin(), arr.end(), b) - lower_bound(arr.begin(), arr.end(), a);
}

JAV()
{
    xuly();
    kien K, a, b;
    cin >> K >> a >> b;
    if (K == 2)
    {
        cout << demm(f1, a, b) << "\n";
    }
    else if (K == 3 || K == 9)
    {
        cout << demm(pp[K], a, b) << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
    return 0;
}
