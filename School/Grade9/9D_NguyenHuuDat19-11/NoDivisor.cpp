/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long n;
long long s, checks;
long long t;
bool ktnt(long long n)
{
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
        return 0;
    return 1;
}
void bigprime()
{
    for(long long i=10e9; ;i--)
    {
        if(ktnt(i)==1)
        {
            cout<<i<<"\n";
            n=i;
            return;
        }
    }
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    //     freopen(".inp","r",stdin);
    //     freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    // bigprime();
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            s =( s + (i + 1ll*(n / i)))%mod;
            checks += i + 1ll*(n / i);
        }
        if (1ll * i * i == n)
        {
            s -= i;
            checks -= i;
        }
    }

    if(n%2==0)
        t=((n/2)%mod)*((n+1)%mod);
    else
        t=(((n+1)/2)%mod)*(n%mod);
    long long check = n * (n + 1) / 2;
    // cout<<check<<"\n";
    cout << (check - checks)%mod << "\n";   ///code trâu
    cout << (t - s)%mod;
}