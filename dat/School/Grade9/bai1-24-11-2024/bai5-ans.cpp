#include <bits/stdc++.h>
using namespace std;
int k[1001];
int n, m, L, R;
void docf()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> k[i];
}
int check(int M)
{
    vector<int> a;
    a.resize(M + 1, m);
    for (int i = 1; i <= n; i++)
    {
        int j = 1;
        while (j <= M)
            if (a[j] >= k[i])
            {
                a[j] -= k[i];
                break;
            }
            else
                j++;
        if (j > M)
            return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    freopen("bai5.inp", "r", stdin);
    freopen("bai5.out", "w", stdout);
    docf();
    sort(k + 1, k + n + 1, greater<int>());
    L = 1;
    R = n;
    while (L <= R)
    {
        int M = (L + R) / 2;
        if (check(M))
            R = M - 1;
        else
            L = M + 1;
    }
    cout << R + 1;
    return 0;
}
