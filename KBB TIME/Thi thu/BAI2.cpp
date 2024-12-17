#include <bits/stdc++.h>
using namespace std;
long long x,y,n,w,z,l1,l2;
long long kq;
int main()
{
    freopen("bai2.inp", "r", stdin);
    freopen("bai2.out", "w", stdout);
    cin >> x >> y >> n;
    if (n == 1)
    {
        w = x * 2;
        cout << max(w,y)/min(w,y);
    }
    else
    {
        if (n % 2 != 0)
        {
            l1 = n / 2 + 1;
            l2 = n / 2;
        }
        else
        {
            l1 = l2 = n/2;
        }
        w = l1 * x;
        z = l2 * y;
        kq = max(w,z)/min(w,z);
        cout << kq;
    }
}
