///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 100000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem, f[Million];
kien maxx,minn, vtr,ans,l,r;

int phantich(int x)
{
    kien res = 1;
    int dem = 0;
    for (kien i = 2; i * i <= x; i++)
    {
        while (x % i == 0)
        {
            res *= i;
            x /= i;
            dem++;
        }
    }
    if (x > 1)
    {
        res *= x;
        dem++;
    }
    if (dem == 1)
    {
        return 1;
    }
    return res;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien q;
    cin >> q;
    while (q--)
    {
        cin >> n;
        if (phantich(n) == 1)
        {
            cout << "NO\n";
        }
        else if (phantich(n) <= n)
        {
            cout << "YES\n";
        }
    }
}