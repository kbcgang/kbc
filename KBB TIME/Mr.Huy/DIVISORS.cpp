#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1e8;

vector<bool> P(MAX_N + 1, true);
vector<int> pr(MAX_N + 1, 0);

void sieve(int n)
{
    P[0] = P[1] = false;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (P[i])
        {
            for (long long j = 1LL * i * i; j <= n; j += 2 * i)
            {
                P[j] = false;
            }
        }
    }
}
int res(int n)
{
    int count = 0;
    pr[2] = 1;
    if (2 * 2 <= n)
    {
        if (2 * 2 * 2 <= n)
            ++count;
    }
    for (long long i = 3; i <= n; i += 2)
    {
        if (i > 3)
            pr[i - 1] = pr[i - 2];
        if (P[i] == true)
        {
            if (i * i <= n)
            {
                if (i * i * i <= n)
                    ++count;
            }
            int x = min(n / i, i - 1);
            count += pr[x];
            pr[i] = pr[i - 1] + 1;
        }
        else
            pr[i] = pr[i - 1];
        // cout<<i<<" "<<count<<"\n";
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    sieve(n);
    cout << res(n);
    return 0;
}