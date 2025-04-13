/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int snt[10000005];
int res[10000005];
ll a, b;
bool dx(int n)
{
    int s = 0, m = n;
    while (n > 0)
    {
        s = s * 10 + n % 10;
        n /= 10;
    }
    return m == s;
}
void make_sieve()
{
    for (int i = 2; i <= sqrt(b); i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= b; j += i)
                snt[j] = 1;
    for (int i = 2; i <= b; i++)
        if (!snt[i] && dx(i))
            res[i] = res[i - 1] + 1;
        else
            res[i] = res[i - 1];
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
    cin>>a>>b;
    ll m=sqrt(a);
    if(m*m==a)a=m;
    else a=m+1;
    b=sqrt(b);
    make_sieve();
    cout<<res[b]-res[a-1];
}