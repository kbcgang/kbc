///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien a[1000000],ans,ansb,r,l,bcnn,f[NT + 5],n;

void sangNT()
{
    for (int i = 1; i <= NT; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;              /// 2 3 4 5 6 7 8 9 10
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

int bacthang(int n)
{
    int bacthang = INT_MAX, str = 0;
    int dem = 0;
    if (n < 10)
    {
        return 0;
    }
    while (n > 0)
    {
        str = n % 10;
        if (str < bacthang)
        {
            bacthang = str;
        }
        else
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI04.INP", "r"))
    {
        freopen("BAI04.INP", "r", stdin);
        freopen("BAI04.OUT", "w", stdout);
    }
    sangNT();
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (bacthang(a[i]) == 1)
        {
            if (f[a[i]])
            {
                ans++;
            }
        }
    }
    cout << ans;
}
