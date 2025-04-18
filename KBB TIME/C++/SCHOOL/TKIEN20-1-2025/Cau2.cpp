/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
const kien MOD = 1e9 + 7;
const vector<kien> prime{2, 3, 5, 7, 11, 13, 17};

kien luythua(kien a, kien b, kien c)
{
    kien res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % c;
        a = a * a % c;
        b >>= 1;
    }
    return res;
}

bool test(kien a, kien m, int k, kien n)
{
    kien res = luythua(a, m, n);
    if (res == n - 1 || res == 1)
        return true;
    for (int i = 1; i < k; i++)
    {
        res = res * res % n;
        if (res == n - 1)
            return true;
        if (res == 1)
            return false;
    }
    return false;
}

bool Millerrabin(kien n)
{
    for (auto a : prime)
        if (a == n)
            return true;
    if (n < 23)
        return false;
    kien m = n - 1, k = 0;
    while (m % 2 == 0)
    {
        m /= 2;
        k++;
    }
    for (auto a : prime)
        if (!test(a, m, k, n))
            return false;
    return true;
}

bool validExponent(int exp)
{
    return exp % 2 == 0 && exp <= 40;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    kien l, r, ans = 0;
    cin >> l >> r;
    for (kien i = 2; i * i <= r; i++)
    {
        if (Millerrabin(i))
        {
            kien x = i;
            for (int exp = 2;; exp++)
            {
                x *= i;
                if (x > r)
                    break;
                if (x >= l && validExponent(exp))
                    ans++;
            }
        }
    }

    cout << ans;
}
