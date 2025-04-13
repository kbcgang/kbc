/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int a, b;
void sub1()
{
    ll ans = 0;
    vector<ll> divisor;
    ll s = 1;
    for (int i = a; i <= b; i++)
        s *= 1ll * i;
    for (ll i = 1; i <= sqrt(s); i++)
        if (s % i == 0)
        {
            divisor.push_back(i);
            if (i * i != s)
                divisor.push_back(s / i);
        }
    for (auto x : divisor)
    {
        ll t = s / x;
        for (auto y : divisor)
            if (y / __gcd(x, y) == t)
                ans++;
    }
    cout << ans << "\n";
}
void make_sieve()
unordered_map<int,int> d;
void ptich(int n)
{
    for(int i=2;i<=sqrt(n);i++)
        while(n%i==0)
        {
            d[i]++;
            n/=i;
        }
    if(n>1) d[n]++;
    return;
}
void sub2()
{
    ll ans=1;
    for(int i=a;i<=b;i++)
    {
        ptich(i);
    }
    for(auto i:d)
        ans=ans*(i.second*2+1)%mod;
    cout<<ans<<"\n";
    d.clear();
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        sub2();
    }
}