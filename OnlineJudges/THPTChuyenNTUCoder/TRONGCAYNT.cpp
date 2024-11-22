#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[1000005], x, m;
bool snt[10000007];
void make_sieve()
{
    snt[0] = 1;
    snt[1] = 1;
    for (int i = 2; i <= sqrt(1e7); i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= 1e7; j += i)
                snt[j] = 1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make_sieve();
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (snt[x]==0)
        {
            a[m] = x;
            m++;
        }
    }
    if (m == 0)
        cout << -1;
    else
    {
        sort(a, a + m);
        if (m % 2 == 1)
        {
            for (int i = 1; i < m; i += 2)
                cout << a[i] << " ";
            for (int i = m - 1; i >= 0; i -= 2)
                cout << a[i] << " ";
        }
        else{
            for (int i = 0; i < m; i += 2)
                cout << a[i] << " ";
            for (int i = m - 1; i >= 0; i -= 2)
                cout << a[i] << " ";
        }
    }
}