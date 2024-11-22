/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n, a, b;
bool snt[10000005];
int sum[10000005];
int cou[10000005];
void make_sieve()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= sqrt(1e7); i++)
    {
        if (snt[i] == 0)
        {
            for (int j = i * i; j <= 1e7; j += i)
                snt[j] = 1;
        }
    }
}
void make_sum()
{
    for (int i = 1; i <= 1e7; i++)
    {
        cou[i] = cou[i - 1];
        sum[i] = sum[i - 1];
        if (snt[i] == 0)
        {
            cou[i]++;
            sum[i] += i;
        }
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    make_sieve();
    make_sum();
    while (n--)
    {
        cin >> a >> b;
        if (cou[b] - cou[a - 1] > 0)
            cout << fixed << setprecision(2) << 1.0 * (sum[b] - sum[a - 1]) / (cou[b] - cou[a - 1]) << "\n";
        else
            cout << 0 << "\n";
    }
}