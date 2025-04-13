#include <bits/stdc++.h>
using namespace std;
int snt[10000007];
void make_sieve()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= sqrt(1e7); i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= 1e7; j += i)
                snt[j] = 1;
}
int a, b;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    make_sieve();
    for (int i = a; i <= b; i++)
        if (snt[i] == 0)
            snt[-1]++;
    cout << snt[-1];
}
