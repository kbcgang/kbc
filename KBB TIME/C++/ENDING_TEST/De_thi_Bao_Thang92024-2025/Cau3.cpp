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
kien n,k,m,dem, f[25000000];
kien maxx,minn, vtr,ans,l,r;

int tongcs(int n)
{
    int res = 0;
    while (n > 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

void sanguoc()
{
    for (int i = 1; i <= Million; i++)
    {
        for (int j = i; j <= Million; j += i)
        {
            f[j]++;
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sanguoc();
    cin >> n;
    for (int  i = 2; i <= n; i++)
    {
        if (tongcs(i) % 2 == 0)
        {
            if (f[i] % 2 == 0)
            {
                dem++;
            }
        }
    }
    cout << dem;
}   