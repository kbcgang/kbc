#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
string s,ans;
double tbc;
main()
{
    if (fopen("TRONGSO.inp", "r"))
    {
        freopen("TRONGSO.inp", "r", stdin);
        freopen("TRONGSO.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (n--)
    {
        cin >> s;
        int dem = 0, t = 0;
        string so;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                dem++;
                t += s[i] - 48;
                so += s[i];
            }
        }
        if (dem != 0)
        {
            double tam = 1.0 * t / dem;
            if (tam > tbc)
            {
                tbc = tam;
                ans = so;
            }
        }
    }
    cout << ans;
}