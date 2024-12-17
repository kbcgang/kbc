#include <bits/stdc++.h>
using namespace std;
long long n, s, l, r;
long long dem, t,f[10000001], f1[10000001];
void sang()
{
    for (int i = 2; i <= 1000000; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for (int i = 2; i*i <= 1000000; i++)
    {
        if (f[i])
        {
            for (int j = i*i; j <= 1000000; j += i)
            {
                f[j] = 0;
            }
        }
    }
}

long long tong(long long n) {
    if (n == 0) {
        return 0;
    }
    return n%10 + tong(n/10);
}

int main()
{
    sang();
    cin >> l >> r;
    for (int i = l ; i <= r; i++)
    {
        if (f[tong(i)] and f[i])
        {
            dem++;
        }
    }
    cout << dem;
}