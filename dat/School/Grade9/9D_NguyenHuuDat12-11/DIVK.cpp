/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long n;
vector<long long> d;
long k;
void make_div()
{
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            if(i*i!=n)
            d.push_back(n / i);
            // if (i * i == n)
            //     d.pop_back();
        }
    }
}
kien()
{
    if(fopen("DIVK.inp","r"))
    {
        freopen("DIVK.inp","r",stdin);
        freopen("DIVK.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n>>k;
    make_div();
    if (k > d.size())
        cout << -1;
    else
    {
        sort(d.begin(), d.end());
        cout << d[k - 1];
    }
}