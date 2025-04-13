/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll l,r,ans;
bool prime1[45];
vector<ll> prime{2, 3, 5, 7, 11, 13, 17};
ll luythua(ll a, ll b, ll c)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % c;
        a = a * a % c;
        b/=2;
    }
    return res;
}
bool test(ll a, ll m, int k, ll n)
{
    ll res = luythua(a, m, n);
    if (res == n - 1 || res == 1)
        return 1;
    for (int i = 1; i < k; i++)
    {
        res = res * res % n;
        if (res == n - 1)
            return 1;
        if (res == 1)
            return 0;
    }
    return 0;
}
bool MillerRabin(ll n)
{
    for (auto a : prime)
        if (a == n)
            return 1;
    if (n < 23)
        return 0;
    ll m = n - 1, k = 0;
    while (m ^ 1)
    {
        k++;
        m /= 2;
    }
    for (auto a : prime)
        if (!test(a, m, k, n))
            return 0;
    return 1;
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
    cin >> l >> r;
    prime1[2]=prime1[4]=prime1[6]=prime1[10]=prime1[12]=prime1[16]=prime1[18]=prime1[22]=prime1[28]=prime1[30]=prime1[36]=prime1[40]=1;
    for(ll i=2;i<=sqrt(r);i++)
    {
        if(MillerRabin(i))
        {
            ll x=i;
            for(int j=2;j<=41;j++){
                x*=i;
                if(x>r)break;
                if(prime1[j])ans++;
            }
        }
    }cout<<ans;
}