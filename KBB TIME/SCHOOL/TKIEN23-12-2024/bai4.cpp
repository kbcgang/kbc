/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

kien find_k(kien pos)
{
    kien l = 1, r = 1e9, kq = 1;
    while (l <= r)
    {
        kien mid = (l + r) / 2;
        kien sum = mid * (mid + 1) / 2;
        if (sum >= pos)
        {
            kq = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return kq;
}

kien tong(kien k)
{
    return (k * (k + 1) % MOD * (2 * k + 1) % MOD * 166666668) % MOD;
}

int main()
{
    kien A, B;
    cin >> A >> B;
    kien kA = find_k(A), kB = find_k(B);
    kien total = 0;
    if (kA == kB)
    {
        total = (B - A + 1) * kA % MOD;
    }
    else
    {
        kien endA = kA * (kA + 1) / 2;
        total = (total + (endA - A + 1) * kA % MOD) % MOD;

        kien startB = (kB - 1) * kB / 2 + 1;
        total = (total + (B - startB + 1) * kB % MOD) % MOD;

        if (kA + 1 <= kB - 1)
        {
            total = (total + tong(kB - 1) - tong(kA) + MOD) % MOD;
        }
    }

    cout << total << endl;
    return 0;
}
