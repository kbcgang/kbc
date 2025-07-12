///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien a,ans,b,r,l,bcnn,f[NT + 5];

void sangNT()
{
    for (int i = 1; i <= NT; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for (int i = 2; i <= sqrt(NT); i++)
    {
        if (f[i])
        {
            for (int j = i*i; j <= NT; j += i)
            {
                f[j] = 0;
            }
        }
    }
}

int daoso(int n)
{
    int sodao = 0;
    int dem = 0;
    while (n > 0)
    {
        sodao = sodao*10;
        sodao += n % 10;
        n /= 10;
    }
    return sodao;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI02.INP", "r"))
    {
        freopen("BAI02.INP", "r", stdin);
        freopen("BAI02.OUT", "w", stdout);
    }
    sangNT();
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (f[i])
        {
            if (f[daoso(i)])
            {

                ans++;
            }
        }
    }
    cout << ans;
}
