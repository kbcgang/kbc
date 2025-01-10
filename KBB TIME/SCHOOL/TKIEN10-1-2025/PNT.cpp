///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem;
kien a,b,c, vtr,ans,l,r;

bool ktr(int x)
{
    if (x < 2)
    {
        return false;
    }
    if (x == 2)
    {
        return true;
    }
    else
    {
        for (int i = 2; i <= sqrt(x); i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> c;
    while (a > 0)
    {
        if (ktr(a) == true)
        {
            cout << 0 << "\n";
            dem++;
            break;
        }
        a /= 10;
    }
    if (dem == 0)
    {
        cout << 1 << "\n";
    }
    dem = 0;
    while (b > 0)
    {
        if (ktr(b) == true)
        {
            cout << 0 << "\n";
            dem++;
            break;
        }
        b /= 10;
    }
    if (dem == 0)
    {
        cout << 1 << "\n";
    }
    dem = 0;
    while (c > 0)
    {
        if (ktr(c) == true)
        {
            cout << 0 << "\n";
            dem++;
            break;
        }
        c /= 10;
    }
    if (dem == 0)
    {
        cout << 1 << '\n';
        dem = 0;
    }
}