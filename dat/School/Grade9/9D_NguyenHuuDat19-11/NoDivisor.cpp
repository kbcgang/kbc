#include<bits/stdc++.h>
#define int long long
#define MOD 1000000007
using namespace std;
int tonguoc(int n)
{
    int s = 0;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            s += i + n / i;
        if(n == i * i)
            s -= i;
    }
    return s;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int kq = 0;
    if(n % 2 == 0)
    {
        kq = (n / 2) * (n + 1) % MOD;
    }
    else
    {
        kq = (n * ((n + 1) / 2)) % MOD;
    }
    kq -= tonguoc(n);
    kq %= MOD;
    kq = (kq + MOD) % MOD;
    cout << kq << endl;
}
