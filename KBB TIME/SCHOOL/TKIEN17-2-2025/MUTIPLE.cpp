#include <bits/stdc++.h>
#define int long long
#define vip 10000007
using namespace std;
int n, q, s, p = 1;
int32_t main()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        s = (s + p) % 2023;
        p = (p * q) % 2023;
    }
    cout << s % 2023;
}