/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
long long n, k;
// vector<long long> a;
long uoc = 1;
void demuoc(long long n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        int dem = 0;
        while (n % i == 0)
        {
            dem++;
            n /= i;
        }
        uoc *= (dem + 1);
    }
    if(n>1) uoc*=2;
}
main()
{
     if(fopen("DIVK.inp","r"))
    {
        freopen("DIVK.inp","r",stdin);
        freopen("DIVK.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    //    n = 1e15;
    //    k = 1000;
    demuoc(n);
    // cout<<uoc;
    if (k > uoc)
    {
        cout << -1;
        exit(0);
    }
    int dau = 0, cuoi = uoc+1;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            dau++;
            cuoi--;
            if (dau == k)
            {
                cout << i;
                exit(0);
            }
            if (cuoi == k)
            {
                cout << n / i;
                exit(0);
            }
        }
    }
}
