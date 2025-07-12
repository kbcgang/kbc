///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int n,k,m,dem,f[5*Million + 5];
int maxx,minn, vtr,ans;

void sang()
{
    for (int i  = 2; i <= 5*Million; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for (int i = 2; i <= 5*Million; i++)
    {
        if (f[i] == 1)
        {
            for (int j = i; j <= 5*Million; j += i)
            {
                f[j] = i;
            }
        }
    }
}

int ktr(int x)
{
    int so = 1, vtr = 0;
    while (x > 1)
    {
        if (vtr != f[x])
        {
            vtr = f[x];
            so *= f[x];
        }
        x /= f[x];
    }
    return so;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sang();
    cin >> m;
    maxx = - 1;
    for (int i = 2; i <= m; i++)
    {
        if (maxx <= ktr(i))
        {
            maxx = ktr(i);
            ans = i;
        }
    }
    cout << ans;
}