#include <bits/stdc++.h>
#define ll long long
using namespace std;
int dem[2000005];
ll ans;
int l, r;
int snt[2000005];
void make_sieve()
{
    for (int i = 0; i <= r; i++)
        snt[i] = 1;
    for (int i = 2; i <= r; i++)
        if (snt[i] == 1)
            for (int j = i; j <= r; j += i)
                snt[j] *= i;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> l >> r;
    make_sieve();
    for (int i = l; i <= r; i++)
    {
        if (snt[i] != 1)
        {
            ans += dem[snt[i]];
            dem[snt[i]]++;
        }
    }
    cout << ans;
}