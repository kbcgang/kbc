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
kien maxx,minn, vtr,ans,l,r;

int tknp(int s, int e)
{
    int l = s, r = e;
    int mid, kq = -1;
    int k1, k2;
    while (l <= r)
    {
        mid = (l + r) / 2;
        k1 = (mid + l) * (mid - l + 1) / 2;
        k2 = (mid + r) * (r - mid + 1) / 2;
        if (k2 - k1 >= 0)
        {
            l = mid + 1;
            kq = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    return kq;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> l >> r;
    vtr = tknp(l , r);
    kien k2 = (vtr + r) * (r - vtr + 1) / 2;
    kien k1 = (vtr + l) * (vtr - l + 1) / 2;
    kien k4 = (vtr + 1 + r) * (r - vtr + 2) / 2;
    kien k3 = (vtr + 1 + l) * (vtr - l + 2) / 2;
    if (k2 - k1 > abs(k4 - k3))
    {
        cout << vtr + 1;
    }
    else{
        cout << vtr;
    }
}