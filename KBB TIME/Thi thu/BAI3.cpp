#include <bits/stdc++.h>
using namespace std;
string s;
long long n,p,t;
int main()
{
    freopen("BAI3.inp", "r", stdin);
    freopen("BAI3.out", "w", stdout);
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> s;
        n = s.size();
        for (int i = 0; i < n; i++)
        {
            p += int(s[i]-48);
        }
        long long j = sqrt(p);
        if (j*j == p)
        {
            cout << 1 << "\n";
        }
        else cout << 0 << "\n";
        p = 0;
    }
}
