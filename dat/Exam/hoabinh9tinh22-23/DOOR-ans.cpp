#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair <ll, ll> ii;
ll n, a, b;
ll so ()
{
    if (__gcd (a, b) != 1)
        return b;
//    cout<<1;
    ll mao = INT_MAX;

    for (ll i = 2; i <= sqrt (a); i ++)
        if (a % i == 0)
        {
            ll j = a / i;
            ll t=ceil (double (b) / i) * i;
            ll t1=ceil (double (b) / j) * j;
            mao = min (mao, t);
            mao = min (mao,t1);
        }
    mao = min (mao, (ll (ceil (double (b) / a) * a)));
    return mao;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen ("DOOR.inp","r"))
    {
        freopen("DOOR.inp","r",stdin);
        freopen("DOOR.out","w",stdout);
    }
    cin >> n;
    for (ll i = 1; i <= n; i ++)
    {
        cin >> a >> b;
        cout << so () - b<< '\n';
    }
}
