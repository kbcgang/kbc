///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 100000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[Million + 5], a[1000000], l1, r1;
kien maxx[Million + 5],minn, vtr[Million + 5],ans,l,r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i-1] + a[i];
    }
    maxx[n + 1] = INT_MIN;
    for (int i = n; i >= 1; i--)
    {
        if (f[i] >= maxx[i+1])
        {
            maxx[i] = f[i];
            vtr[i] = i;
        }
        else
        {
            maxx[i] = maxx[i+1];
            vtr[i] = vtr[i+1];
        }
    }
    ans = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        if (ans < maxx[i] - f[i-1])
        {
            ans = maxx[i] - f[i-1];
            l1 = i;
            r1 = vtr[i];
        }
    }
    cout << ans << "\n";
    for (int i = l1; i <= r1; i++)
    {
        cout << a[i] << ' ';
    }
}