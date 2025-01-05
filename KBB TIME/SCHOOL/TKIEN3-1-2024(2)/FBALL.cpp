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
kien p,q,r,s,u,v;

void tinhdiem(kien x, kien y, kien&m, kien&n)
{
    if (x > y)
    {
        m += 3;
    }
    else if (x < y)
    {
        n += 3;
    }
    else
    {
        m++;
        n++;
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien a = 0,b = 0, c = 0;
    cin >> p >> q >> r >> s >> u >> v;
    tinhdiem(p,q,a,b);
    tinhdiem(r,s,a,c);
    tinhdiem(u,v,b,c);
    cout << a << " " << b << " " << c;
}