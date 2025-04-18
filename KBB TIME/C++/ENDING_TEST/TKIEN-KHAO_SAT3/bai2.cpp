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
kien n,k,m,dem, f[Million];
kien maxx,minn, vtr,ans,l,r;

void sangNT()
{
    for (int i = 2; i <= Million; i++)
    {
        f[i] = 1;
    }
    f[0]= f[1] = 0;
    for (int i = 2; i <= Million; i++)
    {
        if (f[i] == 1)
        {
            for (int j = i; j <= Million; j += i)
            {
                f[j] = i;
            }
        }
    }
}

int Deepseek(int x)
{
    int dem = 0;
    while (x > 1)
    {
        x /= f[x];
        dem++;
    }
    return dem;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        ans += Deepseek(i);
    }
    cout << ans;                    
}