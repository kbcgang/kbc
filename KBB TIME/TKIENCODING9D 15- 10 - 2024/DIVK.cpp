///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

kien uoc(kien n, kien k)
{
    for (kien i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            dem++;
            f[dem] = i;
            if (n / i != i)
            {
                dem++;
                f[dem] = n/i;
            }
        }
    }
    sort(f + 1, f + 1 + dem);
    return f[k];
}

int main()
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
    cout << uoc(n , k);
}
