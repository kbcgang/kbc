///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r;

kien demuoc(kien x)
{
    kien dem = 0;
    for (kien i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            dem += 2;
            if (x / i == i)
            {
                dem--;
            }
        }
    }
    return dem;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cout << demuoc(n);
}