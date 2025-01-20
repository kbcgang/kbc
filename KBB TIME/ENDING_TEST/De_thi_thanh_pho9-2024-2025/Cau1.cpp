///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien a,b,c,n,dem, l, k;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> c >> n;
    if (n % (a + b) > 0)
    {
        dem = n / (a + b);
        if (dem*a < n)
        {
            l = dem*a*c + (n - ((dem*a) + (dem*b)))*c;
            k = (dem+1)*a * c;
            cout << min(l,k);
        }
    }
    else
    {
        cout << (n / (a + b))*a*c;
    }
}