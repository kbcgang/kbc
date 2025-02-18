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
kien n,k,m,dem[Million],f[NT + 5], a[1000000], q, x;
kien maxx,minn, vtr,ans,l,r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("DAYDEN.inp","r"))
    {
        freopen("DAYDEN.inp", "r", stdin);
        freopen("DAYDEN.out", "w", stdout);
    }
    cin >> n >> m >> q >> k;
    for (int x, i =  1; i <= m; i++)
    {
        cin >> x;
        dem[max(1,int(x- k))] = dem[max(1,int(x - k))] + 1;
        dem[min(n,x + k + 1)]--;
    }
    for (int i = 1; i <= n; i++)
    {
        dem[i] = dem[i-1] + dem[i];
    }
    for (int i = 1; i <= q; i++)
    {
        cin >> x;
        if (dem[x] % 2 == 0)
        {
            cout << "V\n";
        }
        else
        {
            cout <<"D\n";
        }
    }
}





/// tôi là kiên đpẹ trai fda