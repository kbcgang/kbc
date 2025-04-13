/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, ans, ass;
#define ErasLimit 5000005
int snt[ErasLimit];
void make_sieve()
{
    for (int i = 2; i <= sqrt(ErasLimit); i++)
        if (snt[i] == 0)
        {
            snt[i] = i;
            for (int j = i * i; j <= ErasLimit; j += i)
                if (snt[j] == 0)
                    snt[j] = i;
        }
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
    cin >> n;
    make_sieve();
    for (int i = 2; i <= n; i++)
    {
        int m = i;
        int res = 1, t = 0;
        while (m > 1)
        {
            if (snt[m] != t)
            {
                res *= snt[m];
                t = snt[m];
            }
            m /= snt[m];
        }
        if (res > ass)
        {
            ass = res;
            ans = i;
        }
    }
    cout << ans;
}